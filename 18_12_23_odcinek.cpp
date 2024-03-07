#include <iostream>
using std::cin, std::cout, std::endl;

class Odcinek{
    struct Punkt{
        int x = 0;
        int y = 0;

        void wypisz(){
            printf("(%d, %d)", x, y);
        }

        void wczytaj(int x, int y){
            this -> x = x;
            this -> y = y;
        }
    };

    Punkt poczatek;
    Punkt koniec;

    public:
        void wypisz(){
            cout << "Początek odcinka jest w punkcie: ";
            poczatek.wypisz();
            cout << ", a koniec w punkcie: ";
            koniec.wypisz();
            cout << endl;
        }

        void wczytaj(){
            int x, y;
            cout << "Podaj współrzędną x'ową POCZĄTKU odcinka: ";
            cin >> x;

            cout << "Podaj współrzędną y'ową POCZĄTKU ocinka: ";
            cin >> y;

            poczatek.wczytaj(x, y);

            cout << "Podaj współrzędną x'ową KOŃCA odcinka: ";
            cin >> x;

            cout << "Podaj współrzędną y'ową KOŃCA ocinka: ";
            cin >> y;

            koniec.wczytaj(x, y);
        }

        bool przeciecie(Odcinek odc){
            double a1 = (poczatek.y - koniec.y)*1.0/(poczatek.x - koniec.x);
            double b1 = poczatek.y - a1 * poczatek.x;

            double a2 = (odc.poczatek.y - odc.koniec.y)*1.0/(odc.poczatek.x - odc.koniec.x);
            double b2 = odc.poczatek.y - a2 * odc.poczatek.x;

            double pPrzeciecia = -(b1 - b2)/(a1-a2);

            //Wypisanie dla ułatwienia debugowania

            cout << "y1 = "<<a1<<"x + "<<b1<<endl;
            cout << "y2 = "<<a2<<"x + "<<b2<<endl;
            cout<<"X punktu przecięcia = "<<pPrzeciecia<<endl;

            if((pPrzeciecia >= poczatek.x && pPrzeciecia <= koniec.x) || (pPrzeciecia >= koniec.x && pPrzeciecia <= poczatek.x))
                if((pPrzeciecia >= odc.poczatek.x && pPrzeciecia <= odc.koniec.x) || (pPrzeciecia >= odc.koniec.x && pPrzeciecia <= odc.poczatek.x))
                    return true;
                return false;
            return false;
        }
};

int main() {
    Odcinek k;
    Odcinek w;

    k.wczytaj();
    k.wypisz();

    w.wczytaj();
    w.wypisz();

    if(k.przeciecie(w))
        cout << "Odcinki przecinają się!";
    else
        cout << "Odcinki nie przecinają się!";
}