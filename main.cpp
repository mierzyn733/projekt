#include <iostream>
#include <string>

using namespace std;

int wybor;
void funkcja1();
void funkcja2();
void funkcja3();

int main(){

    cout << "--- Menu narzedzia inzynieryjnego (idk) ---" << endl << endl;
    cout << "1. Opcja1" << endl;
    cout << "2. Opcja2" << endl << endl;
    cout << "-------------------------------------------" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor;

    switch (wybor){

        case 1: funkcja1();
        break;

        case 2: funkcja2();
        break;

        default: funkcja3();
        break;
    }

}

void funkcja1(){
    cout << "opcja 1 dziala" << endl;
}

void funkcja2(){
    cout << "opcja 2 dziala" << endl;
}

void funkcja3(){
    cout << "to nie dziala" << endl;
}