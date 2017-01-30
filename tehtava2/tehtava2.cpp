// tehtava2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main() {
	//Taulukon m‰‰ritt‰minen
	char kirjaimet[8] = { 'b','x','a','c','y','t','p','o' };
	

	for (int j = 0; j<8; j++)
	{
		//N‰ytet‰‰n j‰rjest‰m‰tˆn taulukko ruudulla
		cout << "\t Alkio indeksipaikassa " << j << " : " << kirjaimet[j] << endl;
	}
	cout << endl;

	// Kuplalajittelu aloitetaan
	int temp;
	// Ulompi silmukka vastaa kierroksia
	for (int i2 = 0; i2 <= 7; i2++)
	{
		// Sisemp‰‰ silmukkaa k‰ytet‰‰n alkioiden vertailuun
		for (int j2 = 0; j2<7; j2++)
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
	for (int i3 = 0; i3<8; i3++)
	{
		cout << "\t Alkio indeksipaikassa " << i3 << " : " << kirjaimet[i3] << endl;
	}
	return 0;
}