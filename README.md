# Student Management System

## Description

This is a simple C++ console application designed to manage a student database. It allows users to add new student records, display all student records, and search for students by their ID. The system uses a fixed-size array to store student information, making it suitable for learning purposes and small-scale applications.

## Features

- **Add Student**: Enter details for a new student including ID, name, and age.
- **Display All Students**: View a list of all students currently in the database.
- **Search for Student by ID**: Find and display student details based on their ID.
- **Exit**: Quit the application.

## Components

- **Data Structure**: Utilizes a `Student` struct to hold individual student records.
- **Functions**:
  - `addStudent()`: Adds a new student to the database.
  - `displayStudents()`: Lists all students.
  - `searchStudent()`: Searches for a student by ID.
- **Main Menu**: Provides a text-based interface for user interaction.

## Usage

1. **Compile the Program**:
   Use a C++ compiler to compile the source code.
   ```bash
   g++ -o student_management student_management.cpp
