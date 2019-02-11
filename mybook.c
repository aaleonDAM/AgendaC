/*

  mybook
  Aplicacion agenda v0.0
  Entrega 22 Febrero

*/

#include <stdio.h>
#include "pry_agenda.h"

int main(void)
{
  struct agenda vacia;
  struct contacto vacio;
  int opcion=0;

  inicializa_agenda(&vacia);

  do
  {
    opcion=menu();
    switch(opcion)
    {
      case 1: nuevo_contacto(&vacia, &vacio); break; /*AÑADIR CONTACTO*/
      case 2: break;
      case 3: break;
      case 4: break;
      case 5: break;
      case 6: break;
      case 7: break;
      default: printf("Opcion no valida\n"); break;
    }
  }
  while(opcion<7);

  return 0;
}
