#include <iostream>
#include <string>

using namespace std;

string ConvertFromSymbolic(string input)
{
    int comma = 0, afterComma = 0, multiplier[8] = {6,9,12,15,18,21,24,27};
    string letters, units[8] = {"M","B","T","Qa","Qi","Sx","Sp","Oc"};
    string number_s, afterComma_s, beforeComma_s;
    size_t offset = 0;

    stod(&input[0],&offset);

    for(int it = offset ; it < input.length() ; it++) letters = letters + input[it];

    for(int i = 0 ; i < offset ; i++)
    {
        number_s = number_s + input[i];
        if(input[i] == '.')
        {
            comma = i;
        }
        else if( comma != 0 && i > comma)
        {
            afterComma++;
            afterComma_s = afterComma_s + input[i];
        }

        else beforeComma_s = beforeComma_s + input[i];
    }

    string final = beforeComma_s + afterComma_s;

    for(int z = 0; z < 8 ; z++)
    {
        if(letters == units[z])
        {
            for(int y = 0 ; y < (multiplier[z] - afterComma) ; y++) final = final + "0";
        }
    }
    return final;
}

int main()
{
    cout << ConvertFromSymbolic("4M") << endl;
    cout << ConvertFromSymbolic("54T") << endl;
    cout << ConvertFromSymbolic("5.434B") << endl;
    return 0;
}