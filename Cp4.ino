// --- Constantes ---
const float pi = 3.14159265;     //Número de pi
int period = 5000;               //Tempo de medida(miliseconds)
int delaytime = 2000;            //Invervalo entre as amostras (miliseconds)
int radius = 147;                //Raio do anemometro(mm)

// --- Variáveis Globais ---
unsigned int counter = 0;        //Contador para o sensor
unsigned int RPM = 0;            //Rotações por minuto
float speedwind = 0;             //Velocidade do vento (m/s)

char uvPin = A0;
char temPin = A1;

int Vo;
float R1 = 10000;
float logR2, R2, T, Tc, Tf, temp;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;

float dark = 127410;

void setup() {

	pinMode(2, INPUT);        //configura o digital 2 como entrada
  	digitalWrite(2, HIGH);    //internall pull-up active
  	pinMode(temPin, INPUT);
	pinMode(uvPin, INPUT);
  
  	Serial.begin(9600);				   
}


void loop() {

	windvelocity();
	RPMcalc();
	SpeedWind();

	String texto;
	short temperatura = readTemp(temPin);
	float uv = readLux(uvPin);
	short trunc = uv;
	
	texto.concat(String(temperatura));
	texto.concat(",");
	texto.concat(String(trunc));
	texto.concat(",");
	trunc = speedwind;
	texto.concat(String(trunc));
	
	Serial.println(texto);
	delay(2000);
}//end loop


float readTemp(int ThermistorPin){
  
  Vo = analogRead(ThermistorPin);
  R2 = R1 * (1023.0 / (float)Vo - 1.0); //calculo R2, demonstração no arquivo pdf da aula
  logR2 = log(R2);
  T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));// Equação de Steinhart–Hart 
  Tc = T - 273.15; //temp em Graus celcius

  return Tc;
}

float readLux(int ThermistorPin) {
	float t1 = analogRead(ThermistorPin);
	float R2 = 10000 * (1023.0 / t1 - 1.0);
  	float uv = pow((dark/R2), 1/0.858 );
	
	return uv;
}


void windvelocity() {
  speedwind = 0;

  counter = 0;
  attachInterrupt(0, addcount, RISING);
  unsigned long millis();
  long startTime = millis();
  while (millis() < startTime + period) {}
}
void RPMcalc() {
  RPM = ((counter) * 60) / (period / 1000); // Calculate revolutions per minute (RPM)
}
void SpeedWind() {
  speedwind = (((4 * pi * radius * RPM) / 60) / 1000) * 3.6; //Calcula velocidade do vento em km/h
}
void addcount() {
  counter++;
}