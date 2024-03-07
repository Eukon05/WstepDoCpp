#include <iostream>
using namespace std;

int main(){

    string napis, napis2;
    cout<<"Podaj napis: "<<endl;
    cin>>napis;
    cout<<napis<<endl;

    cout<<"Podaj swoje imię: "<<endl;
    cin>>napis;
    cout<<"Witaj "<<napis<<". Jak się masz?"<<endl;

    cout<<"Podaj napis 1: "<<endl;
    cin>>napis;
    cout<<"Podaj napis 2: "<<endl;
    cin>>napis2;

    cout<<napis2<<endl;
    cout<<napis<<endl;

    string tab[3];

    cout<<"Podaj napis 1: "<<endl;
    cin>>tab[0];
    cout<<"Podaj napis 2: "<<endl;
    cin>>tab[1];
    cout<<"Podaj napis 3: "<<endl;
    cin>>tab[2];

    int x, y, t;
    for(int i = 0; i<3; i++){
            x = i+1;
            if(x>2)
                x = (3-x)*-1;
            y = i+2;
            if(y>2)
                y = (3-y)*-1;
            cout<<tab[i]<<" "<<tab[x]<<" "<<tab[y]<<endl;

            t = x;
            x = y;
            y = t;

            cout<<tab[i]<<" "<<tab[x]<<" "<<tab[y]<<endl;
    }
}