#include "Personaje.h"
#include "Guerrero.h"
#include <iostream>
using namespace std;

int main() {
    Guerrero miGuerrero("Thor", 100, 5, 20, 15, 10, 8, 5, 30, 5, 10);

    cout << "Nombre: " << miGuerrero.getNombre() << endl;
    cout << "Vida: " << miGuerrero.getVida() << endl;
    cout << "Nivel: " << miGuerrero.getNivel() << endl;
    cout << "Fuerza: " << miGuerrero.getFuerza() << endl;
    cout << "Regeneración de Vida: " << miGuerrero.getRegeneracionVida() << endl;
    cout << "Bloqueo: " << miGuerrero.getBloqueo() << endl;

    cout << "\nModificando atributos del guerrero..." << endl;
    miGuerrero.setFuerza(50);
    miGuerrero.setRegeneracionVida(10);

    cout << "Fuerza actualizada: " << miGuerrero.getFuerza() << endl;
    cout << "Regeneración de Vida actualizada: " << miGuerrero.getRegeneracionVida() << endl;

    return 0;
}
