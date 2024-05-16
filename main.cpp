#include <stdio.h>
#include "Queue.h"
#include <iostream>
using namespace std;
void menu(void)
{
    cout << endl;
    cout <<"1 - postaw liczbe w kolejce  (Push)" << endl;
    cout <<"2 - odczytaj wartosc pierwszego elementu kolejki (Top)"<< endl;
    cout <<"3 - usun pierwszy element kolejki (Pop)"<< endl;
    cout <<"4 - sprawdz czy kolejka jest pusta"<< endl;
    cout <<"5 - sprawdz czy kolejka jest pelna"<< endl;
    cout <<"6 - koniec programu"<< endl;
    cout << endl;
}

int main()
{
    int temp = 0;
    int option = 0;
    while (1)
    {
        menu();
        cin >> option;


        switch (option)
        {
            case 1:
                if ( !isQueueFull() ){
                    cout << "Podaj wartosc: ";
                    cin >> temp;
                    Push(temp);
                }
                else {
                    cout << "operacja niedozwolona KOLEJKA jest pelna!!!"<< endl << endl;
                }

                break;

            case 2:
                if (!isQueueEmpty()) {
                    temp = Top();
                    cout << "Odczytana wartosc:"<< temp << endl;
                }
                else {
                    cout <<"operacja niedozwolona KOLEJKA jest pusta!!!"<< endl;
                }

                break;

            case 3:
                if (!isQueueEmpty()) {
                    temp = Pop();
                    cout << "Nowy pierwszy element: " << temp << endl;
                }
                else {
                    cout << "operacja niedozwolona KOLEJKA jest pusta!!!"<< endl;
                }
                break;

            case 4:
                if (isQueueEmpty()) {
                    cout <<"KOLEJKA jest pusta." << endl;
                }
                else {
                    cout <<"KOLEJKA nie jest pusta."<< endl;
                }
                break;

            case 5:
                if (isQueueFull()) {
                    cout <<"KOLEJKA jest pelna."<< endl;
                }
                else {
                    cout <<"KOLEJKA nie jest pelna."<< endl;
                }
                break;

            case 6:
                //zakonczenie programu
                return 0;

            default:
                cout <<"Wybierz wlasciwa opcje."<< endl;
                break;
        }
    }

    return 0;
}