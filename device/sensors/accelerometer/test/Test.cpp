// Copyright (C) 2012 Mark R. Stevens
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// The Arduino include
//
#include "Arduino.h"

// The accelerometer
//
#include <sensors/accelerometer/Accelerometer.h>
ardadv::sensors::accelerometer::Accelerometer accelerometer;

// prints val with number of decimal places determine by precision
//
void printFloat(float val, unsigned int precision)
{

  Serial.print (int(val));  //prints the int part
  Serial.print("."); // print the decimal point
  if(val >= 0)
  {
    const unsigned int frac = (val - int(val)) * precision;
    Serial.print(frac, DEC) ;
  }
  else
  {
    const unsigned int frac = (int(val)- val ) * precision;
    Serial.print(frac, DEC) ;
  }
}

// Initialize the accelerometer pins to be output. Initialize the button to
// be input. This is a one time call on startup.
//
void setup() 
{                

  // Setup the serial connection to see output
  //
  Serial.begin(9600);
  Serial.flush();

  // Initialize the accelerometer
  //
  typedef ardadv::sensors::accelerometer::Accelerometer Accelerometer;
  accelerometer.setup(Accelerometer::X(A5),
                      Accelerometer::Y(A4),
                      Accelerometer::Z(A3),
                      Accelerometer::S(4));

  // Log a header for debugging output
  //
  Serial.print("%% ");
  Serial.print(Accelerometer::Vendor());
  Serial.print(" ");
  Serial.println(Accelerometer::PartNumber());
  Serial.println("%% Time X Y Z");
}

// This is called repeatedly in an event loop. The loop checks
// for the button press event. When it is pressed, the next light
// in the sequence is turned on (and the others are turned off).
//
void loop() 
{

  // Update the state
  //
  accelerometer.update();

  // Log debugging output
  //
  Serial.print(millis());
  Serial.print(" ");
  printFloat(accelerometer.x(), 1000);
  Serial.print(" ");
  printFloat(accelerometer.y(), 1000);
  Serial.print(" ");
  printFloat(accelerometer.z(), 1000);

  // Add a small delay
  //
  delay(100);

}


