String command;

const int StepX = 2;
const int DirX = 5;
const int StepY = 3;
const int DirY = 6;
const int StepZ = 4;
const int DirZ = 7;

void setup() {
  Serial.begin(9600);

  pinMode(StepX,OUTPUT);
  pinMode(DirX,OUTPUT);
  pinMode(StepY,OUTPUT);
  pinMode(DirY,OUTPUT);
  pinMode(StepZ,OUTPUT);
  pinMode( DirZ,OUTPUT);

  delay(2000);

  Serial.println("Ready");
}

void loop() {
    if (Serial.available() > 0) {
        command = Serial.readStringUntil('\n');
        command.trim();
        if (command == "Start") {
            
        }
}