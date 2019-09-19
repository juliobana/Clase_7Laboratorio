#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"

struct datosPersonales{
    char nombre[3];
    int dni[3];
};

int main()
{
    int opcion=1;

    while(opcion != 6)
    {
         opcion = getInt("\n\n\n1 - ALTA \n2 - BAJA \n3 - MODIFICACION\n4 - LISTAR\n5 - ORDENAR\n6 - SALIR\n\n\n");
         struct datosPersonales agenda;
         switch(opcion)
         {
            case 1:
                    i=0;
                    for(int i=0;i<3;i++)
                    {
                    printf("Ingrese nombre: ");
                    gets(agenda[i].nombre);
                    printf("Ingrese DNI: ");
                    scanf("%d",&agenda[i].dni);
                    fflush(stdin);
                    }
                    for(int i=3;i<6;i++){
                    printf("\nNombre: %s ", agenda[i].nombre);
                    printf("\nEl DNI es: %s ", agenda[i].dni);

                    }break;

                }

         }
         break;
    }
    printf("Nombre: %s",);
    printf("Nombre que devuelve por array de char: %s",);

    return 0;
}
