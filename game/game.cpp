#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// Estructura para almacenar las preguntas y respuestas
struct Pregunta {
    string pregunta;
    vector<string> opciones;
    int respuestaCorrecta;
};

// Función para mostrar una pregunta y obtener la respuesta del usuario
bool hacerPregunta(Pregunta& pregunta) {
    cout << pregunta.pregunta << endl;
    for (int i = 0; i < pregunta.opciones.size(); ++i) {
        cout << i + 1 << ". " << pregunta.opciones[i] << endl;
    }
    int respuesta;
    cout << "You answer: ";
    cin >> respuesta;
    return (respuesta - 1) == pregunta.respuestaCorrecta;
}

int main() {
    // Semilla para generar números aleatorios
    srand(time(0));

    // Lista de preguntas
    vector<Pregunta> preguntas = {
        {"What should you do if you get distracted in class?", {"Raise a hand", "Talk", "Refocus"}, 2},
        {"What is distracting behavior?", {"Something that helps you concentrate", "Something that distracts you", "Something that makes you laugh"}, 1},
        {"How can you avoid distractions while studying?", {"Listen to loud music", "Turn off the phone", "Watch tv"}, 1}
    };

    cout << "Welcome to the distracting behavior game" << endl;
    int puntuacion = 0;

    // Hacer preguntas al azar
    for (int i = 0; i < preguntas.size(); ++i) {
        int indice = rand() % preguntas.size();
        if (hacerPregunta(preguntas[indice])) {
            cout << "¡Correct!" << endl;
            puntuacion++;
        } else {
            cout << "Incorrect. The correct answer was: " << preguntas[indice].opciones[preguntas[indice].respuestaCorrecta] << endl;
        }
        cout << endl;
    }

    cout << "Your final score is: " << puntuacion << " of " << preguntas.size() << endl;
    return 0;
}
