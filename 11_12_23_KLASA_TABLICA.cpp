#include <stdexcept>
#include <iostream>

using std::cout, std::endl;

template<typename T>
class Tablica{
    private:
        int liczbaElementow;
        int ostatniIndeks;
        T* wewnetrzna;

        bool isIndexCorrect(int index){
            return index >=0 && index <= liczbaElementow - 1;
        }

        void doubleSize(){
            T* replacement = new T[liczbaElementow * 2];

            for(int i = 0; i < liczbaElementow; i++){
                replacement[i] = wewnetrzna[i];
            }

            wewnetrzna = replacement;
            ostatniIndeks = liczbaElementow * 2 - 1;
        }
    public:
        Tablica(int rozmiar = 10){
            wewnetrzna = new T[rozmiar];
            liczbaElementow = 0;
            ostatniIndeks = rozmiar - 1;
        }

        void add(T element){
            if(liczbaElementow > ostatniIndeks)
                doubleSize();

            wewnetrzna[liczbaElementow] = element;
            liczbaElementow++;
        }
    
        T* at(int index){
            if(!isIndexCorrect(index))
                throw std::out_of_range("Jesteś poza zakresem tablicy!");
            else
                return &wewnetrzna[index];
        }

        void set(int index, T element){
            if(!isIndexCorrect(index))
                throw std::out_of_range("Jesteś poza zakresem tablicy!");

            wewnetrzna[index] = element;
        }
};