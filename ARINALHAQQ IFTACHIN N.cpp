// ARINALHAQQ IFTACHIN N.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double original_price = 150000;
	double discount_percentage = 12.5;
	double discount_amount = original_price * (discount_percentage / 100);
	double final_price = original_price - discount_amount;

	cout << "harga : " << original_price << endl;
	cout << "diskon:" << discount_percentage << endl;
	cout << "besarnya diskon dari harga :" << discount_amount << endl;
	cout << "harga setelah diskon :" << final_price << "ribu" << endl;
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
