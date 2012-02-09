#include <iostream>
using namespace std;

class Cuenta {

private:
  int identificador;
  int dinero_actual;
  int dias_en_uso;

public:
  Cuenta();
  ~Cuenta();
  int get_identificador();
  int get_dinero();
  int get_dias_en_uso();
  void leer_cuenta();
  void meter_dinero(int dinero);
  void sacar_dinero(int dinero);

};
