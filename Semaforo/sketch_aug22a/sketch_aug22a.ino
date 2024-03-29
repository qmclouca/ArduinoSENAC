int sensor = A0;
int pushButton = A1;
int sensorValue = 0;
int pushButtonValue = 0;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ligaVerde();
  ligaAmarelo();
  ligaVermelho();
  leSensor();
  lePushButton();
}

void ligaVerde() {
  digitalWrite(2, HIGH);
}
void desligaVerde() {
  digitalWrite(2, LOW);
}

void ligaAmarelo() {
  digitalWrite(3, HIGH);  
}
void ligaVermelho() {
  digitalWrite(4, HIGH);  
}

void leSensor() {
  sensorValue = analogRead(sensor);
  String toPrint = "Sensor" + sensorValue;
  Serial.println(toPrint);
  delay(50);
}

void lePushButton() {
  pushButtonValue = analogRead(pushButton);
  String toPrint = "PushButton = " + pushButtonValue;
  Serial.println(toPrint);
}
