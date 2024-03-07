#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout<<"Podaj liczbę: ";
    cin>>n;

    int t;
    double c;
    for(int i = 1; i<n; i++){
        for(int j = 1; j<n; j++){
            c = sqrt(i*i + j*j);
            t = c;
            t *=10;
            if(t == c*10 && c<n)
                cout<<i<<" + "<<j<<" = "<<c<<endl;
        }
    }

    return 0;
}