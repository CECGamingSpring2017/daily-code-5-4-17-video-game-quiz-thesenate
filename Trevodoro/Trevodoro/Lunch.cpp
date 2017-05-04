#include <iostream>
using namespace std;//made by TJ and Trevin
int main() {
	int starcraft = 0;
	int ssb = 0;
	int KH2 = 0;
	int Halo5 = 0;
	char input = 'a';
	cout << "Today we will determine what kind of game you will play at lunch." << endl;
	cout << "First question: Do you like guns?" << endl;
	cin >> input;
	if (input == 'y') {
		Halo5 = Halo5++;
		starcraft = starcraft++;
	}
	else if (input == 'n') {
		ssb = ssb++;
		KH2 = KH2++;
	}
	cout << "Second question:  Do you prefer Japan or America?" << endl;
	cin >> input;
	if (input == 'j') {
		Halo5++;
		starcraft++;
	}
	else if (input == 'a') {
		KH2++;
		ssb++;
	}
	cout << "do you like being strategic?" << endl;
	cin >> input;
	if (input == 'y')
		starcraft++;
	else if (input == 'n') {
		KH2++;
		Halo5++;
		ssb++;
	}
	cout << "Fourth question:  Do you like using magic?" << endl;
	cin >> input;
	if (input == 'y')
		KH2++;
	else if (input == 'n') {
		Halo5++;
		starcraft++;
		ssb++;
	}
	cout << "Last question:  Do you like punching people with fire?" << endl;
	cin >> input;
	if (input == 'y')
		ssb++;
	else if (input == 'n') {
		Halo5++;
		KH2++;
		starcraft++;
	}


	if (starcraft > Halo5&&starcraft > KH2&&starcraft > ssb)
		cout << "You should play starcraft today." << endl;
	else if (Halo5 > starcraft && Halo5 > KH2 && Halo5 > ssb)
		cout << "You should play Halo today." << endl;
	else if (ssb > starcraft && ssb > Halo5 && ssb > KH2)
		cout << "You should play Super Smash Bros." << endl;
	else if (KH2 > starcraft && KH2 > Halo5 && KH2 > ssb)
		cout << "You should play the greatest game of all time, Kingdom Hearts 2." << endl;
	else
		cout << "You just have a lot of options." << endl;
	}