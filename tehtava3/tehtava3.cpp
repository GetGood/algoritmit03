// tehtava3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>

using namespace std;

int main() {
	//Taulukon m‰‰ritt‰minen, koska c++ ei salli taulukoiden koon m‰‰ritt‰mist‰ vaihtuvasti, pit‰‰ m‰‰ritt‰‰ maksimi koko staattisesti
	const int SIZE = 100;
	int kirjaimet[SIZE];
	int userSize; // t‰m‰ on k‰ytt‰j‰n antama taulukon koko, jota k‰ytet‰‰n maksimikokona myˆhemmiss‰ vaiheissa
	cout << "anna taulukon koko : " << endl;
	cin >> userSize;
	if (userSize>SIZE) {
		cerr << "Array requested too large";
	}

	cout << "Syˆt‰ viisi lukua satunnaisessa j‰rjestyksess‰ : " << endl;
	for (int i = 0; i<userSize; i++)
	{
		//Otetaan k‰ytt‰j‰n syˆtteet vastaan ja tallennetaan taulukkoon
		cin >> kirjaimet[i];
	}
	cout << endl;
	cout << "Taulukko l‰htˆtilanteessa: " << endl;


	for (int j = 0; j<userSize; j++)
	{
		//N‰ytet‰‰n j‰rjest‰m‰tˆn taulukko ruudulla
		cout << "\t Alkio indeksipaikassa " << j << " : " << kirjaimet[j] << endl;
	}
	cout << endl;

	// Kuplalajittelu aloitetaan
	int temp;
	// Ulompi silmukka vastaa kierroksia
	for (int i2 = 0; i2 <= userSize-1; i2++)
	{
		// Sisemp‰‰ silmukkaa k‰ytet‰‰n alkioiden vertailuun
		for (int j2 = 0; j2<userSize-1; j2++)
		{
			//Alkioiden paikanvaihto
			if (kirjaimet[j2] > kirjaimet[j2 + 1])
			{
				temp = kirjaimet[j2];
				kirjaimet[j2] = kirjaimet[j2 + 1];
				kirjaimet[j2 + 1] = temp;
			}
		}
	}
	// Esitet‰‰n j‰rjestetty taulukko
	cout << "  Taulukko kuplalajittelun j‰lkeen: " << endl;
	for (int i3 = 0; i3<userSize; i3++)
	{
		cout << "\t Alkio indeksipaikassa " << i3 << " : " << kirjaimet[i3] << endl;
	}
	return 0;
}