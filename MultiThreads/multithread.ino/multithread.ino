unsigned long lastSensorReadTime = 0;
unsigned long lastButtonUpdateTime = 0;
void setup() {
  
}
void loop() {
  unsigned long currentTime = millis();
  if (currentTime - lastSensorReadTime >= 100) {
    lastSensorReadTime = currentTime;
    readSensorData();
  }
  if (currentTime - lastButtonUpdateTime >= 200) {
    lastButtonUpdateTime = currentTime;
    updateDisplay();
  }
}
void readSensorData() {  
}
void updateDisplay() {  
}