#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

void zad1() 
{
    int zadanko=0;
    cout<<"Które podzadanie?(1-6): ";
    cin>>zadanko;

    switch(zadanko)
    {
        case 1: //1.1. Zadeklarowaæ zmienne typu int, float, char. Przypisaæ do nich wartoœæ, wyœwietliæ je na ekran.
         {
            int x=13;
            float y=12.456;
            char c='x';

            cout << x << ", " << y << ", " << c << endl;
            break;
         }

        case 2: //1.2. Wyświetlić zmienną typu int na ekran. Należy użyć metody printf i konstrukcji %d
        {   
            int a=20;

            printf("int a=%d \n",a);

            break;

        }

        case 3: //1.3. Pobrać od użytkownika liczbę x. Wyświetlić kwadrat liczby x.
        {
            float x;

            cout << "Podaj dowolną liczbę: "; cin >> x;

            cout << "Kwadrat twojej liczby to "<<x*x<<endl;
            break;
        }

        case 4: //1.4. Zapoznac sie z instrukcjami warunkowymi (if, else if, else oraz switch). Pobrac od uzywkownika liczbe i wyswietlic informacje, czy jest ona: mniejsza, wieksza, czy rowna 0.
        {
            float x;
            cout << "Podaj dowolną liczbe: "; cin >> x;

            if(x<0) cout << "Twoja liczba jest mniejsza od 0. \n";

            else if(x>0) cout << "Twoja liczba jest wieksza od 0. \n";

            else cout << "Twoja liczba jest rowna 0. \n";
            break;
        }

        case 5: //1.5. Pobrac ud uzytkownika 3 liczby (x1, x2, x3). Wyswietlic informacje, ktora z tych liczb jest najwieksza.
        {
            float x1, x2, x3;

            cout << "Podaj trzy dowolne liczby kolejno odzielajac enterem \n";
            cin >> x1 >> x2 >>x3;

            if(x3>x1 && x3>x2) cout << "Trzecia liczba jest najwieksza \n";

            else if(x2>x3 && x2>x1) cout << "Druga liczba jest najwieksza \n";

            else cout << "Pierwsza liczba jest najwieksza \n";
            break;
        }

        case 6: //1.6. Napisać prosty kalkulator. Należy pobrać od użytkownika 2 liczby oraz operator (jeden z czterech: mnożenie, dzielenie, dodawanie, odejmowanie). Wymagane jest utworzenie prostego menu użytkownika. Uwaga - należy pamiętać o ułamkach (1/3 powinno dać 0.33, a nie 0)
        {
             int dzialanie=0;
        float x=0, y=0;
        cout << "Wybierz dzialanie  \n"
        <<"+==========================+\n"
        <<"+ 1. Dodawanie             +\n"
        <<"+ 2. Odejmowanie           +\n"
        <<"+ 3. Mnozenie              +\n"
        <<"+ 4. Dzielenie             +\n"
        <<"+ 5. Potegowanie           +\n"
        <<"+==========================+\n"
        <<"Twoj wybor:";
        cin >> dzialanie;
        
        cout << "Podaj dwie dowolne liczby: \n";
        cout << "x= "; cin >> x;
        cout << "y= "; cin >> y;

        switch(dzialanie)
        {
        case 1:
        {
            cout << "x+y= "<<x+y<<endl;
            break;
        }

        case 2:
        {
            cout << "x-y= "<<x-y<<endl;
            break;
        }

        case 3:
        {
            cout << "x*y= "<<x*y<<endl;
            break;
        }

        case 4:
        {
            cout << "x/y= "<<x/y<<endl;
            break;
        }

        case 5:
        {
            cout << "x^y= "<<pow(x,y)<<endl;
            break;
        }
    }

            break;
        }
    }
}

void zad2()
{
	
}
 
void zad3()
{
	
	
}



int main()
{
   zad1();
    
  

    return 0;
}
