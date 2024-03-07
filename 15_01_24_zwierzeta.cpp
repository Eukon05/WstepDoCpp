#include <iostream>
#include <string>
using namespace std;

class Zwierze {
protected:
  string imie;
public:
  Zwierze():imie("brak"){}
  Zwierze(const string &i):imie(i){}
  virtual void info() const {
    cout << "Mam na imie " << imie << endl;
  }    
};    

class Pies:public Zwierze {
  string rasa;
public:
  Pies() 
    : Zwierze(),rasa("kundelek"){
  }
  Pies(const string &i, const string &r)
    :Zwierze(i),rasa(r){
  }
  void wyswietl_rase() const {
    cout << "Moja rasa " << rasa << endl;
  }
  void info() const override{
    Zwierze::info();
    cout << "Moja rasa " << rasa << endl;
  }    
};    

int main()
{
  Pies pies("Burek", "Mieszaniec");
  pies.info();
  pies.wyswietl_rase();
    
  cout << "--------------------------\n";
    
  Zwierze zwierz1 = pies;
  zwierz1.info();
  //zwierz1.wyswietl_rase(); klasa bazowa nie posiada funkcji wyswietl_rase
   
  cout << "--------------------------\n";
    
  Zwierze * zwierz2 = &pies;
  zwierz2->info();
  //zwierz2->wyswietl_rase(); klasa bazowa nie posiada funkcji wyswietl_rase
  
  cout << "--------------------------\n";  
  
  zwierz2 = &zwierz1;
  zwierz2->info();
       
    return 0;
}    