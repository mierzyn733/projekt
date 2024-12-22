#include <iostream>
#include <string>

using namespace std;

int wybor;

void zamiana_jednostek();
void menu_glowne();

int main(){



    menu_glowne();
    switch (wybor){

        case 1: zamiana_jednostek();
        break;
    }

}

void menu_glowne(){
    system("cls");
    cout << "--- Menu narzedzia inzynieryjnego (idk) ---" << endl << endl;
    cout << "1. Zamiana jednostek" << endl;
    cout << "2. Opcja2" << endl << endl;
    cout << "-------------------------------------------" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor;
}

void zamiana_jednostek(){

    int wybor_pierwszej;
    int wybor_drugiej;
    float wartosc_wprowadzana;
    //float wynik;

    system("cls");

    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke poczatkowa: " << endl << endl;
    cout << "1. kg - kilogram" << endl;
    cout << "2. m - metr" << endl;
    cout << "3. s - sekunda" << endl;
    cout << "4. F - Fahrenheit" << endl;
    cout << "5. C - Celsiusz" << endl;
    cout << "6. in - cal" << endl;
    cout << "7. lb - funt" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_pierwszej;

    cout << endl << "Wprowadz wartosc jednostki: ";
    cin >> wartosc_wprowadzana;



    switch (wybor_pierwszej){
        case 1:{
        system("cls");
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke poczatkowa: " << endl << endl;
    cout << "1. oz - uncja" << endl;
    cout << "2. lb - funt" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " kg to: " << wartosc_wprowadzana * 35.27 << " oz" << endl;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " kg to: " << wartosc_wprowadzana * 2.20 << " lb" << endl;
            }
            break;
        }

        }

}
}