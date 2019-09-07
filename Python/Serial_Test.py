import time
import serial
ser = serial.Serial()
ser.baudrate = 9600
ser.port = 'COM6'
ser.open()
while True:
    ser.write(b'x')
    time.sleep(1)
    ser.write(b'90')
    time.sleep(1)
    ser.write(b'y')
    time.sleep(1)
    ser.write(b'90')
    time.sleep(1)


##testetset