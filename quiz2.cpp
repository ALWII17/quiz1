// quiz2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double total(double bApel, double bJeruk, double bSemangka) {
	double apel = 24000;
	double jeruk = 32500;
	double semangka = 8000;
	double totalBerat = bApel + bJeruk + bSemangka;
	double hasil;

	double total = (apel * bApel) + (jeruk * bJeruk) + (semangka * bSemangka);


	if (totalBerat >= 10) {
		hasil = (5.0 / 100) * total;
	}
	else if (totalBerat >= 8) {
		hasil = (2.0 / 100) * total;
	}
	else {
		hasil = total;
	}

	return total - hasil;
}

int main()
{
	double bApel, bJeruk, bSemangka;
	cout << "berat apel : "; cin >> bApel;
	cout << "berat jeruk : "; cin >> bJeruk;
	cout << "berat semangka : ";
	cin >> bSemangka;

	cout << "Total : ";
	cout << total(bApel, bJeruk, bSemangka);
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
