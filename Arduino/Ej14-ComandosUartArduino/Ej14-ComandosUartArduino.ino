#define PINLED 3

String datoRecibido;

void setup(){
  Serial.begin(9600);
  pinMode(PINLED,OUTPUT);
}

void loop(){
  if(Serial.available()>0){                   //Detecta si hay algun ingreso en la consola.
    datoRecibido = Serial.readString();

    Serial.print("Se recibio el comando ");
    Serial.println(datoRecibido);

    if(datoRecibido == "E"){                  //Enciende LED.
      digitalWrite(PINLED, HIGH);
    }
    else if (datoRecibido == "A"){            //Apaga LED.
      digitalWrite(PINLED, LOW);
    }
  }
}
