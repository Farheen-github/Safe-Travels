#include <Windows.h>  //to add background and foreground colors

#include<fstream>     //to  do file handling

#include <iostream>     
#include <string>     //to deal with character strings


using namespace std;

int main();
void view_notices();   //to see the notices by admins for the passangers to follow rules of bus

void take_complaints();   //for the user to add complaints against bus or to ask for any query

void view_routes();          //for the users o see the routes of the buses

void view_timings();           //to see the timings of buses' departure and arrival and their drivers' name

class user
{
public:
	///////////////////user class to do registration and enter data
	string choice, Name, fathername, address, phone_no, password, username, time;
	string route;
	string seats;                              //pulic data members to access in to memeber function


	void register_now();       //to register the users for bus reservation

	void storerecord();       //to do file handling:store data in to file Login.txt

	void allottment_form();     //to allott confirmation slip to users who have registered

};


class Admin
{
	//incapsulation
private:                    //class for the admins to do their respective tasks

	char busn[5];      //bus number which is of any number (numbr of digits must be between 1-5)
	char driver[10];//to store the driver's name of the relevant bus
	char arrival[5];//to store the time of the arrival of the bus
	char depart[5];//to store the time of the departure of the bus
	char from[10];//to store the name of the place from where the bus strats to go
	char to[10];//destination of the bus
	char seat[8][4][10];//to store the seats


public:

	string pwd;   //admin's password

	Admin();   //constructor with no arguments

		string welcome();   //to check weather the person going to login is admin or any random person

		void reply_query(); //to reply to passangers if they have any query or complaints

		void notices();       //to add notices for the passangers

		void install();//to install bus

}bus[10];//bus instances create


