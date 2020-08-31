/**
  Generated main.c file from MPLAB Code Configurator

  @Company
    Microchip Technology Inc.

  @File Name
    main.c

  @Summary
    This is the generated main.c using PIC24 / dsPIC33 / PIC32MM MCUs.

  @Description
    This source file provides main entry point for system initialization and application code development.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.168.0
        Device            :  dsPIC33EP512GP506
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.50
        MPLAB 	          :  MPLAB X v5.40
*/

/**
  Section: Included Files
*/
#include "mcc_generated_files/system.h"
#include "mcc_generated_files/tmr1.h"
#include "TimerProg.h"
#include "mcc_generated_files/pin_manager.h"

/*
                         Main application
 */
int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    
    TMR1_SetInterruptHandler(TimerProg);
    
    while (1)
    {
          if(!tmProg[1]) {
            tmProg[1] = 10000 ;// 100*10ms podstawy czasu = 1s
            Led1_Toggle();
        }
        
        
         if(!tmProg[2]) {
            tmProg[2] = 200 ;// 20*10ms podstawy czasu = 200ms
            Led2_Toggle();
        }
          
    }
    return 1; 
}
/**
 End of File
*/

