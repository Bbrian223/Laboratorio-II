#include <iostream>
#include <cstring>
#include "producto.h"

using namespace std;

Producto::Producto(){
    strcpy(_nombre,"");
    _precio = 0.0f;
    _stock = 0;
    _stockMin = 0;
    _tipo = 0;
}

Producto::Producto(string nombre, float precio, int stock, int stockMin, int tipo){
    setNombre(nombre);
    setPrecio(precio);
    setStock(stock);
    setStockMin(stockMin);
    setTipo(tipo);
}

void Producto::setNombre(string nombre){
    strcpy(_nombre,nombre.c_str());
}

void Producto::setPrecio(float precio){
    _precio = precio;
}

void Producto::setStock(int stock){
    if(stock < 0) stock = 0;
    _stock = stock;
}

void Producto::setStockMin(int stockMin){
    if(stockMin < 0) stockMin = 0;
    _stockMin = stockMin;
}

void Producto::setTipo(int tipo){
    if(tipo != 1 && tipo != 2) tipo = 1;
    _tipo = tipo;
}


string Producto::getNombre(){
    string nombre = _nombre;
    return nombre;
}
float Producto::getPrecio(){return _precio;}
int Producto::getStock(){return _stock;}
int Producto::getStockMin(){return _stockMin;}
int Producto::getTipo(){return _tipo;};


