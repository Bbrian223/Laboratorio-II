#pragma once
#include <string>

class Producto{

private:
    char _nombre[50];
    float _precio;
    int _stock;
    int _stockMin;
    int _tipo;

public:

    Producto();
    Producto(std::string nombre, float precio, int stock, int stockMin, int tipo);

    void setNombre(std::string nombre);
    void setPrecio(float precio);
    void setStock(int stock);
    void setStockMin(int stockMin);
    void setTipo(int tipo);

    std::string getNombre();
    float getPrecio();
    int getStock();
    int getStockMin();
    int getTipo();

};
