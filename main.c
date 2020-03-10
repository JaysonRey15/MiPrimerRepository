#include <stdio.h>
#include <stdlib.h>

/*  Los profesores deben tener un nombre, una universidad, un listado de cursos impartidos.

    La universidad debe tener un nombre, una direccion, un telefono.

    Cada curso debe tener un nivel de dificultad (BAJO, MEDIANO, DIFICIL), cantidad de creditos, un nombre y un codigo
    (alfanumerico, ej. isc-205)

    Los estudiantes deben tener un nombre, una universidad, un usuario (unico), un id (unico), un indice acumulado
    y un listado de cursos cursados.

    Las reseñas deben tener una descripcion, un puntaje (entre 0.0 y 5.0), el estudiante que la hizo
    y el profesor sobre el cual se hizo. */

typedef struct universidad {
    char uni_nombre;
    int telefono;
    int direccion;
}UNIVERSIDAD;

typedef struct estudiantes {
    int nombre;
    int usuario;
    int id;
    float ind_ac;
    int cursos;
    UNIVERSIDAD unii;
}ESTUDIANTES;

typedef struct profesor {
    int nombre;
    int universidad;
    int cursos[3];
    int puntaje;
}PROF;

void pucmm();
void usuario ();

int main()
{
    printf("Seleccione una universidad\n");
    printf("1. PUCMM\t 2. Salir del programa\n\nRespuesta: ");
    int opcion = 0;
    scanf("%d",&opcion);

    switch(opcion){

    case 1: pucmm(); break;
    case 2: system("exit");

    }




    return 0;
}

void pucmm () {
UNIVERSIDAD uni;
system("cls");
uni.uni_nombre = "PUCMM";
uni.telefono = "809-200-1962";
uni.direccion = "Santiago";

PROF prof;

prof.nombre = "TacTuk";
prof.universidad = uni.uni_nombre;
prof.cursos[0] = "Algoritmo";
prof.cursos[1] = "Programacion";
prof.cursos[2] = "Informatica";

    printf("Nombre de la universidad: %d",uni.uni_nombre);
    printf("\nTelefono de la universidad: %d",uni.telefono);
    printf("\nDireccion de la universidad: %d",uni.direccion);

    printf("\n\nProfesor en esa universidad: ");
    printf("\nNombre del profesor: %d",prof.nombre);
    printf("\nUniversidad en la cual labora: %d",prof.universidad);
    printf("\nCurso #1: %d",prof.cursos[0]);
    printf("\nCurso #2: %d",prof.cursos[1]);
    printf("\nCurso #3: %d\n",prof.cursos[2]);

    printf("Quieres puntuar este profesor?");
    printf("\n Digite 1 si desea puntuarlo y 2 si no desea puntuarlo\n");
    int ev = 0;
    scanf("%d",&ev);

    if (ev == 1)
        prof.puntaje += 1;

    printf("\n\nEl puntuaje del maestro es: %d\n\n",prof.puntaje);
    system("pause");
    usuario();

}

void usuario (){
    ESTUDIANTES estudi;
    system("cls");
    printf("Ingrese su nombre: ");
    scanf("%d",&estudi.nombre);
    fflush(stdin);
    printf("Ingrese su usuario: ");
    scanf("%d",&estudi.usuario);
    fflush(stdin);
    printf("Ingrese su id: ");
    scanf("%d",&estudi.id);
    fflush(stdin);
    printf("Ingrese su universidad: ");
    scanf("%d",&estudi.unii.uni_nombre);
    fflush(stdin);
    printf("Ingrese su indice acomulado: ");
    scanf("%f",&estudi.ind_ac);
    fflush(stdin);
    printf("GRACIAS POR PARTICIPAR DE NUESTRO PROGRAMA.");

}


