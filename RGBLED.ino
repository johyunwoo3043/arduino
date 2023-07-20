int echo_pin=10;//초음파센서 eco pin을 10번
int trig_pin=11;//초음파센서 eco pin을 11번
void setup() {
  //put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(echo_pin,INPUT);//수신을 하기 때문에 INPUT으로 설정
  pinMode(trig_pin,OUTPUT);//송신을 하기 때문에 OUTPUT으로 설정
  }

void loop() {
             float duration, distance;
             digitalWrite(trig_pin,HIGH);//high
             delay(10);//trigger핀이 10동안 발사됨
             digitalWrite(trig_pin,LOW);//low
             duration=pulseIn(echo_pin,HIGH);//duration값을 가지고 옴
             // pulsin함수는 pulsin(핀번호,핀상태)의 형태로 이루어져 있으며 핀 상태가 바뀌면
             //그때까지 경과한 시간을 ms9마이크로 세컨드)단위로 반환시켜 줍니다.
             //단위는 마이크로 조입니다.
             duration=pulseIn(echo_pin, HIGH);
             distance=(float(duration/2)/29.1);
             Serial print(distance);
             Serial println("mm");
             delay(3);
}
}
