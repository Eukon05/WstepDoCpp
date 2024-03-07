#include <iostream>
#include <fstream>
#include <string>

using std::cout, std::cin, std::ofstream, std::ifstream, std::string, std::endl;

void wypiszTablice(int** tab, int n, int m, string plik){
    ofstream wyjscie(plik, std::ios_base::openmode::_S_app);

    if(!wyjscie){
        cout<<"Nie można otworzyć pliku wyjściowego!";
        exit(-1);
    }

    int x;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            wyjscie.write((char*) &tab[i][j], sizeof(x));
            wyjscie << " ";
        }
        wyjscie << endl;
    }

    wyjscie.close();
}

int main(){
    int** tab = new int*[3];
    tab[0] = new int[3];
    tab[1] = new int[3];
    tab[2] = new int[3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j<3; j++){
            tab[i][j] = i + j;
        }
    }
    

    wypiszTablice(tab, 3, 3, "macierz.txt");
}