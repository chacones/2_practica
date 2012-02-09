#include "Banco.hpp"

Banco::Banco() {}

Banco::~Banco() {}

void Banco::crear_cuenta() {
  Cuenta c;
  c.leer_cuenta();
  list<Cuenta>::iterator it = cuentas.begin();
  cuentas.insert(it, c);
}

void Banco::meter_dinero() {
  int id, dinero;
  cin >> id >> dinero;
  Cuenta c = buscar_cuenta(id);
  c.meter_dinero(dinero);
}


void Banco::sacar_dinero() {
  int id, dinero;
  cin >> id >> dinero;
  Cuenta c = buscar_cuenta(id);
  c.sacar_dinero(dinero);
}

void Banco::transferencia_bancaria(){

}

void Banco::de_cuenta_a_plazo_fijo() {

}

void Banco::imprimir_historial() {

}


Cuenta Banco::buscar_cuenta(int id) {
  list<Cuenta>::iterator it = cuentas.begin();
  bool trobat = false;
  Cuenta resultat;
  while (it != cuentas.end() and not trobat) {
    if((it->get_identificador() == id) {
      trobat = true;
      resultat = (*it);
    }
    else ++it;
  }
  return resultat;
}
