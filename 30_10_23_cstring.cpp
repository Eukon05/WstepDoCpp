#include <iostream>
using std::cin, std::cout;

void printSpaced(char *arr, int length){
    char c;

    for(int i = 0; i<length; i++){
        c = arr[i];
        if(c == ' ')
            continue;
        else {
            cout<<c;
            if(i != length - 1)
                cout<<" ";
        }
    }
}


int main() {
    int dlugosc;
    cout<<"Podaj długość napisu: ";
    cin>>dlugosc;

    cin.getline(nullptr, 0); //Wczytuję pusty znak po wpisaniu długości napisu

    cout<<"Podaj napis: ";

    char napis[dlugosc];
    cin.getline(napis, dlugosc + 1);

    printSpaced(napis, dlugosc);
}