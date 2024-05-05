#include "esphome.h"

class MyCustomSerialComponent : public Component, public UARTDevice {
 public:
  MyCustomSerialComponent(UARTComponent *parent) : UARTDevice(parent) {}

  void setup() override {
    // nothing to do here
  }
  void loop() override {
    // Use Arduino API to read data, for example

    if (available())
    {
        while (available()) {
            char c = read();
            delay(10);
        }
    }
    // etc
  }
};