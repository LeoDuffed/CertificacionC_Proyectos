#include "Serie.h"
#include <iostream>

Serie::Serie(int id, std::string nombre, int hora, int min, std::string genero, int calif)
    : Video(id, nombre, hora, min, genero, calif), capitulos(0), maxEpisodios(10) {
    episodios = new Episodio[maxEpisodios];
}

Serie::~Serie() {
    delete[] episodios;
}

void Serie::agregarEpisodio(std::string titulo, int temporada, int calif) {
    if (capitulos >= maxEpisodios){
        return; 
    }
    episodios[capitulos++] = {titulo, temporada, calif};

    float suma = 0;
    for (int i = 0; i < capitulos; ++i){
        suma += episodios[i].calificacion;
    }
}

void Serie::mostrar() const {
    std::cout << "\nSerie: " << nombre << " | Genero: " << genero << "\n";
    for (int i = 0; i < capitulos; ++i) {
        std::cout << "   - T" << episodios[i].temporada << ": " << episodios[i].titulo
                  << " (" << episodios[i].calificacion << "/5)\n";
    }
}
