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

//5.29







//CAPITULO 6 PARTE 1

//6.12



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



//6.25



//6.29



//6.30







//CAPITULO 6 PARTE 2

//6.36



//6.37



//6.39



//6.41

