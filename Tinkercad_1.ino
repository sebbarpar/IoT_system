float ECG;
float EMG;
float EDA;
float T;
float R;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  Serial.begin(9600);
}

void loop()
{
  //Read analog values
  ECG = analogRead(A0);
  EMG = analogRead(A1);
  EDA = analogRead(A2);
  T = analogRead(A3);
  R = analogRead(A4);
  //Map to range of values desired
  ECG = map(ECG, 0, 675, -150, 150);
  ECG = ECG/100;
  EMG = map(EMG, 0, 675, -150, 150);
  EMG = EMG/100;
  EDA = map(EDA, 0, 675, 0, 2500);
  EDA = EDA/100;
  T = map(T, 20, 358, 0, 50);
  R = map(R, 0, 675, -5000, 5000);
  R = R/100;
}