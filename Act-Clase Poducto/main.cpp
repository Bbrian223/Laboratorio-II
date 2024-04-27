/**
Contexto:
Una tienda en línea vende diversos productos. Nos informa que los productos tienen un
nombre, precio por unidad, stock, stock mínimo y tipo (1- físico, 2- digital).

Requisitos:
- No puede existir productos con stocks negativos
- Implementar un constructor por defecto que inicialice todo en cero o vacío “”.
- Implementar un constructor que me permita establecer valores iniciales.
- Implementar los métodos para poder establecer y obtener los valores.
- Los productos digitales siempre se pueden vender ya que no necesitan de stock

Programa
- Hacer un programa que me permita cargar un producto y lo muestre.

- Crear una función llamada cargarProducto que se encargue de pedirles los datos al
  usuario, cree el producto y devuelta el objeto.

- Crear una función llamada mostrarProducto que reciba un producto como parámetro y
  muestre los datos de ese producto. Si el stock del producto es inferior o igual al
  mínimo, debe informar al usuario que hay que reponer el stock del producto. También
  se debe poder ver la valuación del stock del producto, esto se hace multiplicando
  el stock actual con el precio del producto, en caso de que sean digitales la
  valuación es cero.

*/

#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    Producto prod;

    prod = CargarProducto();
    cout<<endl<<endl;
    MostrarProducto(prod);


    return 0;
}
