#include "Serie.h"

Serie :: Serie(int id, std :: string nombre, int hora, int min, std :: string genero, int calificacion) :
Video(id, nombre, hora, min, genero, calificacion){
    numCap = 0;
    maxCap = 10;
    /* 
        Pedimos memoria dinamica para crear un arreglo de 
        maxCap de elementos de tipo Episodio.

        capSeries guarda la direccion de memoria de inicio del bloque.
    */
    capSeries = new Episodio[maxCap];
}

Serie :: ~Serie(){
    // Como estamos usando new, destruimos con delete
    delete[] capSeries; 
}

std :: string Serie :: getNombre() const{
    return nombre;
}
Episodio Serie :: getEpisodio(int index)const{
    if(index >= 0 && index < numCap){
        return capSeries[index];
    }
    // Regresa un episodio vacio si el indice no da nada, para que no crashee
    return {"", 0, 0};
}

void Serie :: addEpisod(std :: string titulo, int temporada, int calificacion){
    // Este metodo esta hecho para agregar los episodios de cada serie

    if(numCap >= maxCap){ // Verificamos si todavia no se llega al limite
        return;
    }
    /* 
        Se agrega el nuevo episodio al arreglo en la posicion numCap 
        y se incrementa para elsiguiente apisodio que se quiera agregar
    */
    capSeries[numCap++] = {titulo, temporada, calificacion};
}
void Serie :: addEpisod(const Episodio& cap){ // Funcion sobrecargada
    if(numCap >= maxCap){
        return;
    }
    capSeries[numCap++] = cap;
}
void Serie :: mostrarVideos() const{
    std :: cout << "\n\nSerie: " << nombre << std :: endl;
    std :: cout << "Genero: " << genero << std :: endl;
    std :: cout << "Calificacion de la serie: " << calificacion << std :: endl;
    for(int i = 0; i < numCap; i++){
        std :: cout << "    -T" << capSeries[i].temporada << ": " << capSeries[i].titulo << " (" << capSeries[i].calificacion << "/5)" << std :: endl;
    }
}
int Serie :: getNumCap() const{
    return numCap;
}