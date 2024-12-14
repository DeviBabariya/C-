#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    // Input score from user
    cout << "Enter your score (out of 100): ";
    cin >> score;

    // Calculate grade using ternary operator
    grade = (score >= 90) ? 'A' : (score >= 70) ? 'B' : (score >= 50) ? 'C' : (score >= 33) ? 'D' : 'F';

    // Print grade
    cout << "Your grade is " << grade <<".";

    //  Comments based on grade using switch-case statement
    switch (grade) {
        case 'A':
            cout << "Excellent work!" << endl;
            break;
        case 'B':
            cout << "Well done!" << endl;
            break;
        case 'C':
            cout << "Good job!" << endl;
            break;
        case 'D':
            cout << "You passed, but you could do better." << endl;
            break;
       	default:
            cout << "Sorry, you failed." << endl;
            break;
       
    }

    // Check eligibility for next level based on grade using if-else statement
    if (grade >= 'A' && grade <= 'D') {
        cout << "Congratulations! You are eligible for the next level." << endl;
    } else {
        cout << "Please try again next time." << endl;
    }

    return 0;
}

