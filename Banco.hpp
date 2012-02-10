#include <iostream>
#include <list>
#include "Cuenta.hpp"
using namespace std;

class Banco {

private:
  list<Cuenta> cuentas;

public:
  Banco();
  ~Banco();
  void crear_cuenta();
  void meter_dinero();
  void sacar_dinero();
  void transferencia_bancaria();
  void de_cuenta_a_plazo_fijo();
  void imprimir_historial();
  void cambio_de_dia();
  Cuenta buscar_cuenta(int id);

};
