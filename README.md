  HD44780 LCD Library for PIC16F887
================================================================================

HD44780 based character LCDs are most common you can find. Here, DIGX presents you a Library for your PIC microcontroller based project design. PIC16F887 is used in the example but, you can use any other PIC with little modifications.

 Usages examples
 ----------------------------------------------------------------------------
 * LCD_begin()                  - Initialise LCD module
 * LCD_display()                - Display ON
 * LCD_noDisplay()              - Display OFF
 * LCD_clear()                  - Display Clear
 * LCD_home()                   - Set cursor to Home position
 * LCD_setCursor(2,5)           - Set cursor to Line 2, character postion 5
 * LCD_print(1,10,"Hello")      - Display message "Hello" at Line 1, character postion 10
 * LCD_putchar('a')             - Print a character at current cursor postion
 * LCD_BCDprint(4,678)          - Print number 678 in 4 digit form(Output: 0678)
 * Set_LCD(0, 0x06)             - Send the command 0x06 to LCD(0=command, 1=data)
 
 * Other ways to print a char
 * LCD_print(1,10,"a")          - Print as a string to specific location
 * Set_LCD(L_DATA,'a')          - Send the char to current location of LCD as a Data input
 
 The LCD library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 The circuit:
 * LCD RS pin define as LCD_RS in lcd.h
 * LCD E pin define as LCD_E in lcd.h
 * LCD D4 pin define as LCD_4 in lcd.h
 * LCD D5 pin define as LCD_5 in lcd.h
 * LCD D6 pin define as LCD_6 in lcd.h
 * LCD D7 pin define as LCD_7 in lcd.h
 * LCD R/W pin to ground
 * 10K resistor: connect ends to +5V and ground, wiper to LCD VO pin(LCD pin 3)
 
 Connections should be defined in lcd.h along with direction controls
 eg:-
 * #define LCD_RS_dir TRISB0
 * #define LCD_E_dir TRISB1
 * #define LCD_4_dir TRISB4
 * #define LCD_5_dir TRISB5
 * #define LCD_6_dir TRISB6
 * #define LCD_7_dir TRISB7

