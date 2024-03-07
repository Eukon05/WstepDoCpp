#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Podaj, który wyraz ciągu Fibonacciego mam obliczyć: ";
    cin>>n;

    if(n < 0){
        cout<<"Podaj liczbę większą od 0!";
        return -1;
    }
    else if(n == 0){
        cout<<"Obliczona wartość to: 0";
        return 0;
    }
    else if(n == 1){
        cout<<"Obliczona wartość to: 1";
        return 0;
    }
    
    int prev_prev = 0;
    int prev = 1;
    int temp = prev;

    for(int i = 2; i<=n; i++){
        temp = prev;
        prev = prev + prev_prev;
        prev_prev = temp;
    }

    cout<<"Obliczona wartość to: "<<prev;

    return 0;
}