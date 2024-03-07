#include <iostream>
#include <fstream>
#include <string>

using std::cout, std::cin, std::ofstream, std::ifstream, std::string, std::endl;

void przepisz(string zrodlo, string cel) {
    ifstream wejscie(zrodlo);
    ofstream wyjscie(cel);

    if(!wejscie){
        cout<<"Nie można otworzyć pliku wejściowego!";
        exit(-1);
    }

    if(!wyjscie){
        cout<<"Nie można otworzyć pliku wyjściowego!";
        exit(-1);
    }
    
    string linia;

    while (std::getline(wejscie, linia))
        wyjscie << linia << endl;

    wejscie.close();
    wyjscie.close();
}

int main(){
    string sciezkaWejscia, sciezkaWyjscia;
    cout << "Podaj ścieżkę pliku WEJŚCIOWEGO:";

    cin >> sciezkaWejscia;

    cout << "Podaj ścieżkę do pliku WYJŚCIOWEGO:";
    cin>> sciezkaWyjscia;
    
    przepisz(sciezkaWejscia, sciezkaWyjscia);
}