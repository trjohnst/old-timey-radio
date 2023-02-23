#include <Arduino.h>
#include "BluetoothA2DPSink.h"

BluetoothA2DPSink a2dp_sink;

void setup() {
  Serial.begin(9600);
  Serial.println("setup");

  a2dp_sink.start("Old Radio");
}

void loop() {
  Serial.println("loop");
  delay(1000);
}