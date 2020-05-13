void setup() {

pinMode(D0, OUTPUT);
pinMode(D1, OUTPUT);
pinMode(D2, OUTPUT);

Particle.function("redlight", redlight);
}

int redlight(String onoroff){
    if (onoroff=="red"){
        
        digitalWrite(D0, HIGH);
        digitalWrite(D1, LOW);
        digitalWrite(D2, LOW);
        return -1;
    }
    
    if (onoroff=="green"){
        digitalWrite(D0, LOW);
        digitalWrite(D1, HIGH);
        digitalWrite(D2, LOW);
        return 1;
    }
    
     if (onoroff=="blue"){
         digitalWrite(D0, LOW);
         digitalWrite(D1, LOW);
         digitalWrite(D2, HIGH);
        
        return 1;
    }
    
      if (onoroff=="of"){
         digitalWrite(D0, LOW);
         digitalWrite(D1, LOW);
         digitalWrite(D2, LOW);
      
        return 1;
    }
}

void loop() {

}