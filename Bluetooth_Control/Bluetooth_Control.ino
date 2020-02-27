void setup() {

Serial.begin(9600);

pinMode(6,OUTPUT);

pinMode(9,OUTPUT);
}

void loop() {
     
        if(Serial.available()>0){                  
        int c=Serial.read();
           c=c-48;   
        Serial.print("available c = ");
        Serial.println(c);

        int spd = map( c , 0 , 9 , 0 ,255);
        Serial.print("Speed spd = ");
        Serial.println(spd);
        analogWrite(6,spd);
        analogWrite(9,0);
  
}
}
  


