#include <iostream>
using namespace std;

int main()
{
	// Current average tempratures
	int nyTemp = 85;
	int denverTemp = 88;
	int pheonixTemp = 106;
	// Calculate new average temperatures with a 15 % increase
	float nyNewTemp = nyTemp * 1.15;
	float denverNewTemp = denverTemp * 1.15;
	float phoenixNewTemp = pheonixTemp * 1.15;

	// Print the original average temperatures
	cout << "NY average is " << nyTemp << endl;
	cout << "Denver average is " << denverTemp << endl;
	cout << "Pheonix average is " << pheonixTemp << endl;

	// Print the new average temperatures 
	cout << "If the averages temp rose by 15%" << endl;
	cout << "NY average would be " << nyNewTemp << endl;
	cout << "Denver average would be " << denverNewTemp << endl;
	cout << "Pheonix average would be " << phoenixNewTemp << endl;
	return 0;

}