// tehtava1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <array>

using namespace std;

int main() {

	char ekat[8] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
	char tokat[8] = { 'e', 'b', 'c', 'g', 'a', 'f', 'd', 'h' };
	for (int i = 0; i < 8; i++)
	{
	
	if (ekat[i] != tokat[i]) {
		cout <<"paikassa: " << i << " poikkeus \n";
	}
	//else {
	//	cout << "paikassa: " << i << " identtisia \n";
	//}
}
}