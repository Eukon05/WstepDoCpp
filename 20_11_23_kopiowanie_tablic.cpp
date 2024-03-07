#include <iostream>

int* copyArray(int* source, int n){
    int newSize = 0;
    for(int i = 0; i<n; i++)
        if(source[i] != 0)
            newSize++;

    int* arr = new int[newSize]{};
    int iterator = 0;
    for(int i = 0; i<n; i++)
        if(source[i] != 0){
            arr[iterator] = source[i];
            iterator++;
        }

    return arr;
}

int main(){
    int tab[] = {1, 5, 0, 0, 0, 9, 0, 3, 5, 0, 2, 0, 1};
    int* copied = copyArray(tab, 13);
}