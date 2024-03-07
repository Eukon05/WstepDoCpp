#include <iostream>
using std::cout;

int suma(const int* a, const int* b){
    if(a == nullptr || b == nullptr){
        cout<<"Przekazano pusty wskaźnik!";
        exit(-1);
    }

    return *a + *b;
}

int main(){
    const int a = 15, b = 30;
    cout<<"Suma tych stałych to: "<<suma(&a, &b);
}