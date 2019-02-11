/*

  pry_agenda.h
  Aplicacion agenda v0.0
  Entrega 22 Febrero

*/

#ifndef _AGENDA_
#define _AGENDA_
#include <stdio.h>
#include <stdlib.h>
#define TAM_AGENDA 200

/*Tipo enumerado*/
enum sexo {HOMBRE, MUJER};

/*Almacena un valor tipo fecha*/
struct fecha
{
  unsigned int dia;
  unsigned int mes;
  unsigned int anio;
};

/*Tipo persona*/
struct persona
{
  char nombre[50];
  char app1[50];
  char app2[50];
  enum sexo sex;
  struct fecha fecha_nac;
};

/*Tipo contacto*/
struct contacto
{
  struct persona persona;
  char movil[10];
  char email[20];
};

struct agenda
{
  struct contacto lista[TAM_AGENDA];
  int asignaciones[TAM_AGENDA];
};

void inicializa_agenda(struct agenda *libro);
int menu(void);
void nuevo_contacto(struct agenda *libro, struct contacto *cont);
int borrar_contacto(struct agenda *libro, struct contacto cont);
void imprimir_contacto(struct contacto *cont);
int buscar_contacto (struct agenda *libro, struct contacto cont);
int es_llena(struct agenda *libro);

#endif
