
#include <SoftwareSerial.h>   //This gives the program access to 
                              //the serial library.

/* FreqCount - Example with serial output
 * http://www.pjrc.com/teensy/td_libs_FreqCount.html
 *
 * This example code is in the public domain.
 * I (Sarah Nichols) added comments and timestamps to the 
 * provided example code.
 */
#include <FreqCount.h>      //Gives program access to the 
                            //FreqCount library

void setup() {
  Serial.begin(57600);     
  FreqCount.begin(1000);
}

void loop() {
  if (FreqCount.available()) {              //If the function is available,
    unsigned long count = FreqCount.read(); //read the frequency and name it 'count'
    unsigned long t = millis()/1000;        //record the time (in seconds)
                                          //since the program started at 't'
    Serial.print(count);                  //print the stored frequency
    Serial.print(',');                    //print a comma
    Serial.println(t);                    //print the time t, then go to a 
  }                                       //new line.
}

