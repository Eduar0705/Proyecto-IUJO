#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

// Función para calcular el logaritmo natural
double calcularLogaritmoNatural(double numero) {
	return log(numero);
}

// Función para calcular el logaritmo en base de raíz
double calcularLogaritmoRaiz(double numero, double raiz) {
	return log(numero) / log(raiz);
}

// Función para calcular el logaritmo de base de fracción
double calcularLogaritmoFraccion(double numero, double numerador, double denominador) {
	return log(numero) / log(numerador / denominador);
}

// Función para calcular el logaritmo en base específica
double calcularLogaritmoBaseEspecifica(double numero, double base) {
	return log(numero) / log(base);
}

int main() {

	//Variables del programa como los indices y el ciclo Do-while...
	int opcion;
	int opcion2;
	int opcion3;
	char respuesta;
	string nombre;


	//variables de la calculadora de matematicas
	double numero;
	double base;
	double numerador;
	double denominador;
	double raiz;
	double resultado;

	cout << "/---------------------------------------------------/"<<endl;
	cout << "/--------------------INICIO-------------------------/"<<endl;
	cout << "/---------------------------------------------------/"<<endl;
	cout << endl;

	do {
		
		cout << "Ingrese su nombre ->  "<<endl;
		cin >> nombre;
		cout <<endl;
				
		cout <<"En que idioma desea continuar?"<<endl;
		cout <<"1. Espanol"<<endl;
		cout <<"2. Ingles"<<endl;
		cout <<"3. Salir"<<endl;
		cin >> opcion;

		switch (opcion) {
			case 1:           //Porgrama en español
				cout << "Bienvenido a nuestro programa en Espanol"<<endl;
				cout << endl;
				
				


				//Aqui se va a colocar la portada con el tilulo y todo el resto...


				cout << "/---------------------------------------------------/"<<endl;
				cout << "/--------------------INDICE-------------------------/"<<endl;
				cout << "/---------------------------------------------------/"<<endl;
				cout << endl;

				cout << "/---------------------------------------------------/"<<endl;
				cout << "Capitulos de la proyecto:"<<endl;
				cout << "1. Capitulo I"<<endl;
				cout << "2. Capitulo II"<<endl;
				cout << "3. Capitulo III"<<endl;
				cout << endl;

				cout << "/---------------------------------------------------/"<<endl;
				cout << "Apartado de matematicas:"<<endl;
				cout << "4. Calculadora de Logaritmos"<<endl;
				cout << "5. Teoria de Logaritmo"<<endl;
				cout << endl;
				
				cout << "/---------------------------------------------------/"<<endl;
				cout << "6. Integrantes"<<endl;
				cin >> opcion2;


				switch (opcion2) {
					case 1:
						cout << "/---------------------------------------------------/"<<endl;
						cout << "Capitulo I"<<endl;
						system("explorer proyecto.docx");
						cout << "/---------------------------------------------------/"<<endl;
						break;

					case 2:
						cout << "/---------------------------------------------------/"<<endl;
						cout << "Capitulo II"<<endl;
						system("explorer proyecto1.docx");
						cout << "/---------------------------------------------------/"<<endl;
						break;

					case 3:
						cout << "/---------------------------------------------------/"<<endl;
						cout << "Capitulo III"<<endl;
						system("explorer proyecto2.docx");
						cout << "/---------------------------------------------------/"<<endl;
						break;


					//Apartado de matematicas <3

					case 4: //Calculadora de logaritmo
						cout << "/---------------------------------------------------/"<<endl;
						cout << "Bienvenido a la calculadora de logaritmos"<<endl;
						cout << "1. Calcular logaritmo natural"<<endl;
						cout << "2. Calcular logaritmo en base raiz"<<endl;
						cout << "3. Calcular logaritmo en base fraccion"<<endl;
						cout << "4. Calcular logaritmo en base espesifica"<<endl;
						cout << "Ingrese una opcion:";
						cout << endl;
						cin >> opcion3;

						if (opcion3 == 1) {
							cout << "Ingrese un numero: ";
							cin >> numero;
							cout << endl;

							//mostrar paso a paso en pantalla
							cout << "Paso 1: Ingrese el numero"<<endl;
							cout << "Numero: "<<numero <<endl;
							cout << endl;

							cout << "Paso 2: Calcular logaritmo natural"<<endl;
							cout << "log(" << numero << ") = " << log(numero) << endl;
							double resultadoNatural = log(numero);
							cout << endl;

							cout << "Paso 3: Mostrar el resultado"<<endl;
							cout << "El logaritmo natural de " <<numero << " es: " <<resultadoNatural <<endl;
							cout << endl;

						} else if (opcion3 == 2) {

							cout << "Ingrese el numero: ";
							cin >> numero;
							cout << "Ingrese la raiz: ";
							cin >> raiz;

							//Mostar el paso a paso en pantalla
							cout << "Paso 1: Ingrese el numero y la raiz" <<endl;
							cout << "Numero: " << numero <<endl;
							cout << "Raiz: " << raiz <<endl;
							cout << endl;

							cout << "Paso 2: Calcular el logaritmo en base de raiz" <<endl;
							cout << "log(" << numero << ") = " << log(numero) <<endl;
							cout << "log(" << raiz << ") = " << log(raiz) << std::endl;
							double resultadoRaiz = log(numero) / log(raiz);
							cout << endl;

							cout << "Paso 3: Mostrar el resultado" <<endl;
							cout << "El logaritmo en base de raiz de " << numero << " con raiz " << raiz << " es: " << resultadoRaiz <<endl;

						} else if (opcion3 == 3) {
							cout << "Ingrese el numero: ";
							cin >> numero;
							cout << "Ingrese el numerador: ";
							cin >> numerador;
							cout << "Ingrese el denominador: ";
							cin >> denominador;
							cout << endl;

							// Mostrar el paso a paso en pantalla
							cout << "Paso 1: Ingrese el numero, el numerador y el denominador" <<endl;
							cout << "Numero: " << numero <<endl;
							cout << "Numerador: " << numerador <<endl;
							cout << "Denominador: " << denominador <<endl;
							cout << endl;

							cout << "Paso 2: Calcular el logaritmo de base de fraccion" <<endl;
							cout << "log(" << numero << ") = " << log(numero) <<endl;
							cout << "log(" << numerador << "/" << denominador << ") = " << log(numerador / denominador) <<endl;
							double resultadoFraccion = log(numero) / log(numerador / denominador);
							cout << endl;

							cout << "Paso 3: Mostrar el resultado" <<endl;
							cout << "El logaritmo de base de fracción de " << numero << " con numerador " << numerador << " y denominador " << denominador << " es: " << resultadoFraccion <<endl;

						} else if (opcion3 == 4) {
							cout << "Ingrese el numero: ";
							cin >> numero;
							cout << "Ingrese la base: ";
							cin >> base;
							cout << endl;

							// Mostrar el paso a paso en pantalla
							cout << "Paso 1: Ingrese el numero y la base" <<endl;
							cout << "Numero: " << numero <<endl;
							cout << "Base: " << base <<endl;
							cout << endl;

							cout << "Paso 2: Calcular el logaritmo en base especifica" <<endl;
							cout << "log(" << numero << ") = " << log(numero) <<endl;
							cout << "log(" << base << ") = " << log(base) <<endl;
							double resultadoBaseEspecifica = log(numero) / log(base);
							cout << endl;

							cout << "Paso 3: Mostrar el resultado" <<endl;
							cout << "El logaritmo en base especifica de " << numero << " con base " << base << " es: " << resultadoBaseEspecifica <<endl;

						} else {
							cout << "Haz cometido un errro!  "<<nombre <<" intente de nuevo x_x"<<endl;
						}
						// Fin de la calculadora de logaritmos <3...


						break;

					case 5:
						break;
						
					case 6:
						system("start integrantes.pdf");
						break;


					default:
						cout << "Haz cometido un errro!  "<<nombre <<" intente de nuevo x_x"<<endl;
						return 1;
				}

				break;

			case 2:        //Programa en Ingles inicia desde aqui
				cout << "Welcome to the program in English"<<endl;
				cout << endl;

				cout << "/---------------------------------------------------/"<<endl;
				cout << "/---------------------INDEX-------------------------/"<<endl;
				cout << "/---------------------------------------------------/"<<endl;
				cout << endl;

				cout << "/---------------------------------------------------/"<<endl;
				cout << "Project Chapters:"<<endl;
				cout << "1. Chapter I"<<endl;
				cout << "2. Chapter II"<<endl;
				cout << "3. Chapter III"<<endl;
				cout << endl;

				cout << "/---------------------------------------------------/"<<endl;
				cout << "mathematics section:"<<endl;
				cout << "4. Logarithm calculator"<<endl;
				cout << "5. Logarithm Theory"<<endl;
				
				cout << endl;
				
				cout << "/---------------------------------------------------/"<<endl;
				cout << "6. members"<<endl;
				cin >> opcion2;


				switch (opcion2) {
					case 1:
						cout << "hello work"<<endl;
						break;

					case 2:
						break;

					case 3:
						break;


					case 4:  //logarithm calculator
						cout << "/---------------------------------------------------/"<<endl;
						cout << "Welcome to the logarithm calculator"<<endl;
						cout << "1. calculate natural logarithm"<<endl;
						cout << "2. calculate logarithm to base square root"<<endl;
						cout << "3. calculate logarithm in fraction base"<<endl;
						cout << "4. calculate logarithm to specific base"<<endl;
						cout << "Enter an option: ";
						cout << endl;
						cin >> opcion3;
						cout << "/---------------------------------------------------/"<<endl;

						if (opcion3 == 1) {
							cout << "Please enter a number: ";
							cin >> numero;
							cout << endl;

							cout << "Step 1: Enter the number"<<endl;
							cout << "number: "<<numero <<endl;
							cout << endl;
							
                            cout << "Step 2: calculate natural logarithm"<<endl;
                            cout << "log(" << numero << ") = " << log(numero) << endl;
							double resultadoNatural = log(numero);
							cout << endl;
							
						    cout << "Step 3: show result"<<endl;
							cout << "The natural logarithm of " <<numero << " is: " <<resultadoNatural <<endl;
							cout << endl;
							
						}else if (opcion3 == 2){
							cout << "Enter a number: ";
						    cin >> numero;
						    cout << "Enter a root: ";
						    cin >> raiz;

						    cout << "Step 1: Enter the number and the square root" <<endl;
						    cout << "Number: " << numero <<endl;
						    cout << "Root: " << raiz <<endl;
						    cout << endl;

						    cout << "Step 2: calculate the logarithm based on the square root" <<endl;
						    cout << "log(" << numero << ") = " << log(numero) <<endl;
						    cout << "log(" << raiz << ") = " << log(raiz) << std::endl;
						    double resultadoRaiz = log(numero) / log(raiz);
						    cout << endl;

						    cout << "Step 3: show the result" <<endl;
						    cout << "The logarithm to the base of the square root of " << numero << " with root " << raiz << " is: " << resultadoRaiz <<endl;

							
						}else if (opcion3 == 3){
							cout << "Enter a number: ";
							cin >> numero;
							cout << "Enter a numerator: ";
							cin >> numerador;
							cout << "Enter a denominator: ";
							cin >> denominador;
							cout << endl;

							// Mostrar el paso a paso en pantalla
							cout << "Step 1: Enter the number, numerator and denominator" <<endl;
							cout << "Number: " << numero <<endl;
							cout << "Numerator: " << numerador <<endl;
							cout << "Denominator: " << denominador <<endl;
							cout << endl;

							cout << "Step 2: Calculate the logarithm of the fraction base" <<endl;
							cout << "log(" << numero << ") = " << log(numero) <<endl;
							cout << "log(" << numerador << "/" << denominador << ") = " << log(numerador / denominador) <<endl;
							double resultadoFraccion = log(numero) / log(numerador / denominador);
							cout << endl;

							cout << "Step 3: Show the result" <<endl;
							cout << "The logarithm of fraction base " << numero << " with numerator " << numerador << " and denominator " << denominador << " is: " << resultadoFraccion <<endl;

						}else if (opcion3 == 4){
								cout << "Enter a number: ";
							    cin >> numero;
							    cout << "Enter a base: ";
							    cin >> base;
							    cout << endl;

    							cout << "Step 1: Enter the number and base" <<endl;
	    						cout << "Number: " << numero <<endl;
		    					cout << "Base: " << base <<endl;
			    				cout << endl;
 
    							cout << "Step 2: Calculate the logarithm in specific base" <<endl;
	    						cout << "log(" << numero << ") = " << log(numero) <<endl;
		    					cout << "log(" << base << ") = " << log(base) <<endl;
			    				double resultadoBaseEspecifica = log(numero) / log(base);
				    			cout << endl;

					    		cout << "Step 3: Display the result" <<endl;
						    	cout << "The logarithm in specific base of " << numero << " whith base " << base << " is: " << resultadoBaseEspecifica <<endl;

						}else{
							cout << "you made a mistake! "<<nombre <<" try again x_x"<<endl;
						}

						break;

					case 5:
						break;

					case 6:
						system("start members.pdf");
						break;

				}

				break;

			case 3:
				cout <<"Gracias por Ingresar a nuestro proyecto "<<nombre <<" Ten feliz dia :D "<<endl;
				break;

			default:
				cout << "Haz cometido un error! " <<nombre <<" intente de nuevo x_x " <<endl;

				return 2;

		}



		cout << endl;
		cout << endl;
		cout << "Desea volver a ejecutar el proyecto? (s/n): ";
		cin >> respuesta;

	} while (respuesta == 's' || respuesta == 'S');

	cout << endl;
	cout << endl;
	cout <<"Gracias por Ingresar a nuestro proyecto "<<nombre <<" Ten feliz dia :D "<<endl;
	cout << endl;
	cout << endl;


	return 0;
}