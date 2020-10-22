const int red = 0;
const int blue = 1;
const int green = 2;
const int yellow = 3;
const int intervalPot = A0;
const int amountPot = A1;

//variables
int intervalValue; //interval of time when lights shine
int amountValue; //amount of lights shining at each interval

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT); //LEDS
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(intervalPot, INPUT); // potentiometer input values
  pinMode(amountPot, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  intervalValue = analogRead(intervalPot); //recieving inputs from pots
  amountValue = analogRead(amountPot);
  intervalValue = map(intervalValue, 0, 1023, 0, 255); //Map value 0-1023 to 0-255 (PWM)
  amountValue = map(amountValue, 0, 1023, 0, 255); 
}
