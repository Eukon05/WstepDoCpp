#include <iostream>
using std::cin, std::cout, std::endl;

int** transponuj(int** arr, int n, int m){
    int** result = new int*[m];
    for(int i = 0; i < m; i++)
        result[i] = new int[n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j<m; j++){
            result[j][i] = arr[i][j];
        }
    }

    return result;
}

void fillTab(int** tab, int n, int m){
    srand(time(NULL));

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++)
            tab[i][j] = rand() % 10 + 1;
    }
}

void printTab(int** tab, int n, int m){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++)
            cout<<tab[i][j]<<" ";
        cout<<endl;
    }
}

int main(){

    int** arr = new int*[10];
    for(int i = 0; i < 10; i++)
        arr[i] = new int[15];

    fillTab(arr, 10, 15);

    printTab(arr, 10, 15);

    cout<<endl<<endl;

    int** transponowana = transponuj(arr, 10, 15);

    printTab(transponowana, 15, 10);

    for(int i = 0; i<10; i++){
        delete[] arr[i];
    }

    for(int i = 0; i<15; i++){
        delete[] transponowana[i];
    }

    delete[] arr;
    delete[] transponowana;
}