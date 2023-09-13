#include <iostream>
using namespace std;

int main()
{
	const double rate = 0.04,
							current_charge = 2500.0;
	int	Year;
	double YrRate;

	cout << "\nCountry club projected rates\n"
		 << "for the next six years\n"
		 << "Year		Rate\n";
	
		 
	for(Year = 1; Year <=6; Year++)
	{
			YrRate = current_charge * (1 + Year * rate);
			cout << "" << Year << "		" << YrRate << endl;
	}
	
	cout << endl;
	system("pause");
}