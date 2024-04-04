// Init_Ports.c
// Runs on MSP432
// Provide functions that initialize ports
// Prof. Christman
// 1/8/2023

/* These functions will be used in all of the labs for CPET253

There is an initialization function for each of the ports 1-10 and J.

The initializations will be different for each lab.
*/

#include "msp.h"


// ------------Port1_Init------------
// First set the pin directions
// Enable resistors for inputs
// Set input resistors for pull-up or pull-down
// Enable alternate pin functions, if appliable
// Drive initial values on outputs
// Input: none
// Output: none
void Port1_Init(void){
  // Use the port direction register to configure pins as inputs and output
  // 	-A 1 sets a pin as an output. Use |= with a bit mask to set 1's.
  // 	-A 0 sets a pin as an input. Use &= with a bit mask to set 0's.
  // Use the resistor enable register to enable resistors for inputs that need them
  // Use the port output register to configure the resistors as pull-ups or pull-downs
  // Use the PxSEL0 and PxSEL1 registers to enable alternate pin functions, if applicable
  // Use the port output register to put outputs to an initial state
}

// ------------Port2_Init------------
// First set the pin directions
// Enable resistors for inputs
// Set input resistors for pull-up or pull-down
// Enable alternate pin functions, if appliable
// Drive initial values on outputs
// Input: none
// Output: none
void Port2_Init(void){
    P2DIR |= 0b11000000;
    P2OUT |= 0b11000000;
    P2OUT &= ~0b11000000;
//    P2.6 |= 0x40;
//    P2.7 |= 0x40;







  // Use the port direction register to configure pins as inputs and output
  // 	-A 1 sets a pin as an output. Use |= with a bit mask to set 1's.
  // 	-A 0 sets a pin as an input. Use &= with a bit mask to set 0's.
  // Use the resistor enable register to enable resistors for inputs that need them
  // Use the port output register to configure the resistors as pull-ups or pull-downs
  // Use the PxSEL0 and PxSEL1 registers to enable alternate pin functions, if applicable
  // Use the port output register to put outputs to an initial state
}

// ------------Port3_Init------------
// First set the pin directions
// Enable resistors for inputs
// Set input resistors for pull-up or pull-down
// Enable alternate pin functions, if appliable
// Drive initial values on outputs
// Input: none
// Output: none
void Port3_Init(void){
    P3DIR &= 0xC0;
//    P3REN =
    P3OUT |= 0x40;
//    P3.6 = 1;
//    P3.7 = 1;


  //  P3DIR |= 0b11000000;
  //  P3OUT &= ~0b11000000;





  // Use the port direction register to configure pins as inputs and output
  // 	-A 1 sets a pin as an output. Use |= with a bit mask to set 1's.
  // 	-A 0 sets a pin as an input. Use &= with a bit mask to set 0's.
  // Use the resistor enable register to enable resistors for inputs that need them
  // Use the port output register to configure the resistors as pull-ups or pull-downs
  // Use the PxSEL0 and PxSEL1 registers to enable alternate pin functions, if applicable
  // Use the port output register to put outputs to an initial state
}

// ------------Port4_Init------------
// First set the pin directions
// Enable resistors for inputs
// Set input resistors for pull-up or pull-down
// Enable alternate pin functions, if appliable
// Drive initial values on outputs
// Input: none
// Output: none
void Port4_Init(void){

}


void Port5_Init(void){
    P5DIR |= 0x30;
    //P5OUT = 0x00;
   // P5DIR |= 0x08; //0b0011

//    P5DIR |=  0b00110000;
//    P5OUT &= ~0b00110000;


//    P5.5 =
//    P5.4


}


void Port6_Init(void){

    P6DIR &= BIT3;
    P6DIR |= BIT2;



}


void Port7_Init(void){

    // write this as part of Lab 6
     // P5DIR |= 0x08;
     // P9DIR |= 0x04;
      P7DIR &= ~0xFF;

  //    P5OUT &= ^0x08;
  //    P9OUT &= ^0x04;

      P5OUT &= ~0x08;
      P9OUT &= ~0x04;

}


void Port8_Init(void){
   P8DIR |= BIT2;
   P8SEL0 |= BIT2;
   P8SEL1 &= BIT2;

}


void Port9_Init(void){
  // Use the port direction register to configure pins as inputs and output
  // 	-A 1 sets a pin as an output. Use |= with a bit mask to set 1's.
  // 	-A 0 sets a pin as an input. Use &= with a bit mask to set 0's.
  // Use the resistor enable register to enable resistors for inputs that need them
  // Use the port output register to configure the resistors as pull-ups or pull-downs
  // Use the PxSEL0 and PxSEL1 registers to enable alternate pin functions, if applicable
  // Use the port output register to put outputs to an initial state
    P9DIR |= 0x04;
}

// ------------Port10_Init------------
// First set the pin directions
// Enable resistors for inputs
// Set input resistors for pull-up or pull-down
// Enable alternate pin functions, if appliable
// Drive initial values on outputs
// Input: none
// Output: none
void Port10_Init(void){
  // Use the port direction register to configure pins as inputs and output
  // 	-A 1 sets a pin as an output. Use |= with a bit mask to set 1's.
  // 	-A 0 sets a pin as an input. Use &= with a bit mask to set 0's.
  // Use the resistor enable register to enable resistors for inputs that need them
  // Use the port output register to configure the resistors as pull-ups or pull-downs
  // Use the PxSEL0 and PxSEL1 registers to enable alternate pin functions, if applicable
  // Use the port output register to put outputs to an initial state
}

// ------------PortJ_Init------------
// First set the pin directions
// Enable resistors for inputs
// Set input resistors for pull-up or pull-down
// Enable alternate pin functions, if appliable
// Drive initial values on outputs
// Input: none
// Output: none
void PortJ_Init(void){
  // Use the port direction register to configure pins as inputs and output
  // 	-A 1 sets a pin as an output. Use |= with a bit mask to set 1's.
  // 	-A 0 sets a pin as an input. Use &= with a bit mask to set 0's.
  // Use the resistor enable register to enable resistors for inputs that need them
  // Use the port output register to configure the resistors as pull-ups or pull-downs
  // Use the PxSEL0 and PxSEL1 registers to enable alternate pin functions, if applicable
  // Use the port output register to put outputs to an initial state
}
