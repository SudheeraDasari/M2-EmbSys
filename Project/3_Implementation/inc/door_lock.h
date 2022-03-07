
#ifndef DOOR_LOCK_H
#define DOOR_LOCK_H
#include <Arduino.h>
#include <LiquidCrystal.h>
#include <Servo.h>
#include <Keypad.h>
void unlockdoor();
/**
 * Function 1- OPEN THE DOOR
 */
void incorrect();
/**
 * Function 2- Wrong code
 */
void clearscreen();
/**
 * Function 3 - CLEAR THE SCREEN
 */
void displayscreen();
/**
 * Function 4 - DISPLAY FUNCTION
 */
void counterbeep();
/**
 * Function 5 - Count down
 */
#endif
