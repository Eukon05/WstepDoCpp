#include <iostream>
using namespace std;
using llint = long long int;

llint factorial(int n){
    llint f = 1;
    for(int i = 2; i <=n; i++){
        f*=i;
    }

    return f;
}

llint factorialSum(int n){
    llint s = 0;
    for(int i = 0; i<=n; i++){
        s += factorial(i);
    }

    return s;
}

int main(){
    cout << "Podaj mi liczbę, a ja obliczę sumę silni wszystkich liczb do tej liczby: ";

    int n;
    cin >> n;

    if(n<0){
        cout<<endl<<"Podana liczba musi być > 0 !!!";
        return -1;
    }

    //Liczba 30 znaleziona metodą prób i błędów...
    if(n >= 30){
        cout<<"Uzyskana liczba przekroczy zakres! Podaj mniejszą liczbę!";
        return -1;
    }

    llint result = factorialSum(n);

    cout<<endl<<"Ta suma wynosi: " << result;

    return 0;
}