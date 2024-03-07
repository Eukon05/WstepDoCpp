#include <iostream>
using namespace std;

class Obiekt{
   int id;
public:
   Obiekt() : id(++ileStworzonych){
     ++ileZyje;
     cout<<"Konstruktor obiektu nr " << id <<endl;
  }    
       
  virtual ~Obiekt(){
     cout<<"Destruktor klasy Obiekt"<<endl;
     --ileZyje;
  }
  static int ileStworzonych;
  static int ileZyje;
   
};
int Obiekt::ileStworzonych =0;
int Obiekt::ileZyje = 0;

class  Paczka : public Obiekt{
  Obiekt * obiekty;
public:
  Paczka(int n){
    cout << "Konstruktor klasy Paczka \n";
    obiekty = new Obiekt[n];
  }    
  ~Paczka() override {
    cout << "Destruktor klasy Paczka " << endl;
    delete[] obiekty;
  }
}; 
    
int main(){
    Obiekt *wsk = new Paczka(3);
    delete wsk;    
    cout << "Liczba stworzonych obiektów : " << Obiekt::ileStworzonych
         << "\nLiczba istniejących obiektów : " << Obiekt::ileZyje << endl;   
    return 0;
}          