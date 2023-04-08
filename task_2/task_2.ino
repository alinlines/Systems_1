/**
 * @file SimpleTasks.ino
 * A very simple example of how to use task manager to schedule tasks to be done
 *
 * In this example we demonstrate how to create tasks that execute at a point in time,
 * that repeat at a given interval, and tasks that are executed as soon as possible
 * by task manager. We also show how to cancel a running task.
 *
 */

// To use task manager we must include the library
#include <Arduino.h>
#include "TaskManagerIO.h"
 
int ledPins[] = {3, 5, 6, 9, 10, 11};
int ledPinsLen = sizeof(ledPins);
int ledStates[] = {LOW, LOW, LOW, LOW, LOW, LOW};
long intervals[] = {50, 1000, 10000, 20000, 25000, 33000};
 
void setup() {
  for (int i = 0; i < ledPinsLen; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
 
  taskManager.scheduleFixedRate(intervals[0], [] {
    led(ledStates[0], ledPins[0]);
  }, TIME_MICROS);
 
  taskManager.scheduleFixedRate(intervals[1], [] {
    led(ledStates[1], ledPins[1]);
  }, TIME_MICROS);
 
  taskManager.scheduleFixedRate(intervals[2], [] {
    led(ledStates[2], ledPins[2]);
  }, TIME_MICROS);
 
  taskManager.scheduleFixedRate(intervals[3], [] {
    led(ledStates[3], ledPins[3]);
  }, TIME_MICROS);
 
  taskManager.scheduleFixedRate(intervals[4], [] {
    led(ledStates[4], ledPins[4]);
  }, TIME_MICROS);
 
  taskManager.scheduleFixedRate(intervals[5], [] {
    led(ledStates[5], ledPins[5]);
  }, TIME_MICROS);
}
 
void loop() {
  taskManager.runLoop();
}
 
void led(int &ledState, int led)
{
  if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
  digitalWrite(led, ledState);
}
