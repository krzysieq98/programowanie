#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

void zad2_1()
{
    //2.1. Zapoznać się z pętlą while. Pętla ta służy do wielokrotnego wykonania fragmentu kodu przez NIEZNANĄ Z GÓRY ilość razy. Pętla
    //wykonuje się zawsze, jeśli warunek jest prawdziwy (ewaluowany do true). Napisać pętlę, w któej użytkownik podaje liczbę x. Należy
    //wyświetlić tę liczbę. Jeżeli użytkownik poda 0, należy zakończyć program.
	
	cout<<endl<<"zad 2.1\n";

    float x=1;

    while(x!=0)
    {
        cout<<"Podaj dowolna liczbe inna od 0. 0 konczy dzialanie petli \n";

        cin>>x;


        cout<<"Twoja liczba to: "<<x<<endl;
    }
	cout<<endl;
}

void zad2_3()
{
    //2.3. Pobrać od użytkownika liczbę x. Należy wyświetlić wszystkie kolejne potęgi liczby x. Zakończyć program, kiedy liczba przekroczy 100000.
	
	cout<<endl<<"zad 2.3\n";
	
    float x,y;

    cout<<"Podaj dowolna liczbe \n";
    cin>>x;
    y=x;
	cout<<endl;
    do
    {
        cout<<x<<endl;
        
        x=x*y;
    }
    while(x<100000);
    
	cout<<endl;
}

void zad2_4()
{
	//2.4. Pobra� od u�ytkownika liczb� x. Je�li liczba jest niedodatnia - nale�y zako�czy� program. Nast�pnie nale�y wy�wietla� kolejno (w
	//nowej linii) wszystkie liczby mniejsze od x, a� osi�gni�te zostanie 0.
	
	cout<<endl<<"zad 2.4\n";
	
	int x;
	
	cout<<"Podaj dowalna liczbe \n";
	
	cin>>x;
	cout<<endl;
	
	if(x>=0)
	{
		do
		{
			cout<<x<<endl;
			x--;
		}
		while(x>=0);
	}	
	cout<<endl;
}

void zad2_5()
{
	/*2.5. Zapozna� si� z instrukcjami continue; i break;. Pierwsza s�u�y do zako�czenia iteracji i przej�cia do nast�pnej, a druga natychmiast
	ko�czy p�tl�. Przerobi� program z zadania 1.4, aby wy�wietla� tylko parzyste liczby (u�y� if oraz continue). Je�li liczba wynosi 40, nale�y
	wyj�� z p�tli i zako�czy� program. */
	
	cout<<endl<<"zad 2.5\n";
	
	int x;
	
	cout<<"Podaj dowalna liczbe \n";
	
	cin>>x;
	x+=1;
	cout<<endl;
	if(x>=0)
	{
		do
		{	
			x--;
			
			if(x%2==0)
			{
				cout<<x<<endl;
				continue;
			}
			
			
		}
		while(x>=0);
	}	
	
	cout<<endl;
}

void zad2_6()
{
	/*2.6. Zapozna� si� z p�tl� for. P�tla s�u�y do wykonania danego fragmentu kodu ZNAN� Z G�RY okre�lon� ilo�� razy. Uwaga - ka�d� p�tl�
	for mo�na zast�pi� p�tl� while i wzajemnie. Zwyczajowo obowiazuje zasada, �e je�li ilo�� iteracji jest znana - u�ywamy for, a je�li nie jest
	znana (zale�y od u�ytkownika lub jakiego� stanu zewn�trznego) - u�ywamy p�tli while. P�tla for sk�ada si� z: ZMIENNEJ ITERACYJNEJ,
	czyli stanu pocz�tkowego p�tli, np. int i = 0. Nast�pnie WARUNKU ZAKO�CZENIA P�TLI, np. i<10. Nast�pnie OPERACJI WYKONYWANEJ
	PO KA�DEJ ITERACJI - zazwyczaj jest to zwi�kszenie iteratora o 1, czyli i = i + 1, b�d� w skr�cie i++. Napisa� p�tl� for, kt�ra wy�wietli cyfry
	od 0 do 9. */
	
	cout<<endl<<"zad 2.6\n";
	
	for(int i=0;i<=9;i++)
		{
			cout<<i<<endl;
		}
	
	cout<<endl;
}

void zad2_7()
{
	/* 2.7. Pobra� od u�ytkownika liczby x i y. Zak�adamy, �e y > x (zawsze, nie musimy tego sprawdza�). Za pomoc� p�tli for wypisa� liczby
	mi�dzy x a y (do przemy�lenia - co jest stanem pocz�tkowym, a co warunkiem zako�czenia p�tli?) */
	
	cout<<endl<<"zad 2.7\n";
	
	int x,y;
	
	cout<<"Podaj pierwsza liczbe: \n";
	cin>>x;
	
	cout<<"Podaj druga liczbe: \n";
	cin>>y;
	cout<<endl;
	
	for(int i=x+1;i<y;i++) //for(stan_poczatkowy ; warunek_zakonczenia ; dzialanie_petli(iteracja))
	{
		cout<<i<<endl;
		
	}
	cout<<endl;
}

void zad2_8()
{
	
	/* 2.8. Pobra� od u�ytkownika liczb� x. Za pomoc� p�tli for wypisa� wszystkie liczby mniejsze od x, ale wi�ksze ni� 0. */
	
	cout<<endl<<"zad 2.8\n";
	
	int x;
	
	cout<<"Podaj dowolna liczbe: \n";
	cin>>x;
	
	cout<<endl;
	
	for(int i=1;i<x;i++)
	{
		cout<<i<<endl;
		
	}
	cout<<endl;
}

void zad2_9()
{
	
	/* 2.9. Pobra� od u�ytkownika liczb� x. Za pomoc� p�tli for wypisywa� CO TRZECI� liczb� wi�ksz� od x. P�tla powinna si� zako�czy�, je�li
	liczba przekroczy 100. Uwaga - prosz� nie u�ywa� operacji continue i break, a sterowa� tylko parametrami p�tli. */

	cout<<endl<<"zad 2.9\n";
	
	int x;
	
	cout<<"Podaj dowolna liczbe: \n";
	cin>>x;
	
	cout<<endl;
	
	for(int i=x;i<=100;i=i+3)
	{
		cout<<i<<endl;
		
	}
	cout<<endl;
}

//zadanie 3

void NewLine()
{
	// 3.1. Napisa� metod� void NewLine(). Powinna ona wypisa� na ekran pojedyncz� pust� lini�. U�y� tej metod� w main().
	
	cout<<endl;
	
}

void NewLines(int count)
{
	/*3.2. Napisa� metod� void NewLines(int count). Powinna ona wypisa� tyle nowych linii, ile zosta�o podanych W PARAMETRZE count (nale�y
	u�y� p�tli for). U�y� metod� w main() */
	
	for(int i=1;i<=count;i++)
	{
		cout<<endl;
	}
	
}

void WriteBiggerNumber(int x, int y)
{
	if(x<y) cout<<y<<endl;
	else if(x>y) cout<<x<<endl;
	else cout<<"Obie liczby sa rowne \n";
}

int Multiply(int x, int y)
{
	/*3.4. Napisa� metod� Multiply(int x, int y) . Metoda powinna ZWR�CI� (s�owo kluczowe return) iloczyn dw�ch parametr�w. Uwaga! Metoda
	NIE POWINNA wypisywa� wyniku - powinien on by� wy�wietlony w funkcji main! */
	
	return x*y;
}

int main()
{
    zad2_1();

    zad2_3();

	zad2_4();
	
	zad2_5();
	
	zad2_6();
	
	zad2_7();
	
	zad2_8();
	
	zad2_9();
	
	//zad 3.1
	
	NewLine();
	
	//zad 3.2
	
	int ile;
	cout<<"Podaj liczbe pustych lini\n";
	cin>>ile;
	
	NewLines(ile);
	
	//zad 3.3
	
	int a,b;
	
	cout<<"Podaj pierwsza liczbe: \n";
	cin>>a;
	
	cout<<"Podaj druga liczbe: \n";
	cin>>b;
	cout<<"Wieksza liczba: \n";
	
	WriteBiggerNumber(a,b); 
	cout<<endl;
	
	//zad 3.4
	
	int k,l,iloczyn;
	
	cout<<"Podaj pierwsza liczbe: \n";
	cin>>k;
	
	cout<<"Podaj druga liczbe: \n";
	cin>>l;

	iloczyn=Multiply(k,l);
	cout<<"Iloczyn podanych liczb= "<<iloczyn<<endl;
	
    return 0;
}
