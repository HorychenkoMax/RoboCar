#include    <Servo.h>

#define servo_PIN    9
#define min_for_servo 650
#define max_for_servo 1550

Servo myservo;


void setup()
{
    myservo.attach(servo_PIN, min_for_servo, max_for_servo);
    myservo.write(0);
}

void loop()
{
  
        myservo.write(90);    
        delay(3500);

        myservo.write(45);
        delay(3500);

        myservo.write(0);
        delay(3500);

        myservo.write(135);
        delay(3500);

        myservo.write(180);
        delay(3500);
        
        
}