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

int main (){
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

	cout << "Ingrese su nombre ->  ";
	cin >> nombre;
	cout << endl;

	do{
		cout << "En que idioma desea ejecutar el programa  "<<nombre <<endl;    //inicio del programa en español
	    cout << "1. Español"<<endl;
	    cout << "2. Ingles"<<endl;
	    cout << "3. Salir"<<endl;
	    cin >> opcion;
	    cout << endl;

 	    switch (opcion){
	        case 1:
	            cout << "Bienvenido al Programa en Español "<<nombre <<endl;
		        cout << endl;

		        cout << "************************************************"<<endl;
	            cout << "**              Inicio de la Revista          **"<<endl;
	            cout << "************************************************"<<endl;
	            cout << endl;

                system("start portada.pdf");

	            cout << "************************************************"<<endl;
	            cout << "**              Indice de la Revista          **"<<endl;
	            cout << "************************************************"<<endl;
	            cout << endl;

	 	        cout << "------------------------------------------------"<<endl;
		        cout << "Capitulos del Proyecto de TID y RSP"<<endl;
				cout << "1. Capitulo I"<<endl;
				cout << "2. Capitulo II"<<endl;
				cout << "3. Capitulo III"<<endl;
				cout << "4. Capitulo IV y V"<<endl;
				cout << endl;

				cout << "------------------------------------------------"<<endl;
		        cout << "Apartado para Matematicas: "<<endl;
				cout << "5. Calculadora de Logaritmos"<<endl;
				cout << "6. Definicion de los Logaritmos"<<endl;
				cout << endl;

				cout << "------------------------------------------------"<<endl;
		        cout << "7. Revista"<<endl;
				cout << "8. Integrantes"<<endl;
				cout << "9. Juego didactico"<<endl;
				cout << "10. Ayuda del sistema"<<endl;
				cout << "11. Creditos"<<endl;
				cin >> opcion2;
                
				switch (opcion2){
				case 1:
		    		cout << "EL Capitulo I es: "<<endl;
	    			system("start proyecto.pdf");
					break;

				case 2:
				    cout << "EL Capitulo II es: "<<endl;
			    	system("start proyecto1.pdf");
				    break;

				case 3:
				    cout << "EL Capitulo III es: "<<endl;
				    system("start proyecto2.pdf");
				    break;

				case 4:
				    cout << "EL Capitulo IV y V es: "<<endl;
				    system("start proyecto3.pdf");
				    break;

				case 5:
				    cout << "Bienvenido "<<nombre <<" a la calculadora de logaritmos \n que opcion quieres realizar"<<endl;
					cout << "1. Logaritmo Natural"<<endl;
					cout << "2. Logaritmo en base especifica"<<endl;
					cout << "3. Logaritmo en base Raiz cuadrada"<<endl;
					cout << "4. Logaritmo en base de Fraccion "<<endl;
					cout << "Ingrese un opcion: ";
					cin >> opcion3;
					cout << endl;

					if (opcion3 == 1){
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

					}else if (opcion3 == 2){
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

					}else if (opcion3 == 3){
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
						cout << "log(" << raiz << ") = " << log(raiz) <<endl;
						double resultadoRaiz = log(numero) / log(raiz);
						cout << endl;

						cout << "Paso 3: Mostrar el resultado" <<endl;
						cout << "El logaritmo en base de raiz de " << numero << " con raiz " << raiz << " es: " << resultadoRaiz <<endl;

					}else if (opcion3 == 4){
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

					}else{
						cout << "Opción no válida  "<<nombre <<  "Intenta nuevamente x_x" <<endl;
					}
					
				    break;	
				    
				case 6:
					system("start mate.pdf");
					break;

				case 8:
				    cout << "Los integrante son :"<<endl;
				    system("start integrantes.pdf");
				    break;
				case 9:
				system("start C:/Users/eduar/Desktop/proyecto2/juego/juego.exe");
			    	break;
				default:
				cout << "Haz cometido un error! "<<nombre <<"  intenta de nuevo x_x"<<endl;
					break;
				}

		    break;

			case 2:
			cout << "Welcome to the Program in English "<<nombre <<endl;
			cout << endl;

            cout << "************************************************"<<endl;
	        cout << "**             Start of the magazine          **"<<endl;
	        cout << "************************************************"<<endl;
	        cout << endl;

            system("start portada.pdf");

            cout << "************************************************"<<endl;
	        cout << "**                 Journal index              **"<<endl;
            cout << "************************************************"<<endl;
	        cout << endl;

	        cout << "------------------------------------------------"<<endl;
	        cout << "Chapters of the TID and RSP Project"<<endl;
			cout << "1. Chapter I"<<endl;
			cout << "2. Chapter II"<<endl;
			cout << "3. Chapter III"<<endl;
			cout << "4. Chapter IV y V"<<endl;
			cout << endl;

			cout << "------------------------------------------------"<<endl;
	        cout << "Section for Mathematics: "<<endl;
			cout << "5. Logarithm Calculator"<<endl;
			cout << "6. Definition of Logarithms"<<endl;
			cout << endl;

			cout << "------------------------------------------------"<<endl;
	        cout << "7. Magazine"<<endl;
			cout << "8. Members"<<endl;
			cout << "9. System Help"<<endl;
			cout << "10. credits"<<endl;
			cout << endl;

			cin >> opcion2;

			switch (opcion2)
			{
			case 1:
			    cout << "Chapter I: "<<endl;
				system("start ChapterI.pdf");
				break;
			
			case 2:
			    cout << "Chapter II: "<<endl;
			    system("start ChapterII.pdf");
			    break;

			case 3:
			    cout << "Chapter III: "<<endl;
				system("start ChapterIII.pdf");
			    break;

			case 4:
			    cout << "Chapter IV and V: "<<endl;
				system("start ChapterI.pdf");
		    	break;

			case 5:
				cout << "Welcome  "<<nombre <<"  to the logarithm calculator \n what option do you want to perform"<<endl;
				cout << "1. Natural Logarithm"<<endl;
				cout << "2. Logarithm to specific base"<<endl;
				cout << "3. Logarithm to base Square root"<<endl;
				cout << "4. Logarithm to Fraction Base"<<endl;
				cout << "Enter an option: ";
				cin >> opcion3;
				cout << endl;

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

				}else if (opcion3 == 3){
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

				}else if (opcion3 == 4){
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

				}else{
					cout <<"Invalid option  " <<nombre <<"  Try again x_x"<<endl;
				}

		    	break;
		    	
		    case 6:
		    	system("start mate2.pdf");
		    	break;

			case 8:
			    cout << "The members are: "<<endl;
				system("start members.pdf");
			    break;
			
			default:
				break;
			}

			break;
	    default:
		    cout << "Opcion invalida  "<<nombre << "Intete de nuevo x_x"<<endl;
		    break;
	    }

		cout << endl;
		cout << "Desea volver a ejecutar el programa? (S/N): ";
		cin >> respuesta;
		cout << endl;
	}while (respuesta == 's' or respuesta == 'S');
	
	cout <<endl;
	cout << "Gracias por haber iniciado la revista  "<<nombre <<"  Ten un buen dia :D"<<endl;
	cout << endl;
	

	

    return 0;
}