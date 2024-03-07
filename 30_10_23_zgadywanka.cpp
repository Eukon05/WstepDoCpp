#include <iostream>
#include <cstdlib>
using std::cin, std::cout, std::endl;

void displayHotOrCold(int target, int shot) {
    int calc = abs(target - shot);
    
    if(calc == 1)
        cout<<"GORĄCO!"<<endl;
    else if(calc <= 3)
        cout<<"Ciepło..."<<endl;
    else
        cout<<"Zimno :("<<endl;
}

bool game(int tries) {
    cout << "Zaczynamy grę!"<< endl;

    int target = rand() % 10 + 1;
    int shot;

    for(int i = 0; i < tries; i++){
        cout<<"Masz jeszcze "<<tries - i<<" próby"<<endl;
        cout<<"Podaj liczbę: ";

        cin >> shot;

        if(shot == target)
            return true;
        
        displayHotOrCold(target, shot);
    }

    return false;
}

void startGame(int tries = 3) {
    srand(time(NULL));

    bool result = game(tries);

    if(result)
        cout<<"Wygrałeś!";
    else
        cout<<"Przegrałeś :(";
}


int main() {
    startGame(10);
}