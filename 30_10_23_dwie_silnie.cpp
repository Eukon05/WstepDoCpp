#include <iostream>
using uint = unsigned int;
using std::cin, std::cout;

uint silniaIter(uint n){
    uint silnia = 1;
    for(int i = 2; i<=n; i++){
        silnia *= i;
    }

    return silnia;
}

uint silniaRek(uint n){
    if(n <= 1)
        return 1;
    return n * silniaRek(n - 1);
}

uint silnia(uint n, bool czyRek){
    return czyRek ? silniaRek(n) : silniaIter(n);
}

uint sumaSilni(uint n, bool czyRek = false){
    uint suma = 0;

    for (int i = 0; i<=n; i++) {
        suma += silnia(i, czyRek);
    }

    return suma;
}


int main() {
    int n;
    cout << "Podaj liczbę nieujemną: ";

    cin >> n;

    bool czyIter;
    cout << "Czy użyć silni rekurencyjnej? (1 jeśli tak, 0 jeśli nie): ";
    
    cin >> czyIter;

    if(n < 0){
        cout<<"Liczba musi być nieujemna!";
        return -1;
    }

    cout << "Suma wszystkich silni aż do tej liczby to: "<<sumaSilni(n, czyIter);
}