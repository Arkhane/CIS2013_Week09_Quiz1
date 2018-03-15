#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int As = 0;
	int Fs = 0;
	int as = 0;
	int bs = 0;
	int total = 0;
	char item;


	ifstream inFile;
	inFile.open("info.dat");

	if (inFile.fail()) {
		cout << "Something really aweful happened here with info.dat";
	}

	while(inFile >> item;)
	{
		
		total++;
		if (item == 'A') {
			As++;
		}
		else if (item == 'F') {
			Fs++;
		}
		else if (item == 'a') {
			as++;
		}
		else if (item == 'b') {
			bs++;
		}
	}

	cout << "Toal A: " << As << endl;
	cout << "Toal F: " << Fs << endl;
	cout << "Toal a: " << as << endl;
	cout << "Toal b: " << bs << endl;
	cout << "Toal All characters: " << total << endl;
	

	inFile.close();
	return 0;



}