#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "ArrayEmployees.h"
#include "funciones.h"

#define SIZE 1001

int menu();

int main()
{
    char seguir='s';
    eEmployee employee[SIZE];
    initEmployees(employee,SIZE);

    do
    {
        switch(menu())
        {
        case 1:
            addEmployee(employee, SIZE);
            break;
        case 2:
            modifyEmployee(employee, SIZE);
         system("pause");
            break;
        case 3:
         removeEmployee(employee,SIZE); //eEmployee lock[], int lenght, int id
            break;
        case 4:
            sortEmployees(employee, SIZE);
                system("pause");
            //viewEmployees(employee, SIZE);
            break;
        case 5:
            seguir = 'n';
            system("pause");
            break;
        }

    }
    while ( seguir == 's');



    return 0;
}

int menu()
{
    int option;
    system("cls");

    printf("\n******* MENU DE OPCIONES ******* \n\n");
    printf(" 1- ALTAS\n");
    printf(" 2- MODIFICAR\n");
    printf(" 3- BAJA\n");
    printf(" 4- INFORMAR\n");
    printf(" 5- SALIR\n ");
    printf("Ingrese una opcion: ");
    scanf("%d",&option);



    return option;
}



