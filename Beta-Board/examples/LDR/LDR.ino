/* PHOTONTECH */

/*
  LDR

  LDR sensörü kullanılarak ışık şiddetini ölçüp 
  serial monitörde 1sn aralıkla gösteren uygulama.

  Bu örnek kod PHOTONTECH tarafından kamuya sunulmuştur.

  https://github.com/PhotonTechnologyCodeSpace/Beta-Board

*/
//LDR sensörümüzün değerlerinin okunacağı pin A0 olarak tanımlandı.
int sensorPin = A0;
//Sensörün başlangıç değeri 0 olarak belirlendi.
int sensorValue = 0;

void setup() {
  //Seri haberleşme başlatıldı
  Serial.begin(9600);
}

void loop() {
  //Sensör verilerimiz okunup sensorValue değişkenine aktarılıyor.
  sensorValue = analogRead(sensorPin);
  //Serial monitörde verilerimiz gösteriliyor.
  Serial.println(sensorValue);
  //1sn bekleme
  delay(1000);
}
