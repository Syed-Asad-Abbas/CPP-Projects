
# Employee Management System

## Introduction

The Employee Management System is a C++ console application designed to efficiently manage employee records. It supports operations such as inserting, searching, editing, and deleting records, with data stored in a linked list and persisted in a CSV file ("Emp.csv"). The system also features salary slip generation, department-based searches, and sorting by salary.

## Features

- **User Authentication:** Secure system access.
- **Employee Record Operations:**
  - **Inserting Records:** Add new employee entries.
  - **Searching Records:** Locate employee information.
  - **Editing Records:** Modify existing data.
  - **Deleting Records:** Remove records.
- **Display Function:** View employee details.
- **Salary Slip Generation:** Generate salary slips.
- **Department-Based Search:** Filter employees by department.
- **Sorting by Salary:** Arrange records in ascending salary order.
- **File Handling (.CSV):** Manage data persistence with CSV files.

## Data Structure

The system uses a linked list to manage employee records:
- **Node Class:** Represents each record with details such as employee ID, name, post, department, and salary, along with a pointer to the next node.
- **Employee Class:** Handles operations on the linked list including insertion, deletion, searching, and display.

## Sorting Algorithm

**Insertion Sort** is employed to sort employee records by salary. This algorithm incrementally builds the sorted list by inserting each record into its correct position, ensuring an ordered list in ascending salary sequence.

## File Handling

Data persistence is managed through file handling. Employee records are saved to and retrieved from a CSV file named "Emp.csv". On initial execution or file creation, the system initializes the file structure with a header line to maintain data integrity across sessions.

## Project Demonstration

![Full project screenshot](https://github.com/Syed-Asad-Abbas/CPP-Projects/blob/main/DSA/Employee-Management-System/sc1.jpg?raw=true)
![Full project screenshot](https://github.com/Syed-Asad-Abbas/CPP-Projects/blob/main/DSA/Employee-Management-System/sc2.jpg?raw=true)
![Full project screenshot](https://github.com/Syed-Asad-Abbas/CPP-Projects/blob/main/DSA/Employee-Management-System/sc3.jpg?raw=true)
![Full project screenshot](https://github.com/Syed-Asad-Abbas/CPP-Projects/blob/main/DSA/Employee-Management-System/sc4.jpg?raw=true)
![Full project screenshot](https://github.com/Syed-Asad-Abbas/CPP-Projects/blob/main/DSA/Employee-Management-System/sc5.jpg?raw=true)
![Full project screenshot](https://github.com/Syed-Asad-Abbas/CPP-Projects/blob/main/DSA/Employee-Management-System/sc6.jpg?raw=true)
![Full project screenshot](https://github.com/Syed-Asad-Abbas/CPP-Projects/blob/main/DSA/Employee-Management-System/sc7.jpg?raw=true)
![Full project screenshot](https://github.com/Syed-Asad-Abbas/CPP-Projects/blob/main/DSA/Employee-Management-System/sc8.jpg?raw=true)
