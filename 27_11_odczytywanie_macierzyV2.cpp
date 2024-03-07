#include <iostream>
#include <fstream>
#include <string>

using std::cout, std::cin, std::ofstream, std::ifstream, std::string, std::endl;

int** wczytajTablice(string plik){
    ifstream wejscie(plik);

    if(!wejscie){
        cout<<"Nie można otworzyć pliku wejściowego!";
        exit(-1);
    }

    int n,  m;
    wejscie >> n >> m;

    int** tab = new int*[n];

    for(int i = 0; i < n; i++){
        tab[i] = new int[m];
    }


    int input;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            wejscie.read((char*)&input, sizeof(input));
            tab[i][j] = input;
        }
    }

    wejscie.close();

    return tab;
}

int main(){
    int** tab = wczytajTablice("macierz_z_wymiarami.txt");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j<3; j++){
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
}