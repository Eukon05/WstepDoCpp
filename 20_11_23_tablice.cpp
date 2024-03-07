#include <iostream>
#include <cstdlib>
using std::cin, std::cout, std::endl;

void fillTab(int* tab, int a, int b, int n){
    srand(time(NULL));

    for(int i = 0; i<n; i++){
        tab[i] = (rand() % (b - a + 1) + a);
    }
}

void printTab(int* tab, int n){
    cout<<"[";
    for(int i = 0; i<n; i++){
        cout<<tab[i];
        if(i != n-1)
            cout<<", ";
    }
    cout<<"]"<<endl;
}

void sortTab(int *tab, int n){
    int max = n;
    int tmp;
    while(max > 0){
        for(int i = 1; i < max; i++)
            if(tab[i-1] > tab[i]){
                tmp = tab[i];
                tab[i] = tab[i-1];
                tab[i-1] = tmp;
            }
        max--;
    }
}

void sortAndPrint(int* arr, int n){
    sortTab(arr, n);
    printTab(arr, n);
}

int main(){
    int a, b, n;

    cout<<"Podaj początek przedziału: ";
    cin >> a;
    cout << "Podaj koniec przedziału: ";
    cin >> b;
    cout << "Podaj wielkość tablicy: ";
    cin >> n;

    int* arr = new int[n]{};

    fillTab(arr, a, b, n);
    printTab(arr, n);

    sortAndPrint(arr, n);
    delete[] arr;
}