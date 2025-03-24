/*
This code shows how to address the pins of the SIMATIC IOT2000 I/O Module in C++. It contains an example for the basis functions (read and write the I/Os).
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

The mraa library is used for having access to the GPIOs out of the C++ project.
*/


#include <iostream>
using namespace std;
#include "mraa.hpp"


using namespace mraa;


int Digital_Inputs(void) {

	Gpio* IOShield_DI0 = NULL; //create a digital variable
	  	  IOShield_DI0 = new mraa::Gpio(12); //initialize a Digital Pin
	  	  IOShield_DI0->dir(mraa::DIR_IN); //set direction to input
	bool value_DI0 = IOShield_DI0 -> read(); //create boolean variable and read the state of DI0
	cout <<value_DI0<<endl; // print the state of DI0

	Gpio* IOShield_DI1 = NULL; //create a digital variable
	  	  IOShield_DI1 = new mraa::Gpio(11); //initialize a Digital Pin
	  	  IOShield_DI1->dir(mraa::DIR_IN); //set direction to input
	bool value_DI1 = IOShield_DI1 -> read(); //create boolean variable and read the state of DI1
	cout <<value_DI1<<endl; // print the state of DI1

	Gpio* IOShield_DI2 = NULL; //create a digital variable
	 	  IOShield_DI2 = new mraa::Gpio(10); //initialize a Digital Pin
	 	  IOShield_DI2->dir(mraa::DIR_IN); //set direction to input
	bool value_DI2 = IOShield_DI2 -> read(); //create boolean variable and read the state of DI2
	cout <<value_DI2<<endl; // print the state of DI2

	Gpio* IOShield_DI3 = NULL; //create a digital variable
		  IOShield_DI3 = new mraa::Gpio(9); //initialize a Digital Pin
		  IOShield_DI3->dir(mraa::DIR_IN); //set direction to input
	bool value_DI3 = IOShield_DI3 -> read(); //create boolean variable and read the state of DI3
	cout <<value_DI3<<endl; // print the state of DI3

	Gpio* IOShield_DI4 = NULL; //create a digital variable
	      IOShield_DI4 = new mraa::Gpio(4); //initialize a Digital Pin
	      IOShield_DI4->dir(mraa::DIR_IN); //set direction to input
	bool value_DI4 = IOShield_DI4 -> read(); //create boolean variable and read the state of DI4
	cout <<value_DI4<<endl; // print the state of DI4


	return 0;
}

int Digital_Outputs(void) {

	Gpio* IOShield_DQ0 = NULL; //create a digital variable
		  IOShield_DQ0 = new mraa::Gpio(8); //initialize a Digital Pin
		  IOShield_DQ0->dir(mraa::DIR_OUT); //set direction to output
		  IOShield_DQ0->write(0); // set DQ0 to FALSE
		  IOShield_DQ0->write(1); // set DQ0 to TRUE

	Gpio* IOShield_DQ1 = NULL; //create a digital variable
		  IOShield_DQ1 = new mraa::Gpio(7); //initialize a Digital Pin
		  IOShield_DQ1->dir(mraa::DIR_OUT); //set direction to output
		  IOShield_DQ1->write(0); // set DQ1 to FALSE
		  IOShield_DQ1->write(1); // set DQ1 to TRUE


	return 0;

}

int Analog_Inputs (void) {

	Aio* IOShield_U0 = NULL; //create an analog variable
		 IOShield_U0 = new mraa::Aio(0); //initialize an Analog Pin
	uint16_t value_U0 = IOShield_U0 -> read(); //create integer variable and read the value of U0
	cout <<value_U0<<endl; // print the value of U0

	Aio* IOShield_I0 = NULL; //create an analog variable
		 IOShield_I0 = new mraa::Aio(1); //initialize an Analog Pin
	uint16_t value_I0 = IOShield_I0 -> read(); //create integer variable and read the value of I0
	cout <<value_I0<<endl; // print the value of I0


	Aio* IOShield_U1 = NULL; //create an analog variable
		 IOShield_U1 = new mraa::Aio(2); //initialize an Analog Pin
	uint16_t value_U1 = IOShield_U1 -> read(); //create integer variable and read the value of U1
	cout <<value_U1<<endl; // print the value of U1

	Aio* IOShield_I1 = NULL; //create an analog variable
		 IOShield_I1 = new mraa::Aio(3); //initialize an Analog Pin
	uint16_t value_I1 = IOShield_I1 -> read(); //create integer variable and read the value of I1
	cout <<value_I1<<endl; // print the value of I1

	return 0;

}

int main (void) {

	Digital_Inputs();
	Digital_Outputs();
	Analog_Inputs();

	return 0;
}
