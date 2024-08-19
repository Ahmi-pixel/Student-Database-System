#include <iostream>
using namespace std;

const int MAX_STUDENTS = 100;

struct Student {
    int id;
    string name;
    int age;
};

void addStudent(Student students[], int& count) {
    if (count < MAX_STUDENTS) {
        cout << "Enter student ID: ";
        cin >> students[count].id;
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, students[count].name);
        cout << "Enter student age: ";
        cin >> students[count].age;
        count++;
        cout << "Student added successfully!" << endl;
    } else {
        cout << "Database is full." << endl;
    }
}

void displayStudents(const Student students[], int count) {
    if (count == 0) {
        cout << "Database is empty." << endl;
    } else {
        cout << "ID\t\tName\t\tAge" << endl;
        for (int i = 0; i < count; ++i) {
            cout << students[i].id << "\t\t" << students[i].name << "\t\t" << students[i].age << endl;
        }
    }
}

void searchStudent(const Student students[], int count, int searchID) {
    for (int i = 0; i < count; ++i) {
        if (students[i].id == searchID) {
            cout << "Student found:\nID: " << students[i].id << "\nName: " << students[i].name << "\nAge: " << students[i].age << endl;
            return;
        }
    }
    cout << "Student with ID " << searchID << " not found." << endl;
}

int main() {
    Student students[MAX_STUDENTS];
    int count = 0;
    int choice;
    
    do {
        cout << "\nMenu\n1. Add a student\n2. Display all students\n3. Search for a student by ID\n4. Exit\nEnter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1: 
                addStudent(students, count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                int searchID;
                cout << "Enter student ID to search: ";
                cin >> searchID;
                searchStudent(students, count, searchID);
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    return 0;
}

