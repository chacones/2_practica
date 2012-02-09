#include "Cuenta.hpp"


Cuenta::Cuenta() {
  dinero = 0;
  dias_en_uso = 1;
}

Cuenta::~Cuenta() {}

int Cuenta::get_identificador() {
  return identificador;
}

int Cuenta::get_dinero() {
  return dinero;
}

int Cuenta::get_dias_en_uso(){
  return dias_en_uso;
}

void Cuenta::leer_cuenta() {
  cin >> identificador;
}

void Cuenta::meter_dinero(int dinero) {
  dinero_actual += dinero;
}

void Cuenta::sacar_dinero(int dinero) {
  if(diner_actual >= dinero) dinero_actual -= dinero;
}
