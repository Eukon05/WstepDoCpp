#include <iostream>
using std::cin, std::cout, std::endl;

void swap(int& x, int& y){
    x = (x += y) - (y = (y-=x)*-1);
}

int main(){

    int a = 15, b = 30;
    cout<<a<<" "<<b<<endl;

    swap(a, b);

    cout<<a<<" "<<b;
}