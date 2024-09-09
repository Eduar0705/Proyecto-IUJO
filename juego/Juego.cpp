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
    cout << "Tu respuesta: ";
    cin >> respuesta;
    return (respuesta - 1) == pregunta.respuestaCorrecta;
}

int main() {
    // Semilla para generar números aleatorios
    srand(time(0));

    // Lista de preguntas
    vector<Pregunta> preguntas = {
        {"¿Que debes hacer si te distraes en clase?", {"Levantar la mano", "Seguir hablando", "Volver a concentrarte"}, 2},
        {"¿Que es una conducta distractora?", {"Algo que te ayuda a concentrarte", "Algo que te distrae", "Algo que te hace reir"}, 1},
        {"¿Como puedes evitar distracciones mientras estudias?", {"Escuchar música alta", "Apagar el teléfono", "Mirar televisión"}, 1}
    };

    cout << "Bienvenido al juego de conductas distractoras!" << endl;
    int puntuacion = 0;

    // Hacer preguntas al azar
    for (int i = 0; i < preguntas.size(); ++i) {
        int indice = rand() % preguntas.size();
        if (hacerPregunta(preguntas[indice])) {
            cout << "¡Correcto!" << endl;
            puntuacion++;
        } else {
            cout << "Incorrecto. La respuesta correcta era: " << preguntas[indice].opciones[preguntas[indice].respuestaCorrecta] << endl;
        }
        cout << endl;
    }

    cout << "Tu puntuación final es: " << puntuacion << " de " << preguntas.size() << endl;
    return 0;
}
