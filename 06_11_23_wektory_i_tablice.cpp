#include <iostream>
using std::cin, std::cout;

int main(){
    int tab[4][4] = {{11, 12, 13, 14}, {21, 22, 23, 24}, {31, 32, 33, 34}, {41, 42, 43, 44}};

    int s = 0;

    int endColumn = 3;

    for (int i = 3; i >= 0; i--) {
        for (int j = 3; j >= endColumn; j--)
            s += tab[i][j];
        endColumn--;
    }

    cout << s;
}