#include <stdio.h>

#define SEXO_FEMININO 2 
//FORMA ANTIGA DE DECLARAR VARIAVEL CONSTANTE

int main() {
  const float PI = 3.14;

  //PI = 3.1415; nÃO PODE!!!!
  const int SEXO_MASCULINO = 1;
  int sexo = SEXO_MASCULINO;

  return 0;
}