#include <iostream>
using std::cin, std::cout, std::endl;

int* mniejsza(int* a, int* b){
    if(a == nullptr || b == nullptr){
        cout<<"Przekazano pusty wskaźnik!";
        exit(-1);
    }

    return *a < *b ? a : b;
}

int main(){
    int a = 15, b = 30;
    cout<<"Mniejsza z liczb to: "<<*mniejsza(&a, &b);
}