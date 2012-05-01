# simpleSerialSend.py
import sys
import serial
import time
PORT = '/dev/ttyUSB0' # The port my Arduino is on, on my WinXP box.

def main(val=5):
    # Open a connection to the serial port.  This will reset the Arduino, and
    # make the LED flash once:
    ser = serial.Serial(PORT)

    # Must given Arduino time to rest.
    # Any time less than this does not seem to work...
    time.sleep(1.5)

    # Now we can start sending data to it:
    written = ser.write(val)
    ser.close()

if __name__ == '__main__':
    args = sys.argv
    try:
        main(args[1])
    except IndexError:
        main()