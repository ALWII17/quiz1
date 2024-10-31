// quiz1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

void hitungEk(float massa, float kecepatan) {
    if (massa < 100) {
        massa = massa;  
    }
    else {
        massa = massa / 1000;  
    }

    float Ek = 0.5 * massa * kecepatan * kecepatan;

    cout << "\nHasil Perhitungan Energi Kinetik:" << endl;
    cout << "Massa: " << massa << " kg" << endl;
    cout << "Kecepatan: " << kecepatan << " m/s" << endl;
    cout << "Energi Kinetik: " << Ek << " Joule" << endl;
}

int main() {
    float massa, kecepatan;

    cout << "Menghitung Energi Kinetik" << endl;
    cout << "================================" << endl;

    cout << "Masukkan massa (kg): ";
    cin >> massa;

    cout << "Masukkan kecepatan (m/s): ";
    cin >> kecepatan;

    hitungEk(massa, kecepatan);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
