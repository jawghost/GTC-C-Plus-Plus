#include <iostream>
#include <cctype>

using namespace std;

void checkAnswers(char[], char[], int, int);


int main() {
	const int NUM_QUESTIONS = 20;
	const int MIN_CORRECT = 15;
	char answers[NUM_QUESTIONS] = { 'A', 'D', 'B', 'B', 'C','B', 'A', 'B', 'C', 'D','A', 'C', 'D', 'B', 'D','C', 'C', 'A', 'D', 'B' };

	char stu_answers[NUM_QUESTIONS];

	for (int replies = 0; replies < NUM_QUESTIONS; replies++)
	{
		cout << "Please enter your answers: "
			<< (replies + 1) << ": ";
		cin >> stu_answers[replies];

		while (stu_answers[replies] != 'A' && stu_answers[replies] != 'B' && stu_answers[replies] != 'C' && stu_answers[replies] != 'D') {
			cout << "You must enter A, B, C, or D\n";

			cout << "Please enter your answers: "
				<< (replies + 1) << ": ";
			cin >> stu_answers[replies];
		}

	}

	checkAnswers(answers, stu_answers, NUM_QUESTIONS, MIN_CORRECT);

	system("pause");
}

void checkAnswers(char answers1[], char stu_answers1[], int NUM_QUESTIONS, int MIN_CORRECT) {

	int correctAnswers = 0;

	for (int i = 0; i < NUM_QUESTIONS; i++) {
		if (answers1[i] == stu_answers1[i])
			correctAnswers++;
	}
	cout << "\nYou must have at least 15 correct to pass.";
	if (correctAnswers >= MIN_CORRECT) {
		cout << "\nYou have passed\n\n";
	}
	else {
		cout << "\nYou have failed\n\n";
	}

	cout << "The question numbers of the incorrect answeres are";
	cout << " answered questions.\n";
	for (int i = 0; i < NUM_QUESTIONS; i++) {
		if (answers1[i] != stu_answers1[i])
			cout << "Question # " << i << " is incorrect." << endl;
	}

	cout << "\nCorrect Answers = " << correctAnswers << endl;
	cout << "Incorrect Answers = " << NUM_QUESTIONS - correctAnswers << endl;
}