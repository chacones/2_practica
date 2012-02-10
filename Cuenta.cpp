#include "Cuenta.hpp"


Cuenta::Cuenta() {
  dinero_actual = 0;
  dias_en_uso = 1;
}

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

void Cuenta::leer_cuenta() {
  cout << "Nuevo numero de cuenta: "; 
  cin >> identificador;
}

void Cuenta::meter_dinero(int dinero) {
  dinero_actual += dinero;
}

void Cuenta::sacar_dinero(int dinero) {
  if(dinero_actual >= dinero) dinero_actual -= dinero;
}
