/*

    Morse Code

    this program runs in by 4 functions
    dot - makes a dot
    dash - makes a dash
    gap - the pause between letters
    space - the pause between words

    \by combining these funcuionts

    a circuit for this would simply be a resistor connected to an LED and ground, with the positive end of the LED connected to pin 13

*/
int LED = 13; // make led an int for ease
int blip = 100; //unit of time

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop() {
  //dots and dashes are dots and dashes, space is the gap is the time between letters, space makes a space between words
  //this currently writes "s o s"
  dot(), dot(), dot(), gap(), dash(), dash(), dash(), gap(), dot(), dot(), dot(), space();

}

//dot function
void dot()
{
  digitalWrite(LED, HIGH);
  delay(blip);
  digitalWrite(LED, LOW);
  delay(blip);
}

//dash function
void dash()
{
  digitalWrite(LED, HIGH);
  delay(3 * blip);
  digitalWrite(LED, LOW);
  delay(blip);
}

//space between letters, offset by 1 to compensate for the 1 time unit delay after the dot and dash
void gap()
{
  delay(blip * 2);
}

//space between words, offset by 1 to compensate for the 1 time unit delay after the dot and dash
void space()
{
  delay(blip * 6);
}
