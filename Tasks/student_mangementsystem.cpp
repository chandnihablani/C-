#include <iostream>
#include <string>
using namespace std;

class Student {
    int id;
    string name;
    int marks[5];
    float average;
    char grade;

public:
    void inputStudent() {
        cout << "Enter Student ID: ";
        cin >> id;
        cin.ignore(); // Clear leftover newline

        cout << "Enter Name: ";
        getline(cin, name); // Correctly reads full name

        cout << "Enter marks for 5 subjects:\n";
        for(int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calculateGrade() {
        int sum = 0;
        for(int i = 0; i < 5; i++)
            sum += marks[i];
        average = sum / 5.0;

        if(average >= 90) grade = 'A';
        else if(average >= 80) grade = 'B';
        else if(average >= 70) grade = 'C';
        else if(average >= 60) grade = 'D';
        else grade = 'F';
    }

    void displayStudent() {
        cout << "\nID: " << id 
             << ", Name: " << name 
             << ", Average: " << average 
             << ", Grade: " << grade << endl;
    }
};

int main() {
    Student students[100];
    int n = 0, choice;

    do {
        cout << "\n--- Student Management Menu ---\n";
        cout << "1. Add Student\n2. Display All Students\n3. Exit\nChoice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                students[n].inputStudent();
                students[n].calculateGrade();
                n++;
                break;

            case 2:
                cout << "\n--- All Students ---\n";
                for(int i = 0; i < n; i++)
                    students[i].displayStudent();
                break;

            case 3:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 3);

    return 0;
}

