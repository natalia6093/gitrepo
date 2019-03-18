/*
 * car.cpp
 */


#include <iostream>
#include <cstdlib>
#include <string>
#include "car.h"

using namespace std;

Car::Car() {
    marka=model="";
    rocznik=przebieg=0;
}

Car::Car(string mr, string ml, int r, int p) {
    if (r < 1990) r = 1990;
    marka=mr;
    model mr;
    rocznik=r;
    przebieg = p;
}


void Car::dodaj() {
    cout << "Dodaj samochód: " << endl;
    cout << "Marka: "; cin.getline(marka, rozmiar);
    cout << "Model: "; cin.getline(model, rozmiar);
    cout << "Rocznik: "; cin >> rocznik;
    cout << "Przebieg: "; cin >> przebieg;
}

void Car::dane() {
    cout << endl;
    cout << "Twój samochód: " << endl;
    cout << "Marka: " << marka << endl;
    cout << "Model: " << model << endl;
    cout << "Rocznik: " << rocznik << endl;
    cout << "Przebieg: " << przebieg << endl;
}
