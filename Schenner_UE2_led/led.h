/*
Project: 
Created by: Schenner Jakob
Created on: 29.11.2019
*/


#ifndef SCHENNER_UE2_LED_LED_H
#define SCHENNER_UE2_LED_LED_H

#define IN 0
#define OUT 1

#define LOW 0
#define HIGH 1

#define POUT4 4 /*Pin 7*/
#define POUT17 17 /*Pin 11*/


#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ledBlinkAll20();

int GPIOExport(int pin);

int GPIOUnexport(int pin);

int GPIODirection(int pin, int dir);

int GPIORead(int pin);

int GPIOWrite(int pin, int value);

#endif //SCHENNER_UE2_LED_LED_H
