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

  cout << "DINERO: " << c.get_dinero() << endl;
}


void Banco::sacar_dinero() {
  int id, dinero;
  cin >> id >> dinero;
  Cuenta c = buscar_cuenta(id);
  c.sacar_dinero(dinero);

  cout << "DINERO: " << c.get_dinero() << endl;
}

void Banco::transferencia_bancaria(){
  int id_origen, id_destino, dinero;
  cin >> id_origen >> id_destino >> dinero;
  Cuenta origen = buscar_cuenta(id_origen);
  Cuenta destino = buscar_cuenta(id_destino);
  if(origen.get_dinero() >= dinero) {
    origen.sacar_dinero(dinero);
    destino.meter_dinero(dinero);
  }

  cout << "DINERO ORIGEN: " << origen.get_dinero() << endl;
  cout << "DINERO DESTINO: " << destino.get_dinero() << endl;

}

void Banco::de_cuenta_a_plazo_fijo() {

}

void Banco::imprimir_historial() {

}

void Banco::cambio_de_dia() {

}

Cuenta Banco::buscar_cuenta(int id) {
  list<Cuenta>::iterator it = cuentas.begin();
  bool trobat = false;
  Cuenta resultat;
  while (it != cuentas.end() and not trobat) {
    if(it->get_identificador() == id) {
      trobat = true;
      resultat = (*it);
    }
    else ++it;
  }
  return resultat;
}
