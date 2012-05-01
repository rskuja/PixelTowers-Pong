int h1 = 21;
int h2 = 20; 
int h3 = 19; 
int h4 = 18; 
int h5 = 17; 
int h6 = 16; 
int h7 = 15; 
int h8 = 14; 
int h9 = 11; 
int h10 = 10; 
int h11 = 2; 
int h12 = 3; 
int h13 = 4; 
int h14 = 5; 
int h15 = 6; 
int h16 = 7; 
int h17 = 8; 
int h18 = 9;


int w11_1 = 49;
int w11_2 = 48;

int w10_1 = 47;
int w10_2 = 46;

int w9_1 = 45;
int w9_2 = 44;

int w8_1 = 43;
int w8_2 = 42;

int w7_1 = 41;
int w7_2 = 40;

int w6_1 = 39;
int w6_2 = 38;

int w5_1 = 37;
int w5_2 = 36;

int w4_1 = 35;
int w4_2 = 34;

int w3_1 = 33;
int w3_2 = 32;

int w2_1 = 31;
int w2_2 = 30;

int w1_1 = 29;
int w1_2 = 28;

int w0_1 = 27;
int w0_2 = 26;
int grid[6][18][12]= {
{
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0},
{0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
},
{
 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0},
{0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0},
{0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0},
{0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
},
{  
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0},
{1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0},
{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
{0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},
{0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0},
{0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0},
{0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
}
}; 
int pins1[] = {1,0,0,0,0,0,0,0,0,0,0};
int inData[4];
int rows[] = {h1,h2,h3,h4,h5,h6,h7,h8,h10,h9,h11,h12,h13,h14,h15,h16,h17,h18};
int toplines[] = {w0_1,w1_1,w2_1,w3_1,w4_1,w5_1,w6_1,w7_1,w8_1,w9_1,w10_1,w11_1};
int botlines[] = {w0_2,w1_2,w2_2,w3_2,w4_2,w5_2,w6_2,w7_2,w8_2,w9_2,w10_2,w11_2};

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(h1, OUTPUT); 
  pinMode(h2, INPUT); 
  pinMode(h3, INPUT);
  pinMode(h4, INPUT); 
  pinMode(h5, INPUT); 
  pinMode(h6, INPUT);
  pinMode(h7, INPUT); 
  pinMode(h8, INPUT); 
  pinMode(h9, INPUT);
  pinMode(h10, INPUT); 
  pinMode(h11, INPUT); 
  pinMode(h12, INPUT);
  pinMode(h13, INPUT); 
  pinMode(h14, INPUT); 
  pinMode(h15, INPUT);
  pinMode(h16, INPUT); 
  pinMode(h17, INPUT); 
  pinMode(h18, OUTPUT);
  
  pinMode(w0_1, OUTPUT);
  pinMode(w0_2, OUTPUT);
  pinMode(w1_1, OUTPUT);
  pinMode(w1_2, OUTPUT);
  pinMode(w2_1, OUTPUT);
  pinMode(w2_2, OUTPUT);
  pinMode(w3_1, OUTPUT); 
  pinMode(w3_2, OUTPUT);
  pinMode(w4_1, OUTPUT);
  pinMode(w4_2, OUTPUT);
  pinMode(w5_1, OUTPUT);
  pinMode(w5_2, OUTPUT);
  pinMode(w6_1, OUTPUT);
  pinMode(w6_2, OUTPUT);
  pinMode(w7_1, OUTPUT);
  pinMode(w7_2, OUTPUT);
  pinMode(w8_1, OUTPUT);
  pinMode(w8_2, OUTPUT);
  pinMode(w9_1, OUTPUT);
  pinMode(w9_2, OUTPUT);
  pinMode(w10_1, OUTPUT);
  pinMode(w10_2, OUTPUT);
  pinMode(w11_1, OUTPUT);
  pinMode(w11_2, OUTPUT);
  Serial.begin(9600);
}


String myStr;
int i;
int j;
int val;
int inChar;
String bin;
String mass[4];
int oldx;
int oldy;
int newy;
int newx;
int n=0;
int m=0;

// the loop routine runs over and over again forever:
void loop() { 

if (Serial.available()) {
    for(int y=0; y < 2; y++)
    {
        inChar = Serial.read();
        inData[y] = inChar - '0';
        Serial.println(inData[y]);
        delay(1);
    }
        inChar = Serial.read();
        newy = inChar - '0';
        Serial.println(newy);
        delay(1);
        
        inChar = Serial.read();
        newx = inChar - '0';
        Serial.println(newx);
        delay(1);
}
else {
  Serial.println(inData[0]);
  if(inData[0] != 15)
  {
      pinMode(h1, OUTPUT);
      digitalWrite(toplines[inData[0]],HIGH);
      digitalWrite(toplines[inData[0]],LOW);
      digitalWrite(toplines[inData[0]+1],HIGH);
      digitalWrite(toplines[inData[0]+1],LOW);
      digitalWrite(toplines[inData[0]+2],HIGH);
      digitalWrite(toplines[inData[0]+2],LOW);
      pinMode(h1, INPUT);

      pinMode(h18, OUTPUT);
      digitalWrite(botlines[inData[1]],HIGH);
      digitalWrite(botlines[inData[1]],LOW);
      digitalWrite(botlines[inData[1]+1],HIGH);
      digitalWrite(botlines[inData[1]+1],LOW);
      digitalWrite(botlines[inData[1]+2],HIGH);
      digitalWrite(botlines[inData[1]+2],LOW);
      pinMode(h18, INPUT);
      
      if(newy < 9)
      {
        pinMode(rows[newy],OUTPUT);
        digitalWrite(toplines[newx],HIGH);
        digitalWrite(toplines[newx],LOW);
        pinMode(rows[newy],INPUT);
      }
      
      if(newy >= 9)
      {
        pinMode(rows[newy],OUTPUT);
        digitalWrite(botlines[newx],HIGH);
        digitalWrite(botlines[newx],LOW);
        pinMode(rows[newy],INPUT);
      }
  }
  else
  {
         int i;
          int j;
          for (j = 0; j < 10; j = j + 1) {
            int k;
            for (k = 0; k < 10; k = k + 1 ){
              if(j != k)
              {
                pinMode(rows[k], INPUT);
              }
              else
              {
                pinMode(rows[k], OUTPUT);
              }
            }
            for (i = 0; i < 12; i = i + 1) {
                
                if(grid[n][j][i] == 1)
                {
                  digitalWrite(toplines[i], HIGH);
                  digitalWrite(toplines[i], LOW);
                }
            }
          }
          
          for (j = 8; j < 18; j = j + 1) {
            int k;
            for (k = 8; k < 18; k = k + 1 ){
              if(j != k)
              {
                pinMode(rows[k], INPUT);
              }
              else
              {
                pinMode(rows[k], OUTPUT);
              }
            }
            for (i = 0; i < 12; i = i + 1) {
                
                if(grid[n][j][i] == 1)
                {
                  digitalWrite(botlines[i], HIGH);
                  digitalWrite(botlines[i], LOW);
                }
            }
          }
          m++;
          
          if ((m<100)||(m>400))
          {
            n=0;
          }
          else if ((m>100 && m<200)||(m>300 && m<400))
          {
            n=1;
          }
          else if (m>200 && m<300)
          {
           n=2; 
          }
          
          if (m>400)
          {
            m=0;
          }

  }
}
}  
