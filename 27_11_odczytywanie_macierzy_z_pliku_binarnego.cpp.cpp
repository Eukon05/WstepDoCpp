#include <iostream>
#include <fstream>
#include <string>

using std::cout, std::cin, std::ofstream, std::ifstream, std::string, std::endl;

void wczytajDoTablicy(int** tab, int n, int m, string plik){
    ifstream wejscie(plik);

    if(!wejscie){
        cout<<"Nie można otworzyć pliku wejściowego!";
        exit(-1);
    }

    int input;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            wejscie.read((char*)&input, sizeof(input));
            tab[i][j] = input;
        }
    }

    wejscie.close();
}

int main(){
    int** tab = new int*[3];
    tab[0] = new int[3];
    tab[1] = new int[3];
    tab[2] = new int[3];
    
    wczytajDoTablicy(tab, 3, 3, "macierz.txt");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j<3; j++){
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
}