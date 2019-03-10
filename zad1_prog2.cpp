#include <cstdlib>
#include <string>

using namespace std;

int ConvertFromSymbolic(string sym)
{
	string litera='';
	float liczba=0;
	tab_litera[8] = { 'M', 'B', 'T', "Qa", "Qi", "Sx", "Sp", "Oc" };
	tab_liczba[8];= {1000000,1000000000,1000000000000,1000000000000000,1000000000000000000,1000000000000000000000,1000000000000000000000000,10000000000000000000000000000}


	for (int i = 0; i < 2; i++)
	{
		if (isletter(sym[sym.length() - 2]))
		{
			litera=sym[sym.lenght()-2] + sym[sym.lenght()-1];
		}
		string & erase(size_type sym, size_type liczba_znakow);
	}
	

	//istringstream tekst(sym);
	//tekst >> liczba >> litera;

	/*
	for (int i = 0; i < 8; i++)
	{
		if (litera == tab_litera[i])
		{
			sym=liczba*tab_liczba[i]
		}
	}
	*/

	return sym;
}


void main()
{
	

	string a;
	cout << "Podaj liczbê /n";
	cin >> a;

	ConvertFromSymbolic(a);

	cout << a;



}

/*
	string	some_string;
	int	some_number;
	float	some_float;
 
	// C style
	/* 
	char buffer[BUFFER_SIZE]; // contents: "some_text 9 5.56"
	sscanf(buffer, "%s %d %f", some_buffer, &some_nuber, &some_float);
 
	*/
 
	// parse text containing string, integer and float
istringstream isstream("some_text 9 5.56");
isstream >> some_string >> some_number >> some_float;

if (isstream.fail())
{
	// handle errors
	cout << "Error in parsing" << endl;
}
else
{
	// print results
	cout << "Parsed items: " << endl
		<< some_string << endl
		<< some_number << endl
		<< some_float << endl;
}
*/