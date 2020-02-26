#include<iostream>
#include<time.h>

using namespace std;


/** 
 *The main method for the program. Takes care of all of the logic and printing. Calls nothing.
 **/
int main()
{
	srand(time(NULL));

	int poopNugget = 0;

	cout << "WELCOME TO MEAL QUESTION THINGY SIMULATOR 2016!" << endl << endl;

	cout << "What is the color of night?" << endl << "1 - Sanguine, my brother" << endl << "2 - Who knows?" << endl << endl;
	cin >> poopNugget;
	cout << endl;

	cout << "What is your favorite color?" << endl << "1 - Green" << endl << "2 - Any other lame color" << endl << endl;
	cin >> poopNugget;
	cout << endl;

	cout << "What is your favorite breakfast food?" << endl << "1 - Pancakes" << endl << "2 - Waffles" << endl << "3 - Bagels" << endl << "4 - Crap/Muffins" << endl << "5 - Cereal" << endl << "6 - Bacon" << endl << "7 - Sausage" << endl << endl;
	cin >> poopNugget;
	cout << endl;

	int poop = rand() % 3;

	if (poop == 0)
	{
		cout << "You are a cool person!" << endl << endl;
	}
	else if (poop == 1)
	{
		cout << "I'm pretty sure you're a robot!" << endl << endl;
	}
	else
	{
		cout << "You suck, pretty much!" << endl << endl;
	}

	system("pause");
	return 0;
}