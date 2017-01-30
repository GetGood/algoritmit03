// tehtava4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>

using namespace std;

int m1[3][5] = { { 3, 23, 45, 4, 96 },{ 1, 15, 20, 2, 62 },{ 13, 7, 30, 90, 55 } };
int m2[3][5] = { { 12, 23, 40, 2, 96 },{ 2, 15, 21, 1, 62 },{ 13, 6, 31, 97, 55 } };


void vertaa() {

	for (int row = 0; row < 3; ++row) {
		for (int col = 0; col < 5; ++col) {
			if (m1[row][col] == m2[row][col]) {
				cout <<"paikka: "<< row << col << " similiar \n";
			}
			else {
				cout <<"paikka: " <<row << col << " not similiar \n";
			}
		}
	}

	}

	


int main() {
	vertaa();
}