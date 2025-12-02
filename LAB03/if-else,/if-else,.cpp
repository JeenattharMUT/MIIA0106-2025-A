// if-else,.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    string id, name;
    int score;
    char grade;

    
    cout << "Enter Student ID: ";
    getline(cin, id);

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Total Score (0-100): ";
    cin >> score;

    if (cin.fail() || score < 0 || score > 100) {
        cout << "กรุณาใส่คะแนน\n";
        return 0;
    }

    if (score >= 80 && score <= 100) grade = 'A';
    else if (score >= 70) grade = 'B';
    else if (score >= 60) grade = 'C';
    else if (score >= 50) grade = 'D';
    else grade = 'F';

    
    cout << "\n----- RESULT -----\n";
    cout << "Student ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Total Score: " << score << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

