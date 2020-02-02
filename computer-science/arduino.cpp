/**
 * TEJ 1O FINAL ASSIGNMENT
 * Author: Adam Chen
 * Program: Arduino LED Die
 * Teacher: NACCARATO, P
 */
// Global Number Variable
int number = 0;

void setup()
{
    // Pinmode Tells Arduino that the specified pins will be activated for read/write
    pinMode(2, INPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    // Digital Write changes the state of the specified led
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
}
void loop()
{
    // Digital Read checks if a specified pin is powered
    if (digitalRead(2) == HIGH)
    {
        // random(1, 7); gets a random number from 1-6
        number = random(1, 7);
        // Custom Display Function
        display(number);
        // Pause 200ms
        delay(200);
        // Turn off all LEDS
        doff();
        delay(200);
        display(number);
        delay(200);
        doff();
        delay(200);
        display(number);
        delay(200);
        doff();
        delay(200);
        display(number);
    }
    delay(50);
}
// Turns off all leds
void doff()
{
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
}
// Turns on LEDS in a special pattern that looks like the number on a die (1-6)
void display(int a)
{
    if (a == 1)
    {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
    }
    if (a == 2)
    {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
    }
    if (a == 3)
    {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
    }
    if (a == 4)
    {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
    }
    if (a == 5)
    {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
    }
    if (a == 6)
    {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(9, HIGH);
    }
}