#include <iostream>
#include <iomanip>
using namespace std;
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
void reserva4(TClientes *&); 
void reserva6(TClientes **&); 
void destruir8(TClientes *&);
void destruir11(TProveedores **&); 

int main(){
       printf("Hola mundo");
       double *d;
       int *i;
       TClientes * clientes;
       TProveedores * prov;

       d = new double;
       i = new int;
       clientes = new TClientes;
       prov = new TProveedores;

       clientes = new TClientes[100];

       reserva4(clientes);

       //5
       TClientes **tc;
       tc = new TClientes*[100];
       for(int x = 0; x < 100; x++)
              tc[x] = NULL;

       //6
       reserva6(tc);

       //7
       TProveedores **tprov;
       tprov = new TProveedores*[120];
       for(int x=0; x < 120; x++)
              tprov[x] = new TProveedores;

       //8
       delete [] clientes;

       //9
       reserva4(clientes);
       destruir8(clientes);

       //10
       for(int x=0; x < 120; x++)
              delete tprov[x];
       delete [] *tprov;

       //11
       tprov = new TProveedores*[120];
       for(int x=0; x < 120; x++)
              tprov[x] = new TProveedores;
       destruir11(tprov);
}

void reserva4(TClientes *&client){
       client = new TClientes[100];
}

void reserva6(TClientes **&client){
       client = new TClientes*[100];
      for(int x = 0; x < 100; x++)
              client[x] = NULL; 
}

void destruir8(TClientes *&client){
       delete [] client;
}

void destruir11(TProveedores **&prov){
       for(int x=0; x < 120; x++)
              delete prov[x];
       delete [] prov;
}
