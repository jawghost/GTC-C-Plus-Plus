#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString(double);
int toInt(string);
double toDouble(string);
void findHighest(double ne, double se, double nw, double sw);
double getSales(string deptName);

int main()
{
	double neSales;
	double seSales;
	double nwSales;
	double swSales;

	neSales = getSales("Northeast");
	seSales = getSales("Southeast");
	nwSales = getSales("Northwest");
	swSales = getSales("Southwast");
	findHighest(neSales, seSales, nwSales, swSales);

	system("pause");
}

void findHighest(double ne, double se, double nw, double sw)
{
	int holdHighest;
	string holdDepartment;

	holdHighest = 0;
	if (ne > holdHighest)
	{
		holdHighest = ne;
		holdDepartment = "Northeast";
	}
	if (se > holdHighest)
	{
		holdHighest = se;
		holdDepartment = "Southeast";
	}
	if (nw > holdHighest)
	{
		holdHighest = nw;
		holdDepartment = "Northwest";
	}
	if (sw > holdHighest)
	{
		holdHighest = sw;
		holdDepartment = "Southwest";
	}
	cout << "The highest income division is: " << holdDepartment << endl;
	cout << "Reported income is: " << holdHighest << endl;
}

double getSales(string deptName)
{
	double salesAmt;

	cout << "Enter sales for department " << deptName << endl;
	cin >> salesAmt;
	while (salesAmt < 0)
	{
		cout << "Retry entering sales for department and make sure to enter a positive number for department: " << deptName << endl;
		cin >> salesAmt;
	}

	return salesAmt;
}

// The following implements type conversion functions.
string toString(double value) { //int also
	stringstream temp;
	temp << value;
	return temp.str();
}

int toInt(string text) {
	return atoi(text.c_str());
}

double toDouble(string text) {
	return atof(text.c_str());
}
