/*
Project: 
Created by: Schenner Jakob
Created on: 29.11.2019
*/

#include "led.h"

int ledBlinkAll20(){
    int repeat = 10;

    if (-1 == GPIOExport(POUT4) || -1 == GPIOExport(POUT17)){
        return (1);
    }

    if (-1 == GPIODirection(POUT4, OUT) || -1 == GPIODirection(POUT17, OUT)){
        return (2);
    }

    do{
        
        if ((-1 == GPIOWrite(POUT4, repeat % 2))||(-1 == GPIOWrite(POUT17, repeat % 2))){
            return (3);
        }
        usleep(500 * 1000);
    }while(repeat --);

    if (-1 == GPIOUnexport(POUT4) || -1 == GPIOUnexport(POUT17)){
        return (4);
    }

    return 0;
}



