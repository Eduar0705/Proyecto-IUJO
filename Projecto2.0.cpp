#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>


using namespace std;

// Función para calcular el logaritmo con una base especificada
double logBase(double a, double base) {
    if (base <= 0) {
        std::cerr << "Error: La base debe ser un número positivo." << std::endl;
        return NAN; // Devuelve No-es-un-Número si la base no es válida
    }
    return log(a) / log(base);
}

// Función para calcular el logaritmo con una raíz como base
double logRoot(double a, double root) {
    if (root <= 0) {
        std::cerr << "Error: La raíz debe ser un número positivo." << std::endl;
        return NAN; // Devuelve No-es-un-Número si la raíz no es válida
    }
    return logBase(a, pow(root, 1.0 / root));
}

// Función para calcular el logaritmo con una fracción como base
double logFraction(double a, double numerator, double denominator) {
    if (denominator == 0) {
        std::cerr << "Error: El denominador no puede ser cero." << std::endl;
        return NAN; // Devuelve No-es-un-Número si el denominador es cero
    }
    return logBase(a, numerator / denominator);
}

int main() {
	
	int opcion;
	int opcion2;
	int opcion3;
	char respuesta;
	
	cout << "/---------------------------------------------------/"<<endl;
	cout << "/--------------------INICIO-------------------------/"<<endl;
	cout << "/---------------------------------------------------/"<<endl;
	cout << endl;
	
	do{
		cout <<"En que idioma desea continuar?"<<endl;
		cout <<"1. Español"<<endl;
		cout <<"2. Ingles"<<endl;
		cout <<"3. Salir"<<endl;
		cin >> opcion;
		
		switch (opcion){
			case 1:           //Porgrama en español
				cout << "Bienvenido a nuestro programa en Español"<<endl;
				cout << endl;
				
				
				cout << "/---------------------------------------------------/"<<endl;
	            cout << "/--------------------INDICE-------------------------/"<<endl;
	            cout << "/---------------------------------------------------/"<<endl;
	            cout << endl;
	            
	            cout << "/---------------------------------------------------/"<<endl;
	            cout << "Capitulos de la proyecto:"<<endl;
	            cout << "1. Capitulo I"<<endl;
	            cout << "2. Capitulo II"<<endl;
	            cout << "3. Capitulo III"<<endl;
	            cout << "4. Capitulo IV"<<endl;
	            cout << "5. Capitulo V"<<endl;
	            cout << endl;
	            
	            cout << "Apartado de matematicas:"<<endl;
	            cout << "6. Calculadora de Logaritmos"<<endl;
	            cout << "7. Que es un logaritmo?"<<endl;
	            cout << "8. sabias que... ?"<<endl;
	            cout << "9. Aplicaciones de un logaritmos"<<endl;
	            cout << "10. Como se resuelve"<<endl;
	            cout << "11. Como se resuelve"<<endl;
	            cout << "/---------------------------------------------------/"<<endl;
	            cin >> opcion2;
	            
	            
	            switch (opcion2) {
	            	case 1:
	            		cout << "Capitulo I"<<endl;
	            		system("explorer proyecto.docx");
	            		break;
	            	
	            	case 2:
	            		cout << "Capitulo II"<<endl;
	            		break;
	            		
	            	case 3:
	            		cout << "Capitulo III"<<endl;
	            		break;
	            		
	            	case 4:
	            		cout << "Capitulo IV"<<endl;
	            		break;
	            		
	            	case 5:
	            		cout << "Capitulo V"<<endl;
	            		break;
	            		
	            		//Apartado de matematicas <3
	            		
	            	case 6: //Calculadora de logaritmo
	            	    cout << "Bienvenido a la calculadora de logaritmos"<<endl;
	            	    cout << "1. Calcular logaritmo con una base espesificada"<<endl;
	            	    cout << "2. Calcular logaritmo con una raíz como base"<<endl;
	            	    cout << "3. Calcular logaritmo con una fracción como base"<<endl;
	            	    cout << "Ingrese una opcion:";
	            	    cin >> opcion3;
	            	    
	            	    double x, base, root, numerador, denominador;
	            	    
	            	        switch (opcion3) {
                                case 1:
                                    cout << "Ingrese un número: ";
                                    cin >> x;
                                    cout << "Ingrese la base: ";
                                    cin >> base;

                                    double result = logBase(x, base);
                                    cout << "Log base " << base << " de " << x << " es " << result <<endl;
                                    break;

                                /*case 2: 
                                    cout << "Ingrese un número: ";
                                    cin >> x;
                                    cout << "Ingrese la raíz: ";
                                    cin >> root;

                                    result = logRoot(x, root);
                                    cout << "Log base raíz " << root << " de " << x << " es " << result <<endl;
                                    break;*/

                                /*case 3:
                                    cout << "Ingrese un número: ";
                                    cin >> x;
                                    cout << "Ingrese el numerador: ";
                                    cin >> numerador;
                                    cout << "Ingrese el denominador: ";
                                    cin >> denominador;
 
                                    result = logFraction(x, numerator, denominator);
                                    cout << "Log base " << numerator << "/" << denominator << " de " << x << " es " << result <<endl;
                                    break;*/

                                //default:
                                    cerr << "Error: Opción inválida." << std::endl;
                                    break;
                            }
	            		
	            		break;
	            	
	            	
	            	default:
	            		cout <<"ERROR! Opcion no valida x_x"<<endl;
				        return 1;
				}
	            
	            
	            
				break;
				
			case 2:        //Programa en Ingles
				cout << "Welcome to the program in English"<<endl;
				cout << endl;
				
				cout << "/---------------------------------------------------/"<<endl;
	            cout << "/---------------------INDEX-------------------------/"<<endl;
	            cout << "/---------------------------------------------------/"<<endl;
	            cout << endl;
	            
	            cout << "project chapters:"<<endl;
	            cout << "1. chapter I"<<endl;
	            cout << "2. chapter II"<<endl;
	            cout << "3. chapter III"<<endl;
	            cout << "4. chapter IV"<<endl;
	            cout << "5. chapter V"<<endl;
	            
	            cout << "mathematics section:"<<endl;
	            cout << "6. logarithm calculator"<<endl;
				
				break;
				
			case 3:
				cout <<"Gracias por Ingresar a nuestro proyecto <3"<<endl;
				break;
				
			default:
				cout <<"ERROR! Opcion no valida x_x"<<endl;
				
				return 2;
		
		}		
		
		
		
    	cout << endl;
    	cout << endl;
    	cout << "Desea volver a ejecutar el proyecto? (s/n): ";
    	cin >> respuesta;
	}while (respuesta == 's' || respuesta == 'S');
	
	cout << endl;
	cout << "Gracias por ingresar a nuestro proyecto <3";
	
	
	return 0;
}