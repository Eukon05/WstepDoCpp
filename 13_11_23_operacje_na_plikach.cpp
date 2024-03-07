#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream wejscie("beemovie.txt");
    ifstream wejscieSmoka("smok.txt");
    ofstream wyjscie("rosnacy.txt");
    
    int weJeden;
    int weDwa;
    while(!wejscie.eof()){
        wejscie >> weJeden;
        wejscieSmoka >> weDwa;

         while (weJeden > weDwa && !wejscieSmoka.eof())
        {
            wyjscie << weDwa << " ";
            wejscieSmoka >> weDwa;
        }

        wyjscie << weJeden << " " << weDwa << " ";
    }

    wejscie.close();
    wejscieSmoka.close();
    wyjscie.close();
}