#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

class RainFall
{
public:
	void mainLine(void);

private:
	//Data Members
	double fMonthRainfall;
    int iNumMonths;
    double fTotalRainfall;
	int iNumYrs;
	int count;

	//Private Methods (Member Modules)
    int count;
	void input();
	void output();
	void process();
};


int main()
{
    RainFall rf1;
	rf1.mainLine();

	system("pause");

}

void RainFall::mainLine(void)
{
	input();

	for(int cnt = 1; cnt <= iNumYrs; cnt++)
		process();

    output();
}

void RainFall::input()
{
	fTotalRainfall = 0;
    iNumMonths = 0;

	cout << "Enter the number of years." << endl;
	cin >> iNumYrs;
}

void RainFall::output()
{
	float fAvgRainfall;
	cout << "The total number of months processes: " << iNumMonths << endl;
	cout << "The total inches of rainfall: " << fTotalRainfall << endl;
	
	fAvgRainfall = fTotalRainfall / iNumMonths;

	cout << "The average rainfall calculated: " << fAvgRainfall << endl;
}

void RainFall::process()
{
    for (count = 1 ; count <= 12 ; count += 1)
    {
        // Start Inner loop here
        cout << "Enter one month's worth of rainfall." << endl;
        cin >> fMonthRainfall;
        
        // Calculate the number of months
        iNumMonths = iNumMonths + 1;
        
        // Accumulate the total rainfall
        fTotalRainfall = fTotalRainfall + fMonthRainfall;
    }
}
