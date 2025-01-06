#include <iostream>
#include <fstream>
using namespace std;

int suma_godzin=0;
int dni_nauki;
int ile_godzin;
int miesiac;
int sr_l_godzin;
int main()
{
    cout << " Miesiace " << endl;
    cout << "1. Styczen" << endl;
    cout << "2. Luty" << endl;
    cout << "3. Marzec" << endl;
    cout << "4. Kwiecien" << endl;
    cout << "5. Maj" << endl;
    cout << "6. Czerwiec" << endl;
    cout << "7. Lipiec" << endl;
    cout << "8. Sierpien" << endl;
    cout << "9. Wrzesien" << endl;
    cout << "10. Pazdziernik" << endl;
    cout << "11. Listopad" << endl;
    cout << "12. Grudzien\n" << endl;

    cout << "Wybierz miesiac ,w ktorym uczyles sie programowania: ";
    cin >> miesiac;

    fstream pomiar;
    pomiar.open("pomiary.txt",ios::app);

    //troche zbedny ten if ,ale lepiej miec
    if (!pomiar) {
        cout << "Nie udalo sie otworzyc pliku!" << endl;
        return 1;
    }


    switch(miesiac)
    {
        case 1: cout << "Ile dni uczyles sie?: ";
        cin >> dni_nauki;

        if(dni_nauki>31){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }
        else if(dni_nauki<1){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }

        else {
            int* ile_godzin = new int[dni_nauki];
            for (int i=0; i<dni_nauki; i++){
            cout << endl <<i+1<< ". Dzien ,godzin: ";
            cin >>ile_godzin[i];
            suma_godzin += ile_godzin[i];
            }
            cout << "Twoja srednia nauka zaokraglajac do calowsci przez " << dni_nauki <<" dni to: "
            << suma_godzin/dni_nauki <<" godziny." << endl;

             pomiar << "Miesiac: Styczen, Dni nauki: " << dni_nauki << ", Suma godzin: " << suma_godzin << endl;

        }
        return 1;


        case 2: cout << "Ile dni uczyles sie?: ";
        cin >> dni_nauki;

        if(dni_nauki>29){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }
        else if(dni_nauki<1){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }

        else {
            int* ile_godzin = new int[dni_nauki];
            for (int i=0; i<dni_nauki; i++){
            cout << endl <<i+1<< ". Dzien ,godzin: ";
            cin >>ile_godzin[i];
            suma_godzin += ile_godzin[i];
            }
            cout << "Twoja srednia nauka zaokraglajac do calowsci przez " << dni_nauki <<" dni to: "
            << suma_godzin/dni_nauki <<" godziny." << endl;

            pomiar << "Miesiac: Luty, Dni nauki: " << dni_nauki << ", Suma godzin: " << suma_godzin << endl;

        }
        return 1;


        case 3: cout << "Ile dni uczyles sie?: ";
        cin >> dni_nauki;

        if(dni_nauki>31){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }
        else if(dni_nauki<1){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }

        else {
            int* ile_godzin = new int[dni_nauki];
            for (int i=0; i<dni_nauki; i++){
            cout << endl <<i+1<< ". Dzien ,godzin: ";
            cin >>ile_godzin[i];
            suma_godzin += ile_godzin[i];
            }
            cout << "Twoja srednia nauka zaokraglajac do calowsci przez " << dni_nauki <<" dni to: "
            << suma_godzin/dni_nauki <<" godziny." << endl;

            pomiar << "Miesiac: Marzec, Dni nauki: " << dni_nauki << ", Suma godzin: " << suma_godzin << endl;

        }
        return 1;


        case 4: cout << "Ile dni uczyles sie?: ";
        cin >> dni_nauki;

        if(dni_nauki>30){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }
        else if(dni_nauki<1){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }

        else {
            int* ile_godzin = new int[dni_nauki];
            for (int i=0; i<dni_nauki; i++){
            cout << endl <<i+1<< ". Dzien ,godzin: ";
            cin >>ile_godzin[i];
            suma_godzin += ile_godzin[i];
            }
            cout << "Twoja srednia nauka zaokraglajac do calowsci przez " << dni_nauki <<" dni to: "
            << suma_godzin/dni_nauki <<" godziny." << endl;

            pomiar << "Miesiac: Kwiecien, Dni nauki: " << dni_nauki << ", Suma godzin: " << suma_godzin << endl;

        }
        return 1;


        case 5: cout << "Ile dni uczyles sie?: ";
        cin >> dni_nauki;

        if(dni_nauki>31){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }
        else if(dni_nauki<1){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }

        else {
            int* ile_godzin = new int[dni_nauki];
            for (int i=0; i<dni_nauki; i++){
            cout << endl <<i+1<< ". Dzien ,godzin: ";
            cin >>ile_godzin[i];
            suma_godzin += ile_godzin[i];
            }
            cout << "Twoja srednia nauka zaokraglajac do calowsci przez " << dni_nauki <<" dni to: "
            << suma_godzin/dni_nauki <<" godziny." << endl;

            pomiar << "Miesiac: Maj, Dni nauki: " << dni_nauki << ", Suma godzin: " << suma_godzin << endl;

        }
        return 1;


        case 6: cout << "Ile dni uczyles sie?: ";
        cin >> dni_nauki;

        if(dni_nauki>30){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }
        else if(dni_nauki<1){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }

        else {
            int* ile_godzin = new int[dni_nauki];
            for (int i=0; i<dni_nauki; i++){
            cout << endl <<i+1<< ". Dzien ,godzin: ";
            cin >>ile_godzin[i];
            suma_godzin += ile_godzin[i];
            }
            cout << "Twoja srednia nauka zaokraglajac do calowsci przez " << dni_nauki <<" dni to: "
            << suma_godzin/dni_nauki <<" godziny." << endl;

            pomiar << "Miesiac: Czerwiec, Dni nauki: " << dni_nauki << ", Suma godzin: " << suma_godzin << endl;

        }
        return 1;


        case 7: cout << "Ile dni uczyles sie?: ";
        cin >> dni_nauki;

        if(dni_nauki>31){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }
        else if(dni_nauki<1){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }

        else {
            int* ile_godzin = new int[dni_nauki];
            for (int i=0; i<dni_nauki; i++){
            cout << endl <<i+1<< ". Dzien ,godzin: ";
            cin >>ile_godzin[i];
            suma_godzin += ile_godzin[i];
            }
            cout << "Twoja srednia nauka zaokraglajac do calowsci przez " << dni_nauki <<" dni to: "
            << suma_godzin/dni_nauki <<" godziny." << endl;

            pomiar << "Miesiac: Lipiec, Dni nauki: " << dni_nauki << ", Suma godzin: " << suma_godzin << endl;

        }
        return 1;


        case 8: cout << "Ile dni uczyles sie?: ";
        cin >> dni_nauki;

        if(dni_nauki>31){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }
        else if(dni_nauki<1){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }

        else {
            int* ile_godzin = new int[dni_nauki];
            for (int i=0; i<dni_nauki; i++){
            cout << endl <<i+1<< ". Dzien ,godzin: ";
            cin >>ile_godzin[i];
            suma_godzin += ile_godzin[i];
            }
            cout << "Twoja srednia nauka zaokraglajac do calowsci przez " << dni_nauki <<" dni to: "
            << suma_godzin/dni_nauki <<" godziny." << endl;

            pomiar << "Miesiac: Sierpien, Dni nauki: " << dni_nauki << ", Suma godzin: " << suma_godzin << endl;

        }
        return 1;


        case 9: cout << "Ile dni uczyles sie?: ";
        cin >> dni_nauki;

        if(dni_nauki>30){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }
        else if(dni_nauki<1){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }

        else {
            int* ile_godzin = new int[dni_nauki];
            for (int i=0; i<dni_nauki; i++){
            cout << endl <<i+1<< ". Dzien ,godzin: ";
            cin >>ile_godzin[i];
            suma_godzin += ile_godzin[i];
            }
            cout << "Twoja srednia nauka zaokraglajac do calowsci przez " << dni_nauki <<" dni to: "
            << suma_godzin/dni_nauki <<" godziny." << endl;

            pomiar << "Miesiac: Wrzesien, Dni nauki: " << dni_nauki << ", Suma godzin: " << suma_godzin << endl;

        }
        return 1;


        case 10: cout << "Ile dni uczyles sie?: ";
        cin >> dni_nauki;

        if(dni_nauki>31){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }
        else if(dni_nauki<1){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }

        else {
            int* ile_godzin = new int[dni_nauki];
            for (int i=0; i<dni_nauki; i++){
            cout << endl <<i+1<< ". Dzien ,godzin: ";
            cin >>ile_godzin[i];
            suma_godzin += ile_godzin[i];
            }
            cout << "Twoja srednia nauka zaokraglajac do calowsci przez " << dni_nauki <<" dni to: "
            << suma_godzin/dni_nauki <<" godziny." << endl;

            pomiar << "Miesiac: Pazdziernik, Dni nauki: " << dni_nauki << ", Suma godzin: " << suma_godzin << endl;

        }
        return 1;


        case 11: cout << "Ile dni uczyles sie?: ";
        cin >> dni_nauki;

        if(dni_nauki>30){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }
        else if(dni_nauki<1){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }

        else {
            int* ile_godzin = new int[dni_nauki];
            for (int i=0; i<dni_nauki; i++){
            cout << endl <<i+1<< ". Dzien ,godzin: ";
            cin >>ile_godzin[i];
            suma_godzin += ile_godzin[i];
            }
            cout << "Twoja srednia nauka zaokraglajac do calowsci przez " << dni_nauki <<" dni to: "
            << suma_godzin/dni_nauki <<" godziny." << endl;

            pomiar << "Miesiac: Listopad, Dni nauki: " << dni_nauki << ", Suma godzin: " << suma_godzin << endl;

        }
        return 1;


        case 12: cout << "Ile dni uczyles sie?: ";
        cin >> dni_nauki;

        if(dni_nauki>31){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }
        else if(dni_nauki<1){
            cout << "Nie ma tyle dni w tym miesiacu.";
        }

        else {
            int* ile_godzin = new int[dni_nauki];
            for (int i=0; i<dni_nauki; i++){
            cout << endl <<i+1<< ". Dzien ,godzin: ";
            cin >>ile_godzin[i];
            suma_godzin += ile_godzin[i];
            }
            cout << "Twoja srednia nauka zaokraglajac do calowsci przez " << dni_nauki <<" dni to: "
            << suma_godzin/dni_nauki <<" godziny." << endl;

            pomiar << "Miesiac: Grudzien, Dni nauki: " << dni_nauki << ", Suma godzin: " << suma_godzin << endl;

        }
        return 1;

        default: cout << "Nie ma takiego miesiaca!";

        break;

    }


    return 0;
}
