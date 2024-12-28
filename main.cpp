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
    cout << "3. K - Kelvin" << endl;
    cout << "4. F - Fahrenheit" << endl;
    cout << "5. C - Celsjusz" << endl;
    cout << "6. in - cal" << endl;
    cout << "7. lb - funt" << endl;
    cout << "8. oz - uncja" << endl;
    cout << "9. ft - stopa" << endl;
    cout << "10. mi - mila" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_pierwszej;

    cout << endl << "Wprowadz wartosc jednostki: ";
    cin >> wartosc_wprowadzana;



    switch (wybor_pierwszej){
        case 1:{
        system("cls");
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
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
        break;
            case 2:{
            system("cls");
        cout << "--- Menu zamiany jednostek ---" << endl;
        cout << "Wybierz jednostke docelowa: " << endl << endl;
        cout << "1. in - cal" << endl;
        cout << "2. ft - stopa" << endl;
        cout << "3. mi - mila" << endl << endl;
        cout << "Wprowadz numer opcji: ";
        cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " m to: " << wartosc_wprowadzana * 39.37 << " in" << endl;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " m to: " << wartosc_wprowadzana * 3.28 << " ft" << endl;
            }
            break;
            case 3:{
            cout << endl << wartosc_wprowadzana << " m to: " << wartosc_wprowadzana * 0.000621371192 << " mi" << endl;
                break;
            }
        }

        }
        break;
            case 3:{
        system("cls");
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. F - Fahrenheit" << endl;
    cout << "2. C - Celsjusz" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " K to: " << (wartosc_wprowadzana * 1.8) - 459.67 << " F" << endl;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " K to: " << wartosc_wprowadzana - 273.15 << " C" << endl;
            }
            break;
        }

        }
        break;
            case 4:{
        system("cls");
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. K - Kelvin" << endl;
    cout << "2. C - Celsjusz" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " F to: " << (wartosc_wprowadzana + 459.67) / 1.8 << " K" << endl;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " F to: " << (wartosc_wprowadzana - 32) / 1.8 << " C" << endl;
            }
            break;
        }

        }
        break;

            case 5:{
        system("cls");
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. K - Kelvin" << endl;
    cout << "2. F - Fahrenheit" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " C to: " << wartosc_wprowadzana + 273.15 << " K" << endl;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " C to: " << (wartosc_wprowadzana * 1.8) + 32 << " F" << endl;
            }
            break;
        }

        }
        break;

            case 6:{
        system("cls");
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. m - metr" << endl;
    cout << "2. ft - stopa" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " in to: " << wartosc_wprowadzana * 0.03 << " m" << endl;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " in to: " << wartosc_wprowadzana * 0.08 << " ft" << endl;
            }
            break;
        }

        }
        break;

            case 7:{
        system("cls");
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. kg - kilogram" << endl;
    cout << "2. oz - uncja" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " lb to: " << wartosc_wprowadzana * 0.45 << " kg" << endl;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " lb to: " << wartosc_wprowadzana * 16 << " oz" << endl;
            }
            break;
        }

        }
        break;

            case 8:{
        system("cls");
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. kg - kilogram" << endl;
    cout << "2. lb - funt" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " oz to: " << wartosc_wprowadzana * 0.03 << " kg" << endl;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " oz to: " << wartosc_wprowadzana * 0.06 << " lb" << endl;
            }
            break;
        }

        }
        break;

            case 9:{
        system("cls");
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. m - metr" << endl;
    cout << "2. in - cal" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " ft to: " << wartosc_wprowadzana * 0.30 << " m" << endl;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " ft to: " << wartosc_wprowadzana * 12 << " in" << endl;
            }
            break;
        }

        }
        break;
            case 11:{
        system("cls");
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. m - metr" << endl;
    cout << "2. in - cal" << endl << endl;
    cout << "3. ft - stopa" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " km to: " << wartosc_wprowadzana * 1000 << " m" << endl;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " km to: " << wartosc_wprowadzana * 39370.08 << " in" << endl;
            }
            break;
            case 3:{
            cout << endl << wartosc_wprowadzana << " km to: " << wartosc_wprowadzana *  3280 << " ft" << endl;
            }
            break;
         
        }

        }
        break;

}
}
