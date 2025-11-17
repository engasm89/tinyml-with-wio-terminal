#include <stdio.h> // Include I/O for inference logs

// Simulated TinyML inference on Wio Terminal
int infer(int sensor) { // Simple threshold classifier
  return sensor > 50; // Return 1 if sensor above threshold
} // End infer

int main(void) { // Entry
  printf("TinyML with Wio Terminal\n"); // Title
  int sensor = 60; // Example sensor reading
  int cls = infer(sensor); // Run inference
  printf("sensor=%d class=%d\n", sensor, cls); // Log result
  return 0; // Exit
} // End main

