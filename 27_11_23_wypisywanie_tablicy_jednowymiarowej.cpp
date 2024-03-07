#include <iostream>
#include <fstream>
#include <string>

using std::cout, std::cin, std::ofstream, std::ifstream, std::string, std::endl;

void wypiszTablice(int* tab, int rozmiar, string plik){
    ofstream wyjscie(plik, std::ios_base::openmode::_S_app);

    if(!wyjscie){
        cout<<"Nie można otworzyć pliku wyjściowego!";
        exit(-1);
    }

    for(int i = 0; i < rozmiar; i++){
        wyjscie << tab[i] << endl;
    }

    wyjscie.close();
}

int main(){
    int tab[] = {2, 4, 6, 8, 10, 1, 3, 5, 7, 9};
    wypiszTablice(tab, 10, "tablica.txt");
}