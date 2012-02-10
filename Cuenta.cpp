#include "Cuenta.hpp"


Cuenta::Cuenta() {}

Cuenta::~Cuenta() {}

int Cuenta::get_identificador() {
  return identificador;
}

int Cuenta::get_dinero() {
  return dinero_actual;
}

int Cuenta::get_dias_en_uso(){
  return dias_en_uso;
}

void Cuenta::set_dias_en_uso(int dia) {
  dias_en_uso++;
}

void Cuenta::leer_cuenta() {
  cout << "Nuevo numero de cuenta: "; 
  cin >> identificador;
  dinero_actual = 0;
}

void Cuenta::meter_dinero(int dinero) {
  dinero_actual += dinero;
}

void Cuenta::sacar_dinero(int dinero) {
  if(dinero_actual >= dinero) dinero_actual -= dinero;
}
