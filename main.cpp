#include <stdio.h>
#include "Queue.h"

void menu(void)
{
    printf("\n");
    printf("1 - poloz liczbe na stosie (Push)\n");
    printf("2 - odczytaj wartosc ze szczytu stosu (Top)\n");
    printf("3 - zdejmij liczbe ze stosu (Pop)\n");
    printf("4 - sprawdz czy stos jest pusty\n");
    printf("5 - sprawdz czy stos jest pelny\n");
    printf("6 - koniec programu\n");
    printf("\n");
}

int main()
{
    int temp = 0;
    int option = 0;
    while (1)
    {
        menu();
        scanf("%d", &option);


        switch (option)
        {
            case 1:
                if ( !isQueueFull() ){
                    printf("Podaj wartosc: ");
                    scanf("%d", &temp);
                    Push(temp);
                }
                else {
                    printf("operacja niedozwolona STOS pelny!!!\n\n");
                }

                break;

            case 2:
                if (!isQueueEmpty()) {
                    temp = Top();
                    printf("Odczytana wartosc: %d", temp);
                }
                else {
                    printf("operacja niedozwolona STOS pusty!!!\n\n");
                }

                break;

            case 3:
                if (!isQueueEmpty()) {
                    temp = Pop();
                    printf("Odczytana wartosc: %d", temp);
                }
                else {
                    printf("operacja niedozwolona STOS pusty!!!\n\n");
                }
                break;

            case 4:
                if (isQueueEmpty()) {
                    printf("STOS jest pusty.\n");
                }
                else {
                    printf("STOS nie jest pusty.\n");
                }
                break;

            case 5:
                if (isQueueFull()) {
                    printf("STOS jest pelny.\n");
                }
                else {
                    printf("STOS nie jest pelny.\n");
                }
                break;

            case 6:
                //zakonczenie programu
                return 0;

            default:
                printf("Wybierz wlasciwa opcje.\n\n");
                break;
        }
    }

    return 0;
}