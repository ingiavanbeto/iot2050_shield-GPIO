"""
This sketch shows how to address the pins of the SIMATIC IOT2000 I/O Module. It contains an example for the basis functions (read and write the I/Os). 
This is not an expedient example - it just shows how to use functions of the SIMATIC IOT2000 I/O Module and how the pins of the shield are mapped to the GPIOs of the SIMATIC IOT2000. 

DI0 = D12
DI1 = D11
DI2 = D10 
DI3 = D9
DI4 = D4

DQ0 = D8
DQ1 = D7

U0 = A0
I0 = A1
U1 = A2
U2 = A3

U0 and U1 are analog inputs from 0..10V; 
I0 and I1 are analog inputs from 0..20mA;

You can take this information from the SIMATIC IOT2000 I/O Module manual as well. (https://support.industry.siemens.com/cs/ww/en/ps/6ES7647-0KA01-0AA2)

Before using the shield make sure that the left jumper on the IOT is set to the correct position! This is also described in the manual.

"""

import mraa

#############################################################################################################################
# using the DIGITAL INPUTS
IOShield_DI0 = mraa.Gpio(12) # initialize a Digital Pin
IOShield_DI0.dir(mraa.DIR_IN) # set direction to input
value_DI0 = IOShield_DI0.read() #read the state of DI0 
print (value_DI0) # print the state of DI0

IOShield_DI1 = mraa.Gpio(11) # # initialize a Digital Pin
IOShield_DI1.dir(mraa.DIR_IN) # set direction to input
value_DI1 = IOShield_DI1.read() #read the state of DI1
print (value_DI1) # print the state of DI1

IOShield_DI2 = mraa.Gpio(10) # # initialize a Digital Pin
IOShield_DI2.dir(mraa.DIR_IN) # set direction to input
value_DI2 = IOShield_DI2.read() #read the state of DI2 
print (value_DI2) # print the state of DI2

IOShield_DI3 = mraa.Gpio(9) # # initialize a Digital Pin
IOShield_DI3.dir(mraa.DIR_IN) # set direction to input
value_DI3 = IOShield_DI3.read() #read the state of DI3 
print (value_DI3) # print the state of DI3

IOShield_DI4 = mraa.Gpio(4) # # initialize a Digital Pin
IOShield_DI4.dir(mraa.DIR_IN) # set direction to input
value_DI4 = IOShield_DI4.read() #read the state of DI4
print (value_DI4) # print the state of DI4
#############################################################################################################################


#############################################################################################################################
# using the DIGITAL OUTPUTS
IOShield_DQ0 = mraa.Gpio(8) # Digital Pin
IOShield_DQ0.dir(mraa.DIR_OUT) # direction input
IOShield_DQ0.write(0) #write 0 to DQ0 
IOShield_DQ0.write(1) #write 1 to DQ0 

IOShield_DQ1 = mraa.Gpio(7) # Digital Pin
IOShield_DQ1.dir(mraa.DIR_OUT) # direction input
IOShield_DQ1.write(0) #write 0 to DQ1 
IOShield_DQ1.write(1) #write 1 to DQ1 
#############################################################################################################################

#############################################################################################################################
# using the ANALOG INPUTS
IOShield_U0 = mraa.Aio(0) # Analog Input
value_U0 = IOShield_U0.read() # read the value of U0
print (value_U0) # print the value of U0

IOShield_I0 = mraa.Aio(1) # Analog Input
value_I0 = IOShield_I0.read() # read the value of I0
print (value_I0) # print the value of I0

IOShield_U1 = mraa.Aio(2) # Analog Input
value_U1 = IOShield_U1.read() # read the value of U1
print (value_U1) # print the value of U1

IOShield_I1 = mraa.Aio(3) # Analog Input
value_I1 = IOShield_I1.read() # read the value of I1
print (value_I1) # print the value of I1
#############################################################################################################################