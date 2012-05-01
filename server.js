var app = require('http').createServer(handler)
  , io = require('socket.io').listen(app)
  , fs = require('fs')
  , cl = require('./class.js')
var SerialPort = require("serialport").SerialPort
var serialPort = new SerialPort("/dev/ttyUSB1");
app.listen(2000);
io.set('log level', 1);

function handler (req, res) {
  fs.readFile(__dirname + '/index.html',
  function (err, data) {
    if (err) {
      res.writeHead(500);
      return res.end('Error loading index.html');
    }

    res.writeHead(200);
    res.end(data);
  });
}

//var game = false;

io.sockets.on('connection', function (socket) {

	game.addPlayer(socket.id);

	socket.on('msg', function (data) {
		console.log(data);
		if(data.movePlayer || data.movePlayer === 0){
			game.movePlayer(socket.id, data.movePlayer);
		}
	});

});


var ball = Class.extend({
	init: function(x, y){
		this.x = x;
		this.y = y;
		this.dirX = this.getDir();
		this.dirY = this.getDir();
	},

	getDir: function(){
		return 1; // TODO randomly return +1 OR -1
	},

	move: function(){
		// check for width
		if((this.x === 0 && this.dirX === -1)
		 ||	(this.x === game.cols-1 && this.dirX === 1)
		){
			this.dirX *= -1;
		}
		// check for height
		if(this.y === 1 && this.dirY === -1){
			if(this.x+this.dirX < game.p1.x || this.x+this.dirX > game.p1.x+2){
				game.gameOver = true;
				console.log('game over');
				return;
			}
			this.dirY *= -1;
		}
		else if(this.y === game.rows-2 && this.dirY === 1){
			if(this.x+this.dirX < game.p2.x || this.x+this.dirX > game.p2.x+2){
				game.gameOver = true;
				console.log('game over');
				return;
			}
			this.dirY *= -1;
		}

		this.x += this.dirX;
		this.y += this.dirY;
	}
})

var player = Class.extend({
	init: function(x, y, length){
		this.id = false;
		this.x = x;
		this.y = y;
		this.length = length;
	}
})

var game = {
	rows: 18,
	cols: 12,
	ball: new ball(5, 4),
	p1: new player(0, 0, 3),
	p2: new player(0, 17, 3),
	pixels: [],
	gameOver: false,
//	loop.loop(),

	movePlayer: function(userId, pos){
		if(this.p1.id === userId){
			if(pos == 'left' && this.p1.x !== 0){
				this.p1.x--;
			}
			if(pos == 'right' && this.p1.x !== this.cols - 3){
				this.p1.x++;
			}
		}
		else if(this.p2.id === userId){
			if(pos == 'left' && this.p2.x !== 0){
				this.p2.x--;
			}
			if(pos == 'right' && this.p2.x !== this.cols - 3){
				this.p2.x++;
			}
		}
	},

	addPlayer: function(userId){
		console.log('usrId ', userId);
		if(this.p1.id === false){
			if(this.p1.id === userId){
				console.log('USER1 ALREADY REGISTERED');
				return;
			} else {
				console.log('first usr');
				this.p1.id = userId;
				return;
			}
		}

		if(this.p2.id !== false || this.p2.id === userId){
			console.log('USER2 ALREADY REGISTERED');
			return;
		} else {
			console.log('second usr');
			this.p2.id = userId;
			loop.loop(); // start the game
		}
	},

	getData: function(){
		this.clearPixels();
		this.fillPixels();

//		var re = '';
//		for(var i=0; i<this.rows; i++){
//			for(var j=0; j<this.cols; j++){
//				re += this.pixels[i][j];
//			}
//		}

		var re = '';
		for(var i=0; i<this.rows; i++){
			var tmp = '';
			for(var j=0; j<this.cols; j++){
				tmp += this.pixels[i][j];
			}
//			tmp += parseInt(tmp, 2);
			tmp = this.convert(tmp);
			console.log(tmp);
			re += tmp;

		}
		console.log(re);
		return re;
	},

	getData2: function(){
		this.clearPixels();
		this.fillPixels();

		var re = '';
		for(var i=0; i<this.rows; i++){
			for(var j=0; j<this.cols; j++){
				re += this.pixels[i][j];
			}
		}
		return re;
	},

	getData3: function () {
		this.clearPixels();
		this.fillPixels();

		var re = ''+this.p1.x + '' + this.p2.x + this.convert2(this.ball.y) + this.convert2(this.ball.x);
		return re;
	},

	convert: function(tmp){
		tmp = parseInt(tmp, 2);
		tmp += '';
		switch(tmp.length){
			case 1:
				tmp = '000'+tmp;
				break;
			case 2:
				tmp = '00'+tmp;
				break;
			case 3:
				tmp = '0'+tmp;
				break;
		}
		return tmp;
	},

	convert2: function(num){
		switch(num){
			case 10:
				num = ':';
				break;
			case 11:
				num = ';';
				break;
			case 12:
				num = '<';
				break;
			case 13:
				num = '=';
				break;
			case 14:
				num = '>';
				break;
			case 15:
				num = '?';
				break;
			case 16:
				num = '@';
				break;
			case 17:
				num = 'A';
				break;
			default:
				num += '';
				break;
		}
		return num;
	},

	fillPixels: function(){
		this.pixels[this.ball.y][this.ball.x] = 1;
		for(var i=0; i<game.p1.length; i++){
			this.pixels[this.p1.y][this.p1.x+i] = 1;
		}
		for(var i=0; i<game.p2.length; i++){
			this.pixels[this.p2.y][this.p2.x+i] = 1;
		}
	},

	clearPixels: function(){
		for(var i=0; i<this.rows; i++){
			if(!this.pixels[i]) { this.pixels[i] = []; }
			for(var j=0; j<this.cols; j++){
				this.pixels[i][j] = 0;
			}
		}
	}

}

var ballLast=0;

var loop = {
	step: 100,
	// ballLast: 0,
	last: 0,
	now: 0,
	gameOver: 2000,

	loop: function(){
		if(!game.gameOver){
			// console.log(ballLast);
			if(ballLast %2 === 0){
				// console.log('ballmove');
				game.ball.move();
			}
			ballLast++;
			//io.sockets.emit('msg', { render: game.getData3()});
			serialPort.write(game.getData3());
			setTimeout(loop.loop, loop.step);
		} else {
			game.gameOver = false;
			game.ball = false;
			game.ball = new ball(5, 2);
			serialPort.write('?000');
			console.log('?000');
			// '?000'
			setTimeout(loop.loop, loop.gameOver);
		}
	}
}
