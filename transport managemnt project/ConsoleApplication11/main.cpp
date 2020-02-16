
#include <Windows.h>
#include<fstream>
#include <iostream>
#include <string>

#include<iostream>
using namespace std;

int main();
void view_routes()
{
	system("cls");
	system("COLOR 74");
	cout << "\n\n1-From Islamabad to Multan........1300/-PKR\n\n\n\t\t\t 2-From Lahore to Islamabad........1700/-PKR\n\n\n 3-From lahore to Multan........1000/-PKR\n\n\n\t\t\t4-From Islamabad to Bahawalpur.......1200/-PKR\n\n\n5-From Lahore to Naran........2300/-PKR\n   ";

}
void view_timings()
{
	system("cls");
	system("COLOR 0E");
	cout << "\n1-10:00AM.......Driver's Name: Imran Khan\n2-12:00PM.......Driver's Name: Jahangir tareen\n3-3:00PM........Driver's Name: Pervaiz Khattak\n4-6:00 PM........Driver's Name: Saad Rafique\n5-8:00PM.......Driver's Name: Shah Mehmood Qureshi\n6-11:00PM.......Driver's Name: Sheikh Rasheed\n7-2:00AM........Driver's Name: Chahudhry Nisaar\n8-6:00AM........Driver's Name: Shahbaz Sharif\n";

}
void take_complaints()
{
	string complaints;
	system("cls");
	system("COLOR 2F");
	cout << "\n\n\t\tEnter the complaints against the bus service or query regarding travelling: ";
	cin.ignore();
	getline(cin, complaints);

	fstream compl;


	compl.open("Complaints.txt", ios::app | ios::binary);

	compl << complaints;
	compl << "\n\n";
	compl.close();
}

void view_notices()
{
	string notices;
	fstream view;
	system("cls");
	system("COLOR 5E");
	view.open("Notice.txt");
	while (!view.eof()){


		getline(view, notices);
		cout << notices << "\n";




	}
	view.close();
}

class user
{
public:

	string choice, Name, fathername, address, phone_no, password, username, time;
	string route;
	string seats;

	void storerecord()
	{
		fstream forf;

		forf.open("Login.txt", ios::app | ios::binary);


		forf << username << "  ";

		forf << password << "  ";

		forf << Name << "  ";
		forf << fathername << "  ";
		forf << phone_no << "  ";
		forf << address << "  ";
		forf << route << "  ";
		forf << time << "  ";
		forf << seats;


		forf << "\n\n";
		forf.close();

	}


	void register_now()
	{
		system("cls");
		system("COLOR B0");
		cout << "Which type of registration you want to do: staff or student: ";
		cin >> choice;
		if (choice == "student" || choice == "STUDENT" || choice == "Student" || choice == "2")
		{
			cout << "Enter your CMS ID: ";
			cin >> username;
		}
		if (choice == "staff" || choice == "STAFF" || choice == "Staff" || choice == "1")
		{
			cout << "Enter your Staff ID: ";
			cin >> username;
		}
		cout << "\nEnter your name: ";
		cin.ignore();
		getline(cin, Name);
		cout << "\nEnter your Father's/Guardian's name: ";
		cin.ignore();
		getline(cin, fathername);
		cout << "\nEnter your phone number: ";
		cin >> phone_no;
		cout << "\nEnter your address: ";
		cin.ignore();
		getline(cin, address);


		ifstream read;
		string b, l, m, n, o, p, q, r, s, t, u;
		read.open("Login.txt");
		int i = 0; int w = 0; int x = 0; int y = 0; int z = 0; string bus1[20], bus2[20], bus3[20], bus4[20], bus5[20];

		cout << "\n1-Bus number 1..From Islamabad to Multan\n 2-Bus number 2..From Lahore to Islamabad\n 3-Bus number 3..From lahore to Multan\n4-Bus number 4..From Islamabad to Bahawalpur\n5-Bus number 5..From Lahore to Naran\n  Which route you want to select: ";
		cin >> route;

	chill:
		while (!read.eof())
		{


			read >> l;

			read >> m;

			read >> n;

			read >> o;

			read >> p;

			read >> q;

			read >> r;
			u = r;
			read >> s;

			read >> t;
			b = t;
			cout << l << " " << m << " " << n << " " << o << " " << p << " " << q << " " << r << " " << s << " " << t << " ";
			cout << "\n" << u;
			if (u == "1")
			{
				bus1[i] = t;
				i++;
			}
			else if (u == "2")
			{
				bus2[w] = t;
				w++;
			}
			else if (u == "3")
			{
				bus3[x] = t;
				x++;
			}
			else if (u == "4")
			{
				bus4[y] = t;
				y++;
			}
			else if (u == "5")
			{
				bus5[z] = t;
				z++;
			}

			cout << "\n" << i << "" << w << "" << x << "" << y << "" << z << "\n";
			goto chill;


		}
		read.close();
		for (int k = 0; k < i; k++)
		{
			cout << "\n" << bus1[k];
		}
		for (int k = 0; k < w; k++)
		{
			cout << "\n" << bus2[k];
		}
		for (int k = 0; k < x; k++)
		{
			cout << "\n" << bus3[k]; cout << " " << bus3[0];
		}
		for (int k = 0; k < y; k++)
		{
			cout << "\n" << bus4[k];
		}
		for (int k = 0; k < z; k++)
		{
			cout << "\n" << bus5[k];
		}
		string a;
	seat_again:
		cout << "\n1\t2\t3\t4\t5\t6\t7\t8\n9\t10\t11\t12\t13\t14\t15\t16\n17\t18\t19\t20\t21\t22\t23\t24\n25\t26\t27\t28\t29\t30\t31\t32\nSelect your seat number: ";
		cin >> a;
		if (route == "1")
		{
			for (int j = 0; j <= i; j++)
			{
				if (a == bus1[j])
				{
					cout << "the seat is already reserved.try again later";
					goto seat_again;
				}
				else
					seats = a;
			}
		}
		if (route == "2")
		{
			for (int j = 0; j <= w; j++)
			{
				if (a == bus2[j])
				{
					cout << "the seat is already reserved.try again later";
					goto seat_again;
				}
				else
					seats = a;
			}
		}
		if (route == "3")
		{
			for (int j = 0; j <= x; j++)
			{
				if (a == bus3[j])
				{
					cout << "the seat is already reserved.try again later";
					goto seat_again;
				}
				else
					seats = a;
			}
		}
		if (route == "4")
		{
			for (int j = 0; j <= y; j++)
			{
				if (a == bus4[j])
				{
					cout << "the seat is already reserved.try again later";
					goto seat_again;
				}
				else
					seats = a;
			}
		}
		if (route == "5")
		{
			for (int j = 0; j <= z; j++)
			{
				if (a == bus5[j])
				{
					cout << "the seat is already reserved.try again later";
					goto seat_again;
				}
				else
					seats = a;
			}
		}
		cout << "\n1-10:00AM\n2-12:00PM\n3-3:00PM\n4-6:00 PM\n 5-8:00PM\n6-11:00PM\n7-2:00AM\n8-6:00AM\nAt which time you want to book your seat: ";
		cin >> time;


		cout << "your username is: " << username << endl;
		cout << "Enter your Password: ";
		cin >> password;

	}
	bool is_empty(std::ifstream pFile)
	{
		return pFile.peek() == std::ifstream::traits_type::eof();
	}


	//comfirmation form after seat reservation


	void allottment_form()
	{
	enter:
		system("cls");
		system("COLOR 74");

		user use;
		fstream ifne;


		ifne.open("Login.txt", ios::in | ios::binary);
		string  a, b, d;
		int m;
		if (ifne)
		{


			ifne >> username;

			ifne >> password;


			cout << "\n\n\n\n\n\t\t\tEnter your Username: ";
			cin >> a;
			cout << "\t\t\tEnter your password: ";
			cin >> b;
			while (a != username&&b != password){
				string line;

				while (!ifne.eof()) {
					getline(ifne, line);
					if (line == "\0")
						break;
				}
				ifne >> username;
				ifne >> password;

			}
			if (a == username&&b == password)
			{
				system("cls");
				system("COLOR 0A");
				cout << "\n\n\n\n\n\t\t\t\t\t.....LOADING";
				for (int i = 0; i < 900000000; i++)
				{
				}
				string Name, username, fathername, address, phone_no, password;
				string  route, time;
				string seats;
				system("cls");
				system("COLOR 0E");
				cout << "\n\n\n\t\t\t\t<-><-><->CONFIRMATION FORM<-><-><->\n\n\n";
				cout << "\n\n\n";
				ifne >> Name;
				cout << "\n\t\tName: " << Name;
				ifne >> fathername;
				cout << "\t\t\t\tFather's/Guardian's  Name: " << fathername;
				ifne >> phone_no;
				cout << "\n\n\t\tPhone Number: " << phone_no;
				ifne >> address;
				cout << "\t\tAddress: " << address;

				ifne >> route;

				if (route == "1")
				{
					cout << "\n\n\t\troute: Islamabad to Multan\t\t\tPAyment to be deposited to counter:1300 PKR";
				}
				if (route == "2")
				{
					cout << "\n\n\t\troute: Lahore to Islamabad\t\t\tPAyment to be deposited to counter:1700 PKR";
				}
				if (route == "3")
				{

					cout << "\n\n\t\troute: lahore to Multan\t\t\tPAyment to be deposited to counter:1000 PKR";
				}
				if (route == "4")
				{

					cout << "\n\n\t\troute: Islamabad to Bahawalpur\t\t\tPAyment to be deposited to counter:1800 PKR";
				}
				if (route == "5")
				{
					cout << "\n\n\t\troute: Lahore to Naran\t\t\tPAyment to be deposited to counter:4000 PKR";
				}

				ifne >> time;
				if (time == "1")
				{
					cout << "\n\n\t\tTimimg: 10:00 AM\t\t\tDriver_name :Imran Khan";
				}
				if (time == "2")
				{
					cout << "\n\n\t\tTimimg: 12:00 PM\t\t\tDriver_name :Jahangir Tareen";
				}
				if (time == "3")
				{
					cout << "\n\n\t\tTimimg : 3:00 PM\t\t\tDriver_name : Pervaiz khattak";
				}

				if (time == "4")
				{
					cout << "\n\n\t\tTimimg: 6:00 PM\t\t\tDriver_name :Saad Rafique";
				}
				if (time == "5")
				{
					cout << "\n\n\t\tTimimg: 8:00 PM\t\t\tDriver_name :Shah Mehmood Qureshi";
				}
				if (time == "6")
				{
					cout << "\n\n\t\tTimimg: 11:00 PM\t\t\tDriver_name :Sheikh Rasheed";
				}
				if (time == "7")
				{
					cout << "\n\n\t\tTimimg: 2:00 AM\t\t\tDriver_name :Chahudhry Nisaar";
				}
				if (time == "8")
				{
					cout << "\n\n\t\tTimimg: 6:00 AM\t\t\tDriver_name :Shahbaz Sharif";
				}


				ifne >> seats;
				cout << "\n\n\t\tseat reserved is: " << seats << "\n\n";
				cout << "\n\n\n\t\t\t\t\t\t\tpassanger's signature::_ _ _ _ _ _ _ _ _ _ _";
				cout << "\n\n\t\tenter 1 to go to main menu and 2 for quit   "; int f;
				cin >> f;
				switch (f)
				{
				case 1:
					main();
				case 2:
					system("pause"); system("pause");

				}
				for (int i = 0; i < 456765; i++)
				{

				}
			}

			else
				cout << "your username or password is incorrect.Press 1 to re-enter or 2 to quit\n\t\t";
			cin >> m;

			switch (m)
			{
			case 1:
				goto enter;
			case 2:
				system("pause");

			}
		}
		else
		{
			cout << "file not opened";
			ifne.close();
		}

	}

	void printstream()
	{
		string line;
		fstream fare;
		fare.open("Login.txt");
		while (getline(fare, line)) {

			if (line == "\0")
				break;
			cout << line;
		}

		fare.close();

	}
};
static int p = 0;
class Admin

{

private:

	char busn[5], driver[10], arrival[5], depart[5], from[10], to[10], seat[8][4][10];
public:
	string pwd;
	Admin()
	{
		pwd = "no_to_nepotism";
	}

	string welcome()
	{
		string a;
		cout << "\n\nEnter Admin's password:   ";
		cin >> a;
		return a;
	}

	void reply_query()
	{
		string a, b, reply_to_text;
		fstream query, reply;
		query.open("Complaints.txt");
		while (!query.eof())
		{
		done:
			while (!query.eof()){
				getline(query, a);
				cout << a << "\n";

				if (a == "\0")
					goto done;
			}


		}
		query.close();
		cout << "\n\n";
		cin.ignore();
		getline(cin, reply_to_text);
		reply.open("Reply.txt", ios::app | ios::binary);
		reply << reply_to_text;
		reply << "\n\n";
		reply.close();

	}
	void notices()
	{
		string notice;
		cout << "\nthere are some notices/announcements by admins of the company\n\n\t";
		cin.ignore();
		getline(cin, notice);
		fstream notices("Notice.txt", ios::app | ios::binary);
		notices << notice << "\n\n";
		notices.close();
	}
	void install()

	{
		fstream adm;
		adm.open("Admin.txt", ios::app | ios::binary);


		system("cls");
		cout << "\n\n\n\n\t\t\t";

		cout << "Enter bus no: ";

		cin >> bus[p].busn;
		adm << bus[p].busn << " ";

		cout << "\n\n\t\t\tEnter Driver's name: ";

		cin >> bus[p].driver;
		adm << bus[p].driver << " ";
		cout << "\n\n\t\t\tArrival time: ";

		cin >> bus[p].arrival;
		adm << bus[p].arrival << " ";

		cout << "\n\n\t\t\tDeparture: ";

		cin >> bus[p].depart;
		adm << bus[p].depart << " ";

		cout << "\n\n\t\t\tFrom: \t\t\t";

		cin >> bus[p].from;
		adm << bus[p].from << " ";

		cout << "\n\n\t\t\tTo: \t\t\t";

		cin >> bus[p].to;
		adm << bus[p].to << " ";
		adm << "\n\n";
		adm.close();


		p++;

	}




}bus[10];


int main(void)
{
	
	string a, b;
	while (1)
	{
	menu:main :

		system("cls");
		 system("COLOR 1F");




		 cout << "\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
		 user use;
		 Admin admin;
		 //	use.printstream();
		 cout << "which type of login you want to go for:\n1-Admin\n2-User\n3-quit\n  ";
		 cin >> a;
		 if (a == "admin" || a == "Admin" || a == "ADMIN" || a == "1")
		 {

			 if (admin.welcome() == admin.pwd)
			 {
				 int a;
				 system("cls");
				 system("COLOR 47");
				 cout << "\n\n\n\t\t\tEnter valid choice\n\n\t\t\t\t1-install a bus\n\n\t\t\t\t2-Answer a query by passangers\n\n\t\t\t\t3-to add notices for passangers\n\n\t\t\t\t4-to go back to main menu\n\n\t\t\t\t5-quit :\n";
				 cin >> a;
				 switch (a)
				 {
				 case 1:
					 int p;
					 system("cls");
					 system("COLOR 3D");
					 admin.install();
					 cout << "press 1 to go to main menu";
					 cin >> p;
					 goto main; break;
				 case 2:
					 system("cls");
					 system("COLOR 0B");
					 admin.reply_query(); break;
				 case 3:

					 system("cls");
					 system("COLOR 0D");
					 admin.notices();
				 case 4:
					 goto menu;
				 case 5:
					 system("pause");
				 }
			 }

			 else
			 {
				 cout << "\n\nStay out of the access of admins!!....Only admin at this time is Farheen Asif\n\n\n";
				 system("pause");
			 }
		 }
		 else if (a == "user" || a == "User" || a == "USER" || a == "2")
		 {
			 system("cls");
			 system("COLOR 34");
			 cout << "\n\n\n\n\t\twhat you want to select:\n\t\t\t1-go for registration\n\t\t\t2-print out your confirmation slip\n\t\t\t3-to see the routes of buses\n\t\t\t4-to see the timings and respective drivers of the buses\n\t\t\t5-to complain about any bus service or if you have any query\n\t\t\t6-to see notices by admins\n\t\t\t7-to go to main menu\n\t\t\t8-quit\n ";
			 cin >> b;
			 if (b == "1")
			 {
				 use.register_now();
				 use.storerecord();

				 use.allottment_form();
			 }
			 else if (b == "2")

				 use.allottment_form();

			 else if (b == "3")

			 {
				 int n;
				 view_routes();
				 cout << "\n\n\t\tenter 1 to go to main menu and 2 for quit   ";
				 cin >> n;
				 switch (n){
				 case 1:
					 goto main;
				 case 2:
					 system("pause");
				 }

			 }

			 else if (b == "4")

			 {
				 int n;
				 view_timings();
				 cout << "\n\n\t\tenter 1 to go to main menu and 2 for quit   ";
				 cin >> n;
				 switch (n){
				 case 1:
					 goto main;
				 case 2:
					 system("pause");
				 }
			 }
			 else if (b == "5")
			 {
				 int n;
				 take_complaints();
				 cout << "\n\n\t\tenter 1 to go to main menu and 2 for quit   ";
				 cin >> n;
				 switch (n){
				 case 1:
					 goto main;
				 case 2:
					 system("pause");
				 }
			 }
			 else if (b == "6")
			 {
				 view_notices();
				 int n;
				 cout << "\n\n\t\tenter 1 to go to main menu and 2 for quit   ";
				 cin >> n;
				 switch (n){
				 case 1:
					 goto main;
				 case 2:
					 system("pause");
				 }
			 }
			 else if (b == "7")
			 {
				 goto main;
			 }
			 else if (b == "8")

				 system("pause");
			 goto full;

		 }
		 else if (a == "3" || a == "QUIT" || a == "quit" || a == "Quit")
			 system("pause");
		 goto full;
	}
full:
	return 0;
}


