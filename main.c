/* 
 * File:   main.c
 * Author: Shamnad.T
 * Ver: 1.0
 * Created on Oct 8, 2014
 */

//	Include files
//==========================================================================
#include "system.h"
#include "lcd.h"

//   Configuration setting
//==========================================================================

__CONFIG(   FOSC_INTRC_NOCLKOUT &   // Internal oscillator, No clock out
            WDTE_OFF &              // Disable Watchdog Timer.
            PWRTE_ON &              // Enable Power Up Timer.
            BOREN_OFF &             // Disable Brown Out Reset.
            MCLRE_OFF &             // MCLR function is disabled
            LVP_OFF);               // Disable Low Voltage Programming.

//	Function prototypes
//==========================================================================


//	Main function
//==========================================================================
void main(void)
{
    int count = 0;
    //Internal Oscillator Configuration for initial run
    OSCCON = 0x01;
    // Specify Clock Source as INTERNAL/EXTERNAL  - Frequency will be set using _XTAL_FREQ
    Osc_Setup(INTERNAL);
    // System_setup Disables all Analog Pins by default. Configure it in Analog function call
    System_Setup();
    // Setup the LCD with number of columns and rows:
    LCD_begin();
    
    //loop for ever
    while(1)
    {
        count = 0;     
        LCD_print(1, 1, "Hello from DIGX ");		//LCD display (Please refer lcd.c for detail)
        LCD_print(2, 1, "Seconds:        ");
        while(count <= 99999)
        {
            LCD_setCursor(2,10);
            LCD_BCDprint(5,count++);
            //fake clock
            __delay_ms(865);        // 1 sec delay roughly corrected for previous 2 lines of code and while loop execution
        }
    }
}