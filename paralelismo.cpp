// GERMAN TELLEZ VANEGAS

#include <iostream>
#include <fstream>

using namespace std;

int contarPalabras(string );

int main(){
    int i = 0;
    char line[200];
    fstream myfile;
    int cantPalabras;
    myfile.open("TimeMachine.txt");

    while(myfile.getline(line,200))
        {
            cantPalabras+=contarPalabras(line);
        }
    cout<<"Cantidad total de palabras: "<<cantPalabras<<endl;
    myfile.close();
    return 0;
}

int contarPalabras(string cad)
{
    int palabras = 0;
    for (int i =1;i<cad.size();i++)
        {
            if(cad[i-1] == ' ' && cad[i]!=' ' )
                {
                    ++palabras;
                }
        }
    if(cad[0]!= ' ') palabras++;
    return palabras;
}
