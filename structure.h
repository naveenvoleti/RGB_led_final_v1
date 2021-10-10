/********************************************************************************************************************************
  File:   structure.h
  Author: YE0146
  File description: Using Structure, different types of input parameters are processed. Using this in our project, we declare all required parameters:
     *   Device_type : Indicates type of device where the LED is using
     *   Device: Indicate the device , for instance "LED"
     *   Count : indicates the number of  LEDs used  
     *   Color : Color for RGB LED    
                 default 'W' --> white; 'R' --> red, 'G' --> green, 'B' --> blue 
     *   Brightness: 1% - 100% of brightness of LED, default is 100% 
     *   Period : Total time period of LED to ON and OFF 
     *   ON_time : ON time control of led in seconds
     *   OFF_time : OFF time control of led in seconds
*********************************************************************************************************************************************/
typedef struct singleLed
{
    char Device_id[8];
    char Device[8];
    char action_req[10];
    unsigned int Count;
    char Color;
    unsigned int Brightness;
    unsigned int fadeAmount;
    unsigned int Period;
    unsigned int OnTime;
    unsigned int OffTime;    
} RGB_LED;

struct valid_data 
{
    char Devid[8];                          
    char Devtype[8];                                                                                   
    char actreq[10];                          
    unsigned int numLED;                               
    char color;                                
    unsigned int Brts; 
    unsigned int FadeTime;
    unsigned int Totaltime;                        
    unsigned int OnTime;                                
    unsigned int OffTime;
} ; 
struct valid_data valid_string;  							 // defines Structure variable   