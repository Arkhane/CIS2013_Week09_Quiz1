#include <iostream>
#include <fstream>

using namespace std;



ifstream in_a;


int counter_A;
int counter_F;
int counter_a;
int counter_b;




int main()
{

	char cont = 'y';

	in_a.open("info.dat");
	if (in_a.fail()) {
		cout << "Something really aweful happened here with numbers.dat";
		exit(1);
	}

	//..............




	while (!in_a.eof())
	{
		char oneLetter;


		if (oneLetter = 'A')
		{
			counter_A++;
		}

		if (oneLetter = 'F')
		{
			counter_F++;
		}

		if (oneLetter = 'a')
		{

			counter_a++;

		}

		if (oneLetter = 'b')
		{
			counter_b++;
		}
	}


} // end while


  //.............

cout << "Counts the number of A's" << counter_A << endl;
cout << "Counts the number of F's" << counter_F << endl;
cout << "Counts the number of a's" << counter_a << endl;
cout << "Counts the number of b's" << counter_b << endl;

in_a.close();

return 0;
}
