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

#define BUFFER_MAX 3
#define DIRECTION_MAX 35
#define VALUE_MAX 30

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ledBlinkAll20();

static int GPIOExport(int pin);

static int GPIOUnexport(int pin);

static int GPIODirection(int pin, int dir);

static int GPIORead(int pin);

static int GPIOWrite(int pin, int value);

#endif //SCHENNER_UE2_LED_LED_H
