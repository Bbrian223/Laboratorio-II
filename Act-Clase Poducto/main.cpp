/**
Contexto:
Una tienda en l�nea vende diversos productos. Nos informa que los productos tienen un
nombre, precio por unidad, stock, stock m�nimo y tipo (1- f�sico, 2- digital).

Requisitos:
- No puede existir productos con stocks negativos
- Implementar un constructor por defecto que inicialice todo en cero o vac�o ��.
- Implementar un constructor que me permita establecer valores iniciales.
- Implementar los m�todos para poder establecer y obtener los valores.
- Los productos digitales siempre se pueden vender ya que no necesitan de stock

Programa
- Hacer un programa que me permita cargar un producto y lo muestre.

- Crear una funci�n llamada cargarProducto que se encargue de pedirles los datos al
  usuario, cree el producto y devuelta el objeto.

- Crear una funci�n llamada mostrarProducto que reciba un producto como par�metro y
  muestre los datos de ese producto. Si el stock del producto es inferior o igual al
  m�nimo, debe informar al usuario que hay que reponer el stock del producto. Tambi�n
  se debe poder ver la valuaci�n del stock del producto, esto se hace multiplicando
  el stock actual con el precio del producto, en caso de que sean digitales la
  valuaci�n es cero.

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
