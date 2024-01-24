## Programa para practicar la asignación dinámica de memoria en C++.
Se trata de escribir un programa que realice los siguientes puntos en el orden en que se indican.
- Declara los siguientes punteros: un puntero a un double, un puntero a un int y un puntero a las estructuras TClientes y  TProveedores.
struct TClientes
{
       string codigo;
       string nombre;
};
struct TProveedores
{
       string codigo;
       string nombre;
};
- Reserva memoria dinámica para los anteriores punteros.
- Reserva memoria dinámica para un array de 100 TClientes.
- Reserva memoria dinámica para un array de 100 TClientes mediante una función a la que se le pasa el puntero declarado previamente.
- Reserva memoria dinámica para un array de 100 punteros a TClientes e inicializarlo con NULL.
- Reserva memoria dinámica para un array de 100 punteros a TClientes e inicializarlo con NULL mediante una función a la que se le pasa el puntero declarado previamente.
- Reserva memoria dinámica para un array de 120 de punteros a TProveedores y además reservar memoria para las 120 estructuras TProveedores.
- Destruye el array del ejercicio 4.
- Destruye el array del ejercicio 4 mediante una función a la que se le pasa dicho array
- Destruye el array del ejercicio 7.
- Destruye el array del ejercicio 7 mediante una función a la que se le pasa dicho array