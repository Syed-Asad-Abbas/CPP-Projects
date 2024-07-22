//EMPLOYEE MANAGEMENT SYSTEM
#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
#include<conio.h>
#include<sstream>
using namespace std;
	// Node class for storing employee information in a linked list
class Node
{
public:
    string Emp_Id, Name, Post, Department;
    float Salary;
    Node* next;
};
	// Employee class with various functions for managing employee records
class Employee
{
private:
    Node* head;// Head of the linked list
public:
	 // Constructor to initialize the head pointer
    Employee();
    // Function to display an introduction message
    void Introduction();
    // Function to handle the login functionality
    void Login();
    // Function to perform insertion sort based on employee salary
    void InsertionSort();
    // Function to display the control panel with various options
    void Control_Panel();
     // Function to insert a new employee record
    void Insert();
    // Function to search for an employee record by ID
    void Search_Id();
    // Function to edit an existing employee record
    void Edit();
    // Function to delete an employee record
    void Del();
    // Function to display an employee record
    void Display();
    // Function to genrate a salary slip of an employee record
    void Salary_Slip();
    // Function to search for an employee record by Department name
    void Search_Dept();
    // Function to save employee records to a file
    void SaveToFile();
     // Function to load employee records from a file
    void LoadFromFile();
    
};
Employee::Employee()
{
    head = NULL;
}
void Employee::Introduction()
{
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t==============================";
    cout << "\n\t\t\t\t\t==============================";
    cout << "\n\n\t\t\t\t\t  EMPLOYEE MANAGEMENT SYSTEM";
    cout << "\n\n\n\t\t\t\t\t PRESENTED BY ASAD ABBAS  ";
    cout << "\n\n\t\t\t\t\t==============================";
    cout << "\n\t\t\t\t\t==============================";
    cin.get(); // Use cin.get() instead of getch()
}

void Employee::Login()
{
    string user, pass;
    while (true)
    {
        system("cls");
        cout << "\n\n";
        cout << "\t\t\t===========================";
        cout << "\n\n\t\t\t\tLOGIN PANEL";
        cout << "\n\n\t\t\t===========================";
        cout << "\n\n\n ENTER USER NAME: ";
        cin >> user;
        cout << "\n\n ENTER PASSWORD: ";
        for (int i = 1; i <= 6; i++)
        {
            pass += getch(); // Use of getch()
            cout << "*";
        }
        if (user == "asad2005@gmail.com" && pass == "123456")
        {
            cout << "\n\n\n\t\t\tCONGRATULATION LOGIN SUCCESS";
            cout << "\n\n\n\t\t\t\tLOADING";
            for (int i = 1; i <= 6; i++)
            {
                Sleep(500);
                cout << ".";
            }
            Control_Panel();
        }
        else if (user != "20014156-064@bulc.edu.pk" && pass == "123456")
        {
            cout << "\n\n\n USER NAME IS WRONG....";
        }
        else if (user == "20014156-064@bulc.edu.pk" && pass != "123456")
        {
            cout << "\n\n\n PASSWORD IS WRONG....";
        }
        else
        {
            cout << "\n\n\n USER NAME & PASSWORD ARE WRONG....";
        }
        cin.get(); // Use of getch()
    }
}
void Employee::InsertionSort()
{
    if (head == NULL || head->next == NULL)
        return;

    Node* sorted = NULL;
    Node* current = head;

    while (current != NULL) {
        Node* next = current->next;

        if (sorted == NULL || sorted->Salary >= current->Salary) {
            // Insert at the beginning
            current->next = sorted;
            sorted = current;
        } else {
            // Traverse the sorted list to find the correct position
            Node* temp = sorted;
            while (temp->next != NULL && temp->next->Salary < current->Salary) {
                temp = temp->next;
            }

            // Insert in the middle or at the end
            current->next = temp->next;
            temp->next = current;
        }

        current = next;
    }

    // Update the head to point to the sorted list
    head = sorted;
}

void Employee::Control_Panel()
{
    while (true)
    {
        system("cls");
        int x;
        cout << "\n\n\t\t\t===========================";
        cout << "\n\n\t\t\t   EMPLOYEE CONTROL PANEL";
        cout << "\n\n\t\t\t===========================";
        cout << "\n\n\n 1. INSERT RECORD";
        cout << "\n 2. SEARCH RECORD";
        cout << "\n 3. EDIT RECORD";
        cout << "\n 4. DELETE RECORD";
        cout << "\n 5. DISPLAY RECORD";
        cout << "\n 6. SALARY SLIP";
        cout << "\n 7. SEARCH DEPARTMENT";
        cout << "\n 8. SORT BY SALARY"; 
    	cout << "\n 9. EXIT";
    	cout << "\n\n Your Choice: ";
    	cin >> x;

        switch (x)
        {
        case 1:
            Insert();
            break;
        case 2:
            Search_Id();
            break;
        case 3:
            Edit();
            break;
        case 4:
            Del();
            break;
        case 5:
            Display();
            break;
        case 6:
            Salary_Slip();
            break;
        case 7:
            Search_Dept();
            break;
        case 8:
            InsertionSort();
            break;
        
        case 9:
            exit(0);
        default:
            cout << "\n\n ***INVALID CHOICE...PLEASE TRY AGAIN***";
        }
        cin.get(); // Use of getch()
    }
}

void Employee::Insert()
{
    while (true)
    {
        system("cls");
        Node* New_Node = new Node;
        cout << "\n\n\t\t\t===========================";
        cout << "\n\n\t\t\t  INSERT EMPLOYEE RECORD";
        cout << "\n\n\t\t\t===========================";
        cout << "\n\n EMPLOYEE ID: ";
        cin >> New_Node->Emp_Id;
        cout << "\n\n EMPLOYEE NAME: ";
        cin >> New_Node->Name;
        cout << "\n\n EMPLOYEE POST: ";
        cin >> New_Node->Post;
        cout << "\n\n EMPLOYEE DEPARTMENT: ";
        cin >> New_Node->Department;
        cout << "\n\n EMPLOYEE SALARY: ";
        cin >> New_Node->Salary;
        New_Node->next = nullptr;
        if (head == nullptr)
        {
            head = New_Node;
        }
        else
        {
            Node* ptr = head;
            while (ptr != nullptr)
            {
                if (New_Node->Emp_Id == ptr->Emp_Id)
                {
                    cout << "\n\n ***DUPLICATE EMPLOYEE RECORD***";
                    delete New_Node;
                    break; // Exit the loop after deleting duplicate
                }
                ptr = ptr->next;
            }
            if (ptr == nullptr)
            {
                ptr = head;
                while (ptr->next != nullptr)
                {
                    ptr = ptr->next;
                }
                ptr->next = New_Node;
                cout << "\n\n ***EMPLOYEE RECORD INSERTED***";
            }
        }
        cout << "\n\n Do you want to insert another record? (Y/N): ";
        char choice;
        cin >> choice;
        if (toupper(choice) != 'Y')
            break;
    }
    SaveToFile();
}
void Employee::SaveToFile()
{
    ofstream file("Emp.csv",ios::app);
    if (file.is_open())
    {
        Node* ptr = head;
        while (ptr != nullptr)
        {
            file << ptr->Emp_Id << "," << ptr->Name << "," << ptr->Post << ","
                 << ptr->Department << "," << ptr->Salary << "\n";
            ptr = ptr->next;
        }
        file.close();
        cout << "\n\n Data has been saved to Emp.csv successfully.";
    }
    else
    {
        cout << "\n\n Unable to open the file for saving.";
    }
}

void Employee::LoadFromFile()
{
    ifstream file("Emp.csv",ios::app);
    if (file.is_open())
    {
        // Clear the existing linked list
        while (head != nullptr)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }

        // Read data from the file and create new nodes
        string line;
        while (getline(file, line))
        {
            Node* New_Node = new Node;
            stringstream ss(line);
            getline(ss, New_Node->Emp_Id, ',');
            getline(ss, New_Node->Name, ',');
            getline(ss, New_Node->Post, ',');
            getline(ss, New_Node->Department, ',');
            ss >> New_Node->Salary;

            New_Node->next = nullptr;

            // Add the new node to the linked list
            if (head == nullptr)
            {
                head = New_Node;
            }
            else
            {
                Node* ptr = head;
                while (ptr->next != nullptr)
                {
                    ptr = ptr->next;
                }
                ptr->next = New_Node;
            }
        }

        file.close();
        cout << "\n\n Data has been loaded from  successfully.";
    }
    else
    {
        cout << "\n\n Unable to open the file for loading.";
    }
}
void Employee::Search_Id()
{
    while (true)
    {
        system("cls");
        int found = 0;
        string EmpId;
        cout << "\n\n\t\t\t==========================";
        cout << "\n\n\t\t\t  SEARCH EMPLOYEE RECORD";
        cout << "\n\n\t\t\t==========================";
        if (head == nullptr)
        {
            cout << "\n\n ***LINKED LIST IS EMPTY***";
        }
        else
        {
            cout << "\n\n EMPLOYEE ID FOR SEARCH: ";
            cin >> EmpId;
            Node* ptr = head;
            while (ptr != nullptr)
            {
                if (EmpId == ptr->Emp_Id)
                {
                    system("cls");
                    cout << "\n\n\t\t\t==========================";
                    cout << "\n\n\t\t\t  SEARCH EMPLOYEE RECORD";
                    cout << "\n\n\t\t\t==========================";
                    cout << "\n\n EMPLOYEE ID: " << ptr->Emp_Id;
                    cout << "\n\n EMPLOYEE NAME: " << ptr->Name;
                    cout << "\n\n EMPLOYEE POST: " << ptr->Post;
                    cout << "\n\n EMPLOYEE DEPARTMENT: " << ptr->Department;
                    cout << "\n\n EMPLOYEE SALARY: " << ptr->Salary;
                    found++;
                }
                ptr = ptr->next;
            }
            if (found == 0)
                cout << "\n\n ***EMPLOYEE ID NOT FOUND***";
        }
        cout << "\n\n Do you want to search for another record? (Y/N): ";
        char choice;
        cin >> choice;
        if (toupper(choice) != 'Y')
            break;
    }
}

void Employee::Edit()
{
    while (true)
    {
        system("cls");
        int found = 0;
        string EmpId;
        cout << "\n\n\t\t\t==========================";
        cout << "\n\n\t\t\t  MODIFY EMPLOYEE RECORD";
        cout << "\n\n\t\t\t==========================";
        if (head == nullptr)
        {
            cout << "\n\n ***LINKED LIST IS EMPTY***";
        }
        else
        {
            cout << "\n\n EMPLOYEE ID FOR MODIFY: ";
            cin >> EmpId;
            Node* ptr = head;
            while (ptr != nullptr)
            {
                if (EmpId == ptr->Emp_Id)
                {
                    cout << "\n\n EMPLOYEE NAME: ";
                    cin >> ptr->Name;
                    cout << "\n\n EMPLOYEE POST: ";
                    cin >> ptr->Post;
                    cout << "\n\n EMPLOYEE DEPARTMENT: ";
                    cin >> ptr->Department;
                    cout << "\n\n EMPLOYEE SALARY: ";
                    cin >> ptr->Salary;
                    cout << "\n\n ***EMPLOYEE RECORD MODIFIED***";
                    found++;
                }
                ptr = ptr->next;
            }
            if (found == 0)
                cout << "\n\n ***EMPLOYEE ID NOT FOUND***";
        }
        cout << "\n\n Do you want to modify another record? (Y/N): ";
        char choice;
        cin >> choice;
        if (toupper(choice) != 'Y')
            break;
    }
}

void Employee::Del()
{
    while (true)
    {
        system("cls");
        int found = 0;
        string EmpId;
        cout << "\n\n\t\t\t==========================";
        cout << "\n\n\t\t\t  DELETE EMPLOYEE RECORD";
        cout << "\n\n\t\t\t==========================";
        if (head == nullptr)
        {
            cout << "\n\n ***LINKED LIST IS EMPTY***";
        }
        else
        {
            cout << "\n\n EMPLOYEE ID FOR DELETION: ";
            cin >> EmpId;
            if (EmpId == head->Emp_Id)
            {
                Node* ptr = head;
                head = head->next;
                delete ptr;
                cout << "\n\n ***EMPLOYEE RECORD DELETED***";
            }
            else
            {
                Node* pre = head;
                Node* ptr = head;
                while (ptr != nullptr)
                {
                    if (EmpId == ptr->Emp_Id)
                    {
                        pre->next = ptr->next;
                        cout << "\n\n ***EMPLOYEE RECORD DELETED***";
                        found++;
                        delete ptr;
                        break; // Exit the loop after deleting
                    }
                    pre = ptr;
                    ptr = ptr->next;
                }
                if (found == 0)
                    cout << "\n\n*** EMPLOYEE ID NOT FOUND***";
            }
        }
        cout << "\n\n Do you want to delete another record? (Y/N): ";
        char choice;
        cin >> choice;
        if (toupper(choice) != 'Y')
            break;
    }
}

void Employee::Display()
{
    system("cls");
    cout << "\n\n\t\t\t===========================";
    cout << "\n\n\t\t\t  DISPLAY EMPLOYEE RECORD";
    cout << "\n\n\t\t\t===========================";
    if (head == nullptr)
    {
        cout << "\n\n ***LINKED LIST IS EMPTY***";
    }
    else
    {
        Node* ptr = head;
        while (ptr != nullptr)
        {
            cout << "\n\n EMPLOYEE ID: " << ptr->Emp_Id;
            cout << "\n\n EMPLOYEE NAME: " << ptr->Name;
            cout << "\n\n EMPLOYEE POST: " << ptr->Post;
            cout << "\n\n EMPLOYEE DEPARTMENT: " << ptr->Department;
            cout << "\n\n EMPLOYEE SALARY: " << ptr->Salary;
            cout << "\n\n===========================";
            cout << "\n===========================";
            ptr = ptr->next;
        }
    }
    cout << "\n\n Press Enter to continue...";
    cin.get();
}

void Employee::Salary_Slip()
{
    while (true)
    {
        system("cls");
        int found = 0;
        string EmpId;
        cout << "\n\n\t\t\t=========================";
        cout << "\n\n\t\t\t  SALARY SLIP GENERATOR";
        cout << "\n\n\t\t\t=========================";
        if (head == nullptr)
        {
            cout << "\n\n ***LINKED LIST IS EMPTY***";
        }
        else
        {
            cout << "\n\nEMPLOYEE ID FOR SLIP: ";
            cin >> EmpId;
            Node* ptr = head;
            while (ptr != nullptr)
            {
                if (EmpId == ptr->Emp_Id)
                {
                    system("cls");
                    cout << "\n\t\t\t********************************";
                    cout << "\n\t\t\t*                              *";
                    cout << "\n\t\t\t*      EMPLOYEE SALARY SLIP    *";
                    cout << "\n\t\t\t*                              *";
                    cout << "\n\t\t\t********************************";
                    cout << "\n\n\t\t\t EMPLOYEE ID:         " << ptr->Emp_Id;
                    cout << "\n\n\t\t\t NAME:                " << ptr->Name;
                    cout << "\n\n\t\t\t POST:                " << ptr->Post;
                    cout << "\n\n\t\t\t DEPARTMENT:          " << ptr->Department;
                    cout << "\n\n\t\t\t SALARY:              " << ptr->Salary;
                    cout << "\n\n\t\t\t********************************";
                    cout << "\n\t\t\t********************************";
                    found++;
                }
                ptr = ptr->next;
            }
            if (found == 0)
                cout << "\n\n ***EMPLOYEE ID NOT FOUND***";
        }
        cout << "\n\n Do you want to generate another salary slip? (Y/N): ";
        char choice;
        cin >> choice;
        if (toupper(choice) != 'Y')
            break;
    }
}

void Employee::Search_Dept()
{
    while (true)
    {
        system("cls");
        int found = 0;
        string dept;
        cout << "\n\n\t\t\t============================";
        cout << "\n\n\t\t\t  SEARCH DEPARTMENT RECORD";
        cout << "\n\n\t\t\t============================";
        if (head == nullptr)
        {
            cout << "\n\n ***LINKED LIST IS EMPTY***";
        }
        else
        {
            cout << "\n\n DEPARTMENT NAME FOR SEARCH: ";
            cin >> dept;
            Node* ptr = head;
            while (ptr != nullptr)
            {
                if (dept == ptr->Department)
                {
                    cout << "\n\n EMPLOYEE ID: " << ptr->Emp_Id;
                    cout << "\n\n EMPLOYEE NAME: " << ptr->Name;
                    cout << "\n\n EMPLOYEE POST: " << ptr->Post;
                    cout << "\n\n EMPLOYEE DEPARTMENT: " << ptr->Department;
                    cout << "\n\n EMPLOYEE SALARY: " << ptr->Salary;
                    cout << "\n\n===========================";
                    cout << "\n===========================";
                    found++;
                }
                ptr = ptr->next;
            }
            if (found == 0)
                cout << "\n\n ***DEPARTMENT NAME NOT FOUND***";
            else
                cout << "\n\n TOTAL EMPLOYEE: " << found;
        }
        cout << "\n\n Do you want to search for another department? (Y/N): ";
        char choice;
        cin >> choice;
        if (toupper(choice) != 'Y')
            break;
    }
}
void first(){

ofstream file("Emp.csv",ios::app);
    if (file.is_open())
    {          file <<"Employee ID"<< "," <<"NAME"<< "," <<"POST"<< ","
                 <<"Department"<< "," <<"Salary"<< "\n";
        
        file.close();
        
    }
    else
    {
        cout << "\n\n Unable to open the file for saving.";
    }
}

int main()
{
	first();
    Employee obj;
    obj.Introduction();
    obj.Login();

    const string filename = "employee_data.csv";

    // Load data from the file if it exists
    obj.LoadFromFile();

    while (true)
    {
        obj.Control_Panel();

        // Save data to the file after each operation
        obj.SaveToFile();
    }

    return 0;
}
