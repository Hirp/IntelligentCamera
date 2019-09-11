from time import sleep
import serial

ser = serial.Serial('COM6',9600)  # open serial port
print(ser.name)         # check which port was really used
sleep(3)

while True:
    ser.write(b'x00')
    print("x0")
    sleep(5)
    ser.write(b'x1800')
    print("x180")
    sleep(5)
    ser.write(b'x900')
    print("x90")
    sleep(5)
    ser.write(b'y00')
    print("y0")
    sleep(5)
    ser.write(b'y450')
    print("y45")
    sleep(5)
    ser.write(b'y900')
    print("y90")
    sleep(5)

