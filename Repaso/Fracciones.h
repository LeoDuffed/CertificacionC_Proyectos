#ifndef FRACCIONES_H
#define FRACCIONES_H
#pragma once // Para que solo lo compile una vez
#include <iostream> 
using namespace std;

class Fracciones{
    private:
    // Variables
    int numerador;
    int denominador;

    public:
    // Constructores
    Fracciones();
    ~Fracciones(){}
    Fracciones(int numerador , int denominador);

    // Setters 
    bool setNumerador(int numerador);
    bool setDenominador(int denominador);

    // Getters
    int getNumerador();
    int getDenominador();

    //Funciones y Metodos
    void mostrarFraccion();
    void simplificar();
    int mcd(int numerador, int denominador);

    // Funciones Operaciones
    void suma(int numerador, int denominador);
    void resta(int numerador, int denominador);
    void mult(int numerador, int denominador);
    void div(int numerador, int denominador);

};

#endif