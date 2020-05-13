#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
using namespace std;


//CAPITULO 4

//4.26 dibujar un cuadrado con asteriscos
/*
int main()
{
	int lado;

	cout << "ingrese el lado del cuadrado:  ";
	cin >> lado;

	if (lado != 1)
	{
		for (int i = 0; i < lado; i++)//imprime primera fila de asteriscos
		{
			cout << "*";
		}

		cout << endl;//salto de linea

		for (int i = 0; i < lado - 2; i++) //0
		{
			cout << "*";//primer asterisco

			for (int j = 0; j < lado - 2; j++)//0
			{
				cout << " ";
			}

			cout << "*";//ultimo asterisco
			cout << endl;
		}
		for (int i = 0; i < lado; i++) // imprime ultima fila de asteriscos
		{
			cout << "*";
		}
	}
	else//caso base
	{
		cout << "*";
	}
	return 0;
}
*/

//4.27 saber si es o mo un numero capicua
/*
int main()
{
	int numero, aux, resto, numeroI = 0;

	cout << "dame un numero: ";
	cin >> numero;
	
	aux = numero;

	while (aux > 0)//invierte el numero	131		
	{
		resto = aux % 10;//me da el resto	1	3	1
		aux = aux / 10;//quita el ultimo numero		13	1	0
		numeroI = numeroI * 10 + resto;//almaceno el numero pero invertido		1	13	131
	}

	if (numero == numeroI)
	{
		cout << numero << " es capicua" << endl;
	}

	else
	{
		cout << numero << " no es capicua" << endl;
	}
	return 0;
}
*/

//4.28 numero binario a decimal ,dos formas
/*
int main()
{
	int numero, digitoU, i = 0, sumaB = 0;
	long vector[] = { 1,2,4,8,16,32,64,128,256,512,1024 };

	cout << "inserte un numero binario: ";
	cin >> numero;

	while (numero > 0)
	{
		digitoU = numero % 10;//extraigo el ultimo digito
		if (digitoU == 1)
		{
			sumaB = sumaB + vector[i];
		}
		i++;//mi iterdaor va aumentando
		numero = numero / 10;//actualizo la variable numero
	}

	cout << " El numero convertido en decimal es: " << sumaB << endl;
	return 0;
}
*/

/*
int main()//otra forma
{
	int numeroB, resto, binario, sumaB = 0;

	cout << "Ingrese un numero binario: "; 
	cin >> numeroB;

	for (int i = 0; numeroB != 0; i++) //101
	{
		resto = numeroB % 10;//1	 0	1
		binario = resto * pow(2, i);//1		0	4
		sumaB = sumaB + binario;//1		1	5
		numeroB = numeroB / 10;//10		1	0
	}

	cout << "\n" << "el numero binario ingresado en decimal equivale a: " << sumaB << "\n";
	
	return 0;
}
*/


//4.30 sucesion fibonacci infinita 
/*
int main()
{
	int numero1 = 0, numero2 = 0, numero3 = 1;

	cout << "sucesion de fibonacci: " << endl;

	while (1)
	{
		numero2 = numero3;//1	0	1
		numero3 = numero1;//0	1	1
		numero1 = numero2 + numero3;//1	1	2

		cout << numero1 << " "<< "\n";
	}
}
*/


//CAPITULO 5

//5.11 encontrar el valor mas pequeño 
/*
int main()
{
	int numero[100], numeroE, mayorN = 0, menor;

	cout << "CUANTOS ELEMENTOS VAMOS A COMPARAR: : ";
	cin >> numeroE;


	for (int i = 0; i < numeroE; i++)//pide los numeros para comparar y voy almacenando el mayor
	{
		cout << i + 1 << ". inserte un numero:  " << endl;
		cin >> numero[i];

		if (mayorN < numero[i])
		{
			mayorN = numero[i];
		}
	}

	cout << "El mayor elemento de los ingresados es: " << mayorN << endl;

	menor = mayorN;

	for (int i = 0; i < numeroE; i++)//comparo los numeros y obtengo elmenor
	{
		if (menor>numero[i])
		{
			menor = numero[i];
		}
	}

	cout << "El menor elemento de los ingresados es: " << menor << endl;

	return 0;
}
*/

//5.15 dibujar triangulos con asteriscos
/*
int main()
{
	int altura;

	cout << "Inserte la altura de mi triangulo: ";
	cin >> altura;

	//forma ascendente
	for (int i = 1; i <= altura; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	cout << "\n";

	//forma descendemte
	for (int i = altura; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	cout << "\n";

	//forma ascendente por la derecha

	return 0;
}
*/

//5.19 calcular la aproximacion del valor de pi 
/*
int main()
{
	long long i, n;
	long  double sumatoria, pi;

	cout << "sugerencia: para que pi valga 3.14159, n tiene que tomar le valor de 1 000 000  " << endl;
	cout << "Ingrese el valor de n para aproximarnos a pi : ";
	cin >> n;
	cout << endl;

	sumatoria = 0;

	for (i = 0; i < n; i++)
	{
		sumatoria = sumatoria + sqrt(n * n - i * i);
	}
	pi = (4 * sumatoria) / (n * n);

	cout << endl;
	cout <<"cuando n"<<" toma el valor de: "<<n<<", "<< "pi vale aproximadamente: " << pi << endl;

}
*/

//5.29 no entiendo profesor :(







//CAPITULO 6 PARTE 1

//6.12
/*
int pagoTotal(float horas) 
{


	if (horas <= 3) {
		return 20;
	}
	else 
	{
		if (horas < 24)
		{
			return 20 + (5 * (horas - 3));
		}
		else 
		{
			return 50;
		}
	}
}

int main()
{
	float tiempo1, tiempo2, tiempo3, horasTotales, cargoTotal, cargo1, cargo2, cargo3;

	cout << "CARGOS POR ESTACIONAMIENTOSP" << endl;
	cout << endl;
	cout << "¿ Cuantas horas se quedo el carro 1 ?  "; 
	cin >> tiempo1;
	cout << "¿ Cuantas horas se quedo el carro 2 ?  "; 
	cin >> tiempo2;
	cout << "¿ Cuantas horas se quedo el carro 3 ?  "; 
	cin >> tiempo3;

	horasTotales = tiempo1 + tiempo2 + tiempo3;
	cargoTotal = pagoTotal(tiempo1) + pagoTotal(tiempo2) + pagoTotal(tiempo3);
	cargo1 = pagoTotal(tiempo1);
	cargo2 = pagoTotal(tiempo2);
	cargo3 = pagoTotal(tiempo3);

	cout << endl;

	cout << "Carro" << "\t" << " Horas " << "\t" << "Cargo" << endl;
	cout << "1"<<"\t" << fixed << setprecision(1) << tiempo1 << "\t" << setprecision(2) << cargo1 << endl;
	cout << "2" << "\t" << fixed << setprecision(1) << tiempo2 << "\t" << setprecision(2) << cargo2 << endl;
	cout << "3"<<"\t" << fixed << setprecision(1) << tiempo3 << "\t" << setprecision(2) << cargo3 << endl;
	cout << endl;
	cout << "TOTAL" << "\t" << fixed << setprecision(1) << horasTotales << "\t" << fixed << setprecision(2) << cargoTotal << endl;

	return 0;
}
*/

//6.18 potenciacion
/*
int potencia(int base, int exponente)
{
	int respuesta;

	if (exponente == 1) //caso base
	{
		respuesta = base;
	}
	else //caso general
	{
		respuesta = base * potencia(base, exponente - 1);
	}
	return respuesta;
}

int main() {

	int base, exponente;

	cout << "digite un numero para la base: ";
	cin >> base;

	cout << "digite un numero para el exponente: ";
	cin >> exponente;

	cout << "la potencia de base " << base << " elevada al exponente " << exponente <<" es: "<<potencia(base,exponente)<< endl;


	return 0;
}
*/

//6.20
/*
bool factor(int numero1, int numero2) 
{
	if (numero1 % numero2 == 0) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int main()
{
	int numero1, numero2;

	cout << "Ingrese primer numero: "; 
	cin >> numero1;
	cout << "Ingrese segundo numero: "; 
	cin >> numero2;

	cout << endl;

	if (factor(numero1, numero2) == true) 
	{
		cout << "El numeroo 1 es igual al numero 2:   " << factor( numero1, numero2)<<" = TRUE";
	}
	else 
	{
		cout << "El numeroo 1 no es igual al numero 2:   " << factor(numero1, numero2) << " = FALSE";
	}

	return 0;
}
*/

//6.25 profe no me saleeeeeee :( 



//6.29 funcion numero primo
/*
void esPrimo(int numero) {
	
	int cont = 0,i=2;	
	if (numero == 1) 
	{
		cout << "no es primo" << endl;
	}

	if (numero == 2) 
	{
		cout << "es primo" << endl;
	}
	else 
	{
		while (i < numero) 
		{
			if (numero % i == 0) 
			{
				cout << "no es primo" << endl;
				break;
			}

			else 
			{
				cont++;
			}
			i++;
		}
		if (cont == numero - 2)
		{
			cout << "Es primo" << endl;
		}

	}
}

int main(void)
{
	int numero;
	
	cout << "ingrese numero :" << endl;
	cin >> numero;

	cout << numero << ": ";
	esPrimo(numero);

	return 0;
}
*/

//6.30 invertir un numero de formaa recursiva
/*
void invertir(int numero)
{
	cout << numero % 10;

	if (numero > 10)// caso base
	{
		invertir(numero / 10);
	}
}

int main(void)
{
	int numero, aux;

	cout << "Ingrese un numero para invertirlo: ";
	cin >> numero;

	cout << endl;

	cout << "El numero invertido es: ";

	invertir(numero);


	return 0;
}
*/




//CAPITULO 6 PARTE 2

//6.36 potenciacion recursivamente
/*
int potenciacion(int base, int exponente)
{
	int potencia;

	if (exponente == 1) //caso base
	{
		potencia = base;
	}
	else // caso general
	{
		potencia = base * potenciacion(base, exponente - 1);
	}
	return potencia;
}

int main()
{
	int base, exponente;
	cout << "inserte el valor de la base: ";
	cin >> base;

	cout << "inserte el valor del exponente: ";
	cin >> exponente;

	cout << endl;
	cout << "la potencia de " << base << " elevada a " << exponente << " es: " << potenciacion(base, exponente);

	return 0;
}
*/


//6.37 fibonacci iterativo
/*
int fibonacci(int numero) {

	int a = 0, b = 1, c = 0;
	
	for (int i = 1; i < numero; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int main()
{
	int numero;

	cout << "Ingrese el numero del fibonacci que quiera:  "; 
	cin >> numero;

	cout << endl;
	
	cout << "El fibonacci de " << numero << " es:  " << fibonacci(numero) << endl;
	
	return 0;
}
*/

//6.39 no me sale profe :(


//6.41 maximo comun divisor de forma rescursiva
/*
int MCD(int numero1, int numero2)//70,25
{
	if (numero1 == 0)
	{
		return numero2;
	}
	else
	{
		return MCD(numero2 % numero1, numero1);//
	}
}

int main()
{
	int numero1, numero2;
	
	cout << "Dame el primer numero: ";
	cin>>numero1;

	cout << "Dame el segundo numero: ";
	cin >> numero2;

	cout << endl;

	cout << "El maximo comun divisor es: " << MCD(numero1, numero2);

	return 0; 
}
*/

//CLASES
#include <iostream> // cout y cin
#include <string>  // cadenas
#include <cmath> // rand() -> aleatorio

using namespace std;

class Pokemon {
private:
	int vida;
	int fuerza;
	int agilidad;
	string nombre;
	string ataques[10];
	int nAtaques = 0; // int nAtaques{ 0 };
public:
	//Constructor
	explicit Pokemon(string _nombre) : nombre{ _nombre } {}

	/*Pokemon(string _nombre){
		nombre = _nombre;
	}*/

	void adicionarAtaque(string nombreAtaque) {
		ataques[nAtaques] = nombreAtaque;
		nAtaques++;
	}

	void go() {
		cout << nombre << " ha sido seleccionado !" << endl;
		cout << "Go go " << nombre << endl;
	}

	void ataca() {
		int seleccionado = rand() % nAtaques; //rand() aleatorio entre 0 a 2 mil millones
		cout << nombre << " lanzó " << ataques[seleccionado] << endl;
	}

	void setVida(int _vida) {
		vida = _vida;
	}
	void setFuerza(int _fuerza) {
		fuerza = _fuerza;
	}
	void setAgilidad(int _agilidad) {
		agilidad = _agilidad;
	}

	int getVida() {
		return vida;
	}

	void muestraEstado() {
		cout << "Vida=" << vida << endl;
		cout << "Fuerza=" << fuerza << endl;
		cout << "Agilidad=" << agilidad << endl;
	}

};

class JuegoPokemon {
private:
	Pokemon pokemon1;
	Pokemon pokemon2;
public:
	explicit JuegoPokemon(Pokemon p1, Pokemon p2) : pokemon1{ p1 }, pokemon2{ p2 } {}

	void lanzaRodada() {
		pokemon1.go();
		pokemon1.ataca();

		pokemon2.go();
		pokemon2.ataca();

		float baja = 0.1 + (rand() % 9) / 10.0; //valores aletorios de 0.1 hasta 0.9


		pokemon1.setVida(pokemon1.getVida() * baja);
		pokemon2.setVida(pokemon2.getVida() * baja);
	}

	void muestraResultados() {
		pokemon1.muestraEstado();
		pokemon2.muestraEstado();
	}
};


int main() {
	Pokemon pikachu("Pikachu");
	pikachu.setVida(100);
	pikachu.setFuerza(50);
	pikachu.setAgilidad(80);
	pikachu.adicionarAtaque("Attack trueno"); // pos 0
	pikachu.adicionarAtaque("Bola voltio");  // pos 1
	pikachu.adicionarAtaque("Cola de hierro"); // pos 2
	pikachu.adicionarAtaque("Ataque rápido");  // pos 3

	Pokemon charmander("Charmander");
	charmander.setVida(100);
	charmander.setFuerza(90);
	charmander.setAgilidad(70);
	charmander.adicionarAtaque("Bola de fuego");
	charmander.adicionarAtaque("Ascuas");
	charmander.adicionarAtaque("Llamarada");

	JuegoPokemon juego(pikachu, charmander);
	int opcion;
	cout << "Continuar(1) no(0)" << endl;
	cin >> opcion;
	while (opcion != 0) {
		if (opcion == 1) {
			juego.lanzaRodada();
			juego.muestraResultados();
		}

		cout << "Continuar(1) no(0)" << endl;
		cin >> opcion;
	}
}