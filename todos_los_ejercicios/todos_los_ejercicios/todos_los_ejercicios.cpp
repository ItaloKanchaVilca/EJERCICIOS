#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


//CAPITULO 4

//4.26 dibujar un cuadrado con asteriscos
/*
int main()
{
	int n;
	cout << "ingrese el tamaño del cuadrado:  ";
	cin >> n;
	if (n != 1)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "*";
		}
		cout << "\r\n";
		for (int i = 0; i < n - 2; i++)
		{
			cout << "*";
			for (int j = 0; j < n - 2; j++)
			{
				cout << " ";
			}
			cout << "*";
			cout << "\r\n";
		}
		for (int i = 0; i < n; i++)
		{
			cout << "*";
		}
	}
	else
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
	while (aux > 0)
	{
		resto = aux % 10;
		aux = aux / 10;
		numeroI = numeroI * 10 + resto;
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

//4.28 numero binario a decimal con vectores
/*
int main()
{
	int numero, digito, posicion = 0, resultado = 0;
	long vector[] = { 1,2,4,8,16,32,64,128,256,512,1024 };
	cout << "inserte un numero binario: ";
	cin >> numero;
	while (numero > 0)
	{
		digito = numero % 10;
		if (digito == 1)
		{
			resultado = resultado + vector[posicion];
		}
		posicion++;
		numero = numero / 10;
	}
	cout << " El numero convertido en decimal es: " << resultado << endl;
	return 0;
}
*/

//4.30 sucesion fibonacci infinita 
/*
int main()
{
	int numero = 0, numero1 = 0, numero2 = 1, i = 1;
	cout << "sucesion de fibonacci: " << endl;
	while (i)
	{
		numero1 = numero2;
		numero2 = numero;
		numero = numero1 + numero2;
		i++;
		cout << numero << " ";
	}
	return 0;
}
*/






//CAPITULO 5

//5.11 encontrar el valor mas pequeño 
/*
int main()
{
	int numero[100], n,mayor=0,menor;

	cout << "inserte el numero de elementos para extraer el menor: ";
	cin >> n;


	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ". inserte un numero:  " << endl;
		cin >> numero[i];

		if (mayor < numero[i])
		{
			mayor = numero[i];
		}
	}

	cout << "El mayor elemento de los ingresados es: " << mayor << endl;

	menor = mayor;

	for (int i = 0; i < n; i++)
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
int MCD(int numero1, int numero2)
{
	if (numero1 == 0)
	{
		return numero2;
	}
	return MCD(numero2 % numero1, numero1);
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
