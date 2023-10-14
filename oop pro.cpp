
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <windows.h>
#include "bus.h"
////////////////////////////
//functions created in program name
void bus();
void mainMenu();
void bus();
void opening();
void quit()
{
system("cls");
cout << endl << endl << endl;
cout << "              ***************************************************" << endl;
cout << "              *                                                 *" << endl;
cout << "              *                                                 *" << endl;
cout << "              *   Thank you for stopping by. Have a good day.   *" << endl;
cout << "              *                                                 *" << endl;
cout << "              *                                                 *" << endl;
cout << "              ***************************************************" << endl << endl;
}
///////////////////////////////////
using namespace std;
const string tikect = "Ticket.txt";
void mainMenu();
//class of mangement starts from here.
class Management
{
public:
    Management()
    {
        mainMenu();

    }
};
//class of details starts from here.
class Details{
public:
   static string name, gender, cId,add;
    int age;
    string arr;


    void information()
    {
        cout << "\nEnter the CNIC ID : ";
        cin >> cId;
        cout << "\nEnter the name: ";
        cin >> name;
        cout << "\nEnter the age: ";
        cin >> age;
        cout << "\nEnter the Email: ";
        cin >> add;
        cout << "\nEnter the Gender: ";
        cin >> gender;
        cout << "Your details are saved with us\n"<< endl;
        Sleep(1);
            system("cls");


    }

};
string Details::name;
string Details::cId;
string Details::gender;
////class of Reistration starts from here.
class Registration
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void AvailableBuses()
    {
        string availableBusesN[] = {"Lahore", "Karachi", "Islamabad", "Peshawar", "Multan", "Faisalabad"};
        for (int i = 0; i < 6; i++)
        {
            cout << (i + 1) << " bus Going to " << availableBusesN[i] << endl;
        }
        cout << "\nWelcome to Asad Travels!" << endl;
        cout << "Press the number of the city you want to book a ticket for: ";
        cin >> choice;
         system("cls");
        switch (choice)
        {
        case 1:
        {
            cout << "______________________ASAD Travels______________________\n"
                 << endl;
            cout << "Your comfort is our goal. Enjoy the journey!" << endl;
            cout << "Followings are the available buses for Lahore" << endl;
            cout << "  No.\tBus no.\t\tDeparture\tArrival\t\tTiming\t\tFare\t\tDate" << endl
                 << endl;
            cout << "  1.\tLHC-210\t\tKarachi\t\tLahore\t\t21:00 \t\t5700/- PKR\t22-06-2023" << endl;
            cout << "  2.\tLHC-220\t\tMultan\t\tLahore\t\t18:00 \t\t3500/- PKR\t22-06-2023" << endl;
            cout << "  3.\tLHC-230\t\tIslamabad\tLahore\t\t14:00 \t\t3200/- PKR\t22-06-2023" << endl;
            cout << "  4.\tLHC-240\t\tFaisalabad\tLahore\t\t16:00 \t\t2800/- PKR\t22-06-2023" << endl;
            cout << "  5.\tLHC-250\t\tPeshawar\tLahore\t\t23:00 \t\t4000/- PKR\t22-06-2023" << endl;
            cout << "\nSelect the bus you want to book: ";
            cin >> choice1;
            system("cls");
            if (choice1 == 1)
            {
                charges = 5700;
                cout << "\nYou have successfully booked the bus LHC-210" << endl;
                cout << "You can go back to the menu and take the ticket." << endl;
                cout << "\nPress 1 to go back to the main menu: ";
                cin >> back;
                if (back == 1)
                {
                    mainMenu();
                }
            }
            else if (choice1 == 2)
            {
                charges = 3500;
                cout << "\nYou have successfully booked the bus LHC-220" << endl;
                cout << "You can go back to the menu and take the ticket." << endl;
                cout << "\nPress 1 to go back to the main menu: ";
                cin >> back;
                if (back == 1)
                {
                    mainMenu();
                }
            }
            else if (choice1 == 3)
            {
                charges = 3200;
                cout << "\nYou have successfully booked the bus LHC-230" << endl;
                cout << "You can go back to the menu and take the ticket." << endl;
                cout << "\nPress 1 to go back to the main menu: ";
                cin >> back;
                if (back == 1)
                {
                    mainMenu();
                }
            }
            else if (choice1 == 4)
            {
                charges = 2800;
                cout << "\nYou have successfully booked the bus LHC-240" << endl;
                cout << "You can go back to the menu and take the ticket." << endl;
                cout << "\nPress 1 to go back to the main menu: ";
                cin >> back;
                if (back == 1)
                {
                    mainMenu();
                }
            }
            else if (choice1 == 5)
            {
                charges = 4000;
                cout << "\nYou have successfully booked the bus LHC-250" << endl;
                cout << "You can go back to the menu and take the ticket." << endl;
                cout << "\nPress 1 to go back to the main menu: ";
                cin >> back;
                if (back == 1)
                {
                    mainMenu();
                }
            }
            else
            {
                cout << "\nInvalid choice! Please try again." << endl;
                mainMenu();
            }
        }
        break;
        case 2:
        {
            // Code for Karachi
               cout <<"______________________ASAD Travels______________________\n"<<endl;
              cout <<"Your comfort is our goal.Enjoy the journey!"<<endl;
              cout <<"Followings are the avalible buses for Karachi"<<endl;
              cout << "  No.\tBus no.\t\tDeparture\tArrival\t\tTiming\t\tFare\t\tDate" << endl << endl;
              cout << "  1.\tKHC-210\t\tlahore\t\tKarachi\t\t21:00 \t\t5700/- PKR\t22-06-2023" << endl;
              cout << "  2.\tKHC-220\t\tMultan\t\tKarachi\t\t18:00 \t\t3500/- PKR\t22-06-2023" << endl;
              cout << "  3.\tKHC-230\t\tIslamabad       Karachi\t\t14:00 \t\t3200/- PKR\t22-06-2023" << endl;
              cout << "  4.\tKHC-240\t\tFaislabad       Karachi\t\t16:00 \t\t2800/- PKR\t22-06-2023" << endl;
              cout << "  5.\tKHC-250\t\tpeshawar\tKarachi\t\t23:00 \t\t4000/- PKR\t22-06-2023" << endl;
              cout << "\n Select the bus you want to book :";
			  cin>>choice1;
              system("cls");

              if(choice1==1)
             {
                charges=5700;
                cout<<"\nYou have successfully booked the bus LHC-210"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
             }
              else if (choice1==2)
              {
                charges=3500;
                cout<<"\nYou have successfully booked the bus KHC-220"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else if (choice1==3)
              {
                charges=3200;
                cout<<"\nYou have successfully booked the bus KHC-230"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else if (choice1==4)
              {
                charges=2800;
                cout<<"\nYou have successfully booked the bus KHC-240"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else if (choice1==5)
              {
                charges=4000;
                cout<<"\nYou have successfully booked the bus KHC-250"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else
              {
                cout<<"Invalid input, going to previous menu"<<endl;
                mainMenu();
              }
              cout<<"press any key to go back to main menu"<<endl;
              cin>>back;
              if(back==1)
              {mainMenu();}
              else
              {mainMenu();}
        }
        break;
        case 3:
        {
            // Code for Islamabad

                                 cout <<"______________________ASAD Travels______________________\n"<<endl;
              cout <<"Your comfort is our goal.Enjoy the journey!"<<endl;
              cout <<"Followings are the avalible buses for Islamabad"<<endl;
              cout << "  No.\tBus no.\t\tDeparture\tArrival\t\tTiming\t\tFare\t\tDate" << endl << endl;
              cout << "  1.\tKHC-210\t\tlahore\t\tIslamabad\t21:00 \t\t5700/- PKR\t22-06-2023" << endl;
              cout << "  2.\tKHC-220\t\tMultan\t\tIslamabad\t18:00 \t\t3500/- PKR\t22-06-2023" << endl;
              cout << "  3.\tKHC-230\t\tKarachi\t\tIslamabad\t14:00 \t\t3200/- PKR\t22-06-2023" << endl;
              cout << "  4.\tKHC-240\t\tFaislabad\tIslamabad\t16:00 \t\t2800/- PKR\t22-06-2023" << endl;
              cout << "  5.\tKHC-250\t\tpeshawar\tIslamabad\t23:00 \t\t4000/- PKR\t22-06-2023" << endl;
              cout << "\n Select the bus you want to book :";
			  cin>>choice1;
              system("cls");

              if(choice1==1)
             {
                charges=5700;
                cout<<"\nYou have successfully booked the bus LHC-210"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
             }
              else if (choice1==2)
              {
                charges=3500;
                cout<<"\nYou have successfully booked the bus KHC-220"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else if (choice1==3)
              {
                charges=3200;
                cout<<"\nYou have successfully booked the bus KHC-230"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else if (choice1==4)
              {
                charges=2800;
                cout<<"\nYou have successfully booked the bus KHC-240"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else if (choice1==5)
              {
                charges=4000;
                cout<<"\nYou have successfully booked the bus KHC-250"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else
              {
                cout<<"Invalid input, going to previous menu"<<endl;
                mainMenu();
              }
              cout<<"press any key to go back to main menu"<<endl;
              cin>>back;
              if(back==1)
              {mainMenu();}
              else
              {mainMenu();}
        }
        break;
        case 4:
        {
            // Code for Peshawar
                                 cout <<"______________________ASAD Travels______________________\n"<<endl;
              cout <<"Your comfort is our goal.Enjoy the journey!"<<endl;
              cout <<"Followings are the avalible buses for Peshawar"<<endl;
              cout << "  No.\tBus no.\t\tDeparture\tArrival\t\tTiming\t\tFare\t\tDate" << endl << endl;
              cout << "  1.\tPSH-210\t\tlahore\t\tPeshawar\t21:00 \t\t5700/- PKR\t22-06-2023" << endl;
              cout << "  2.\tPSH-220\t\tMultan\t\tPeshawar\t18:00 \t\t3500/- PKR\t22-06-2023" << endl;
              cout << "  3.\tPSH-230\t\tKarachi\t\tPeshawar\t14:00 \t\t3200/- PKR\t22-06-2023" << endl;
              cout << "  4.\tPSH-240\t\tFaislabad\tPeshawar\t16:00 \t\t2800/- PKR\t22-06-2023" << endl;
              cout << "  5.\tPSH-250\t\tIslamabad\tPeshawar\t23:00 \t\t4000/- PKR\t22-06-2023" << endl;
              cout << "\n Select the bus you want to book :";
			  cin>>choice1;
			  system("cls");

              if(choice1==1)
             {
                charges=5700;
                cout<<"\nYou have successfully booked the bus PSH-210"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
             }
              else if (choice1==2)
              {
                charges=3500;
                cout<<"\nYou have successfully booked the bus PSH-220"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else if (choice1==3)
              {
                charges=3200;
                cout<<"\nYou have successfully booked the bus PSH-230"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else if (choice1==4)
              {
                charges=2800;
                cout<<"\nYou have successfully booked the bus PSH-240"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else if (choice1==5)
              {
                charges=4000;
                cout<<"\nYou have successfully booked the bus PSH-250"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else
              {
                cout<<"Invalid input, going to previous menu"<<endl;
                mainMenu();
              }
              cout<<"press any key to go back to main menu"<<endl;
              cin>>back;
              if(back==1)
              {mainMenu();}
              else
              {mainMenu();}
        }
        break;
        case 5:
        {
            // Code for Multan
                cout <<"______________________ASAD Travels______________________\n"<<endl;
              cout <<"Your comfort is our goal.Enjoy the journey!"<<endl;
              cout <<"Followings are the avalible buses for Multan"<<endl;
              cout << "  No.\tBus no.\t\tDeparture\tArrival\t\tTiming\t\tFare\t\tDate" << endl << endl;
              cout << "  1.\tMUL-210\t\tlahore\t\tMultan\t\t21:00 \t\t5700/- PKR\t22-06-2023" << endl;
              cout << "  2.\tMUL-220\t\tPeshawar\tMultan\t\t18:00 \t\t3500/- PKR\t22-06-2023" << endl;
              cout << "  3.\tMUL-230\t\tKarachi\t\tMultan\t\t14:00 \t\t3200/- PKR\t22-06-2023" << endl;
              cout << "  4.\tMUL-240\t\tFaislabad\tMultan\t\t16:00 \t\t2800/- PKR\t22-06-2023" << endl;
              cout << "  5.\tMUL-250\t\tIslamabad\tMultan\t\t23:00 \t\t4000/- PKR\t22-06-2023" << endl;
              cout << "\n Select the bus you want to book :";
			  cin>>choice1;
			  system("cls");

              if(choice1==1)
             {
                charges=5700;
                cout<<"\nYou have successfully booked the bus MUL-210"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
             }
              else if (choice1==2)
              {
                charges=3500;
                cout<<"\nYou have successfully booked the bus MUL-220"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else if (choice1==3)
              {
                charges=3200;
                cout<<"\nYou have successfully booked the bus MUL-230"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else if (choice1==4)
              {
                charges=2800;
                cout<<"\nYou have successfully booked the bus MUL-240"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else if (choice1==5)
              {
                charges=4000;
                cout<<"\nYou have successfully booked the bus MUL-250"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else
              {
                cout<<"Invalid input, going to previous menu"<<endl;
                mainMenu();
              }
              cout<<"press any key to go back to main menu"<<endl;
              cin>>back;
              if(back==1)
              {mainMenu();}
              else
              {mainMenu();}
        }
        break;
        case 6:
        {
            // Code for Faisalabad
                                 cout <<"______________________ASAD Travels______________________\n"<<endl;
              cout <<"Your comfort is our goal.Enjoy the journey!"<<endl;
              cout <<"Followings are the avalible buses for Faislabad"<<endl;
              cout << "  No.\tBus no.\t\tDeparture\tArrival\t\tTiming\t\tFare\t\tDate" << endl << endl;
              cout << "  1.\tFSI-210\t\tlahore\t\tFaislabad\t21:00 \t\t5700/- PKR\t22-06-2023" << endl;
              cout << "  2.\tFSI-220\t\tMultan\t\tFaislabad\t18:00 \t\t3500/- PKR\t22-06-2023" << endl;
              cout << "  3.\tFSI-230\t\tKarachi\t\tFaislabad\t14:00 \t\t3200/- PKR\t22-06-2023" << endl;
              cout << "  4.\tFSI-240\t\tPeshawar\tFaislabad\t16:00 \t\t2800/- PKR\t22-06-2023" << endl;
              cout << "  5.\tFSI-250\t\tIslamabad\tFaislabad\t23:00 \t\t4000/- PKR\t22-06-2023" << endl;
              cout << "\n Select the bus you want to book :";
			  cin>>choice1;
			  system("cls");

              if(choice1==1)
             {
                charges=5700;
                cout<<"\nYou have successfully booked the bus FSI-210"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
             }
              else if (choice1==2)
              {
                charges=3500;
                cout<<"\nYou have successfully booked the bus FSI-220"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else if (choice1==3)
              {
                charges=3200;
                cout<<"\nYou have successfully booked the bus FSI-230"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else if (choice1==4)
              {
                charges=2800;
                cout<<"\nYou have successfully booked the bus FSI-240"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else if (choice1==5)
              {
                charges=4000;
                cout<<"\nYou have successfully booked the bus FSI-250"<<endl;
                cout<<"you can go back to menu and take the ticket."<<endl;
              }
              else
              {
                cout<<"Invalid input, going to previous menu"<<endl;
                mainMenu();
              }
              cout<<"press any key to go back to main menu"<<endl;
              cin>>back;
              if(back==1)
              {mainMenu();}
              else
              {mainMenu();}
        }
        break;
        default:
            cout << "\nInvalid choice! Please try again." << endl;
            mainMenu();
        }
    }
};

int Registration::choice;
float Registration::charges;
string Details::add;
//class of ticket starts from here.
class ticket :public Registration ,public  Details
 {
public:
	string destination ="";
void Bill() {

            if (choice == 1) {
                destination = "Lahore";
            }
            else if (choice == 2) {
                destination = "Karachi";
            }
            else if (choice == 3) {
                destination = "Islamabad";
            }
            else if (choice == 4) {
                destination = "Peshawar";
            }
            else if (choice == 5) {
                destination = "Multan";
            }
            else if (choice == 6) {
                destination = "Faisalabad";
            }
            fstream to;
        to.open("ticket.txt",fstream::app|fstream::out);
        to<<"       Name             : "<<name<<endl;
        to<<"       CNIC             : "<<cId<<endl;
        to<<"       Gender           : "<<gender<<endl;
        to<<"       Email            : "<<add<<endl;
        to<<"       Destination      : "<<destination<< endl;
        to<<"       Ammount          : "<<charges<<endl;
        to<<"       Seat No          : " << 1+(rand() % 100) << endl;

        to.close();

           }

    void displayBill() {
    	Bill();
        ifstream to("ticket.txt");
            cout << "______________________ASAD Travels______________________" << endl;
            cout << "______________________Ticket____________________________" << endl;
            cout << "________________________________________________________" << endl;
        	if(!to)
        	{
        		cout<<"File error!"<<endl;
			}
				for(int i=0;i<7;i++){


				getline(to, arr);
				cout<<arr<<endl;
		}

		to.close();
    }
};
void mainMenu()
{
	int back;
	ticket t;
    int choice;
    Registration reg;
    Details d;

    cout << "-----------------Welcome to Asad Travels-----------------" << endl;
    cout << "\nPress 1 for customer registration" << endl;
    cout << "Press 2 for booking a ticket" << endl;
    cout << "Press 3 for printing the ticket" << endl;
    cout << "Press 4 to exit" << endl;
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        d.information();
        mainMenu();
         system("cls");
    }
    break;
    case 2:
    {
        reg.AvailableBuses();
         system("cls");
		  break;
    }

    case 3:
    {

        t.Bill();

        cout << "\nTicket printed successfully!" << endl;
        cout << "Press 1 to print the ticket !" <<endl;
		cin>>back;
		 if(back==1)
		 {
		 	t.displayBill();
		 	cout<< "Press any key to go back to main menu:";
		 	cin>>back;
		 	if(back==1)
		 	{
		 		mainMenu();
			 }
			 else{
			 	mainMenu();
			 }
		 }
		 else
		 {
		 	mainMenu();
		 }

         system("cls");
	 break;
    }

    case 4:
    {
        quit();
		  break;
    }

    default:
    	{

        cout << "\nInvalid choice! Please try again." << endl;
        mainMenu();
         system("cls");
	}
}
}
//int main starts from here.
int main()
{
	ticket t;
	Details D;
	opening();
	bus();
	system("cls");
    Management manage;
    return 0;
}
