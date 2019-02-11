/*

  pry_agenda.c
  Aplicacion agenda v0.0
  Entrega 22 Febrero

*/
/*Para imprimir printf("%s\n", lista.lista->persona.nombre);*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "pry_agenda.h"

int menu(void)
{
  int opcion=0;
  printf("--------------------\n");
  printf("- Elige una opcion -\n");
  printf("--------------------\n");

  printf("1. Nuevo Contacto\n");
  printf("2. Buscar Contacto\n");
  printf("3. Eliminar Contacto\n");
  printf("4. Numero de Contactos Actuales\n");
  printf("5. Mostrar Agenda\n");
  printf("6. Editar Contactos\n");
  printf("7. Salir\n\n");
  printf(">> ");

  scanf("%d", &opcion);

  return opcion;
}

void nuevo_contacto(struct agenda *libro, struct contacto *cont)
{
    char kk;
    int sex;
    system("cls");

    printf("Primer Apellido: ");
    fgets(cont->persona.app1, 50, 0);
    scanf("%s", &kk);

    printf("Segundo Apellido: ");
    fgets(cont->persona.app2, 50, 0);
    scanf("%s", &kk);

    printf("Nombre: ");
    fgets(cont->persona.nombre, 50, 0);
    scanf("%s", &kk);

    printf("Sexo (H->1, M->2): ");
    scanf("%d", &sex);
    if(sex==1)
      cont->persona.sex=HOMBRE;
    else if(sex==2)
      cont->persona.sex=MUJER;
    else
      printf("Oh zi que me gusta mama mio");

    printf("Fecha de nacimiento (DD/MM/AAAA):");
    scanf("%u/%u/%u", &cont->persona.fecha_nac.dia, &cont->persona.fecha_nac.mes, &cont->persona.fecha_nac.anio);

    printf("Telefono: ");
    fgets(cont->movil, 10, 0);
    scanf("%s", &kk);

    printf("Email: ");
    fgets(cont->email, 20, 0);
    scanf("%s", &kk);

    printf("Contacto anadido\n\n");
    sleep(1.5);
    system("cls");
}

void inicializa_agenda(struct agenda *libro)
{
  int i;
  for(i=0;i<TAM_AGENDA;i++)
  {
    libro->asignaciones[i]=0;
  }
}
