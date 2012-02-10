#include <iostream>
#include "utils.PRO2"
#include <list>
#include "Banco.hpp"
using namespace std;

int main() {
  Banco b;
  int tarea;
  while(cin >> tarea and tarea != -1) {
    int dinero;
    if(tarea == 0) {
      b.crear_cuenta();
    }
    else if(tarea == 1) {
      b.transferencia_bancaria();
    }
    else if (tarea == 2) {
      b.sacar_dinero();
    }
    else if (tarea == 3) {
      b.meter_dinero();
    }
    else if (tarea == 4) {
      b.de_cuenta_a_plazo_fijo();
    }
    else if (tarea == 5) {
      b.imprimir_historial();
    }
    else if (tarea == 6) {

    }
    else if (tarea == 8) {
      b.cambio_de_dia();
    }
    b.imprimir_cuentas();
  }
}
