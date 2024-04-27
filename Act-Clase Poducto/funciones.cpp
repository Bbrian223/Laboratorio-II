#include "funciones.h"
#include <iostream>

using namespace std;

Producto CargarProducto(){
    string nombre;
    float precio;
    int stock, stockMin, tipo;

    cout<<"Nombre de producto: ";
    getline(cin,nombre);
    cout<<"Precio: ";
    cin>>precio;
    cout<<"Stock: ";
    cin>>stock;
    cout<<"Stock Minimo: ";
    cin>>stockMin;
    cout<<"Tipo: ";
    cin>>tipo;
    cin.ignore();

    return Producto(nombre,precio,stock,stockMin,tipo);
}

void MostrarProducto(Producto prod){
    float valuacion;
    valuacion = (float) prod.getStock() * prod.getPrecio();

    cout<<"Nombre de producto: "<<prod.getNombre()<<endl;
    cout<<"Precio: $"<<prod.getPrecio()<<endl;
    cout<<"Stock actual: "<<prod.getStock()<<endl;
    cout<<"Stock Minimo: "<<prod.getStockMin()<<endl;
    cout<<"Tipo: "<<(prod.getTipo() == 1 ? "fisico":"digital")<<endl;
    cout<<"Valuacion: $";
    if(prod.getTipo() == 2) cout<<"0"<<endl;
    else cout<<valuacion<<endl;

    if(prod.getStock() <= prod.getStockMin()){
        cout<<endl<<endl;
        cout<<"Reponer Stock!!"<<endl;
    }
}
