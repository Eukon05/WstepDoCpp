#include <iostream>
using std::cin, std::cout;

void removeArray(double* array){
    delete[] array;
}

int main(){
    int n;
    cout<<"Podaj rozmiar tablicy: ";
    cin>>n;

    double* arr = new double[n]{0.0};
    
    removeArray(arr);

    cout<<"Tablicę usunięto!";
}