void setup(){
Serial.begin(9600);
}

void loop(){
int resultado = 0;
const int inicio = 256;
const int maximo = 100;
int numero = inicio;
while(numero > maximo){
	numero = numero / 2;
	resultado = resultado + 1;
}
Serial.println("Efectuamos "+resultado+ " divisiones para que el numero " +inicio+ " fuera menor que " +maximo);
}
