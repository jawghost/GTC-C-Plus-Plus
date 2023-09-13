#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

void output();
void Process();

int main()
{
    int numberofRooms;
    int priceofpaintperGallon;
    int sqftWall;
    
    cin >> numberofRooms;
    cin >> priceofpaintperGallon;
    cin >> sqftWall;
}

void output()
{
    cout << totalCost << endl;
}

void Process()
{
    gallonsofPaint = (double) sqftWall / 110;
    totallabor = 8 * gallonsofPaint;
    costofPaint = priceofpaintperGallon * gallonofPaint;
    laborCharges = totallabor * 25.00;
    totalCost = costofPaint + laborCharges;
}

// The following implements type conversion functions.

string toString (double value)  //int also
{
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text)
{
    return atoi(text.c_str());
}

double toDouble (string text)
{
    return atof(text.c_str());
}
