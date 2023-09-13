#include <iostream>
using namespace std;

int main()
{
	int	Roll;
	string studentName,
			Front,
			End;

	cout << "This program reports which student is first and last";
	cin >> Roll;

	while (Roll < 1 || Roll > 25)
	{
		cout << "Error! Must have a positive number of students less than 26.";
		cin >> Roll;

	}
	
	cout << "Enter the first name of the student: ";
	cin >> studentName;

	Front = End = studentName;

	for (int Count = 1; Count < Roll; Count++)
	{
		cout << "Enter the first name of the next student: ";
		cin >> studentName;

		if (studentName > End)
				End = studentName;
		if (studentName < Front)
				Front = studentName;
	}

	cout << endl << Front << " is at the front of the line and\n"
		<< endl

}