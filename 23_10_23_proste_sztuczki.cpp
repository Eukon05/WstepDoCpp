#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int y = 21;

    cout<<"Wartość x po zamianie w jednej linii: "<<(x = y)<<endl;

    x = 5; //przywracam wartość zmiennej

    //zamiana liczb z użyciem zmiennej pomocniczej
    int temp = x;

    cout<<endl<<"Zamiana liczb Z UŻYCIEM zmiennej pomocniczej"<<endl;
    printf("Wartość x przed zamianą: %d | Wartość y przed zamianą: %d\n", x, y);

    x = y;
    y = temp;

    printf("Wartość x po zamianie: %d | Wartość y po zamianie: %d\n", x, y);

    //zamiana liczb bez zmiennej pomocniczej
    cout<<endl<<"Zamiana liczb BEZ UŻYCIA zmiennej pomocniczej"<<endl;
    printf("Wartość x przed zamianą: %d | Wartość y przed zamianą: %d\n", x, y);

    /* rozwiązanie wielolinijkowe
    x += y;
    y -= x;
    x += y;
    y *= -1;
    */

    //rozwiązanie jednolinijkowe
    x = (x += y) - (y = (y-=x)*-1);
    
    printf("Wartość x po zamianie: %d | Wartość y po zamianie: %d\n", x, y);

    //zwiększenie o 1 i wypisanie w jednej linii
    cout<<endl<<"Wartość x po zwiększeniu w jednej linii: "<<++x<<endl;;
    
    //wypisanie, zwiększenie, dowód
    cout<<endl<<"Wartość x aktualnie wynosi "<<x++<<", ale właśnie zwiększyłem ją o 1!"<<endl;
    cout<<"A o to dowód: "<<x;
}