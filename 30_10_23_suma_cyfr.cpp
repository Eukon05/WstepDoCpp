#include <iostream>
using uint = unsigned int;
using std::cin, std::cout;

uint sumaCyfr(uint n){
    uint sum = 0;

    while (n != 0){
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int n;
    cout<<"Podaj liczbę nieujemną: ";

    cin >> n;

    if(n < 0){
        cout<<"Liczba musi być nieujemna!";
        return -1;
    }

    cout<<"Suma cyfr tej liczby to: "<<sumaCyfr(n);
}