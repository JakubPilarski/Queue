#include <stdio.h>
#include "Queue.h"

void menu(void)
{
    printf("\n");
    printf("1 - postaw liczbe w kolejce  (Push)\n");
    printf("2 - odczytaj wartosc pierwszego elementu kolejki (Top)\n");
    printf("3 - usun pierwszy element kolejki (Pop)\n");
    printf("4 - sprawdz czy kolejka jest pusta\n");
    printf("5 - sprawdz czy kolejka jest pelna\n");
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
                    printf("operacja niedozwolona KOLEJKA jest pelna!!!\n\n");
                }

                break;

            case 2:
                if (!isQueueEmpty()) {
                    temp = Top();
                    printf("Odczytana wartosc: %d", temp);
                }
                else {
                    printf("operacja niedozwolona KOLEJKA jest pusta!!!\n\n");
                }

                break;

            case 3:
                if (!isQueueEmpty()) {
                    temp = Pop();
                    printf("Nowy pierwszy element: %d", temp);
                }
                else {
                    printf("operacja niedozwolona KOLEJKA jest pusta!!!\n\n");
                }
                break;

            case 4:
                if (isQueueEmpty()) {
                    printf("KOLEJKA jest pusta.\n");
                }
                else {
                    printf("KOLEJKA nie jest pusta.\n");
                }
                break;

            case 5:
                if (isQueueFull()) {
                    printf("KOLEJKA jest pelna.\n");
                }
                else {
                    printf("KOLEJKA nie jest pelna.\n");
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