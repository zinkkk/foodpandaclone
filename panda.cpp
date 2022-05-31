#include<iostream>
#include<string>
#include<conio.h>
#include <fstream>
using namespace std;

class Menu
{
public:
	void food_list()
	{
		cout << "\n\n\t\t-------                WELCOME TO FOOD PANDA                -------" << endl;
		cout << "\n\n\t\t----------                ~~~  MENU  ~~~                  ----------" << endl;
		cout << "\n\n ------------------------------------------------------------------------------------------\n\n" << endl;
		cout << "\nPlease Select\n\n";
		cout << "\n\t\t1-Pizza\n";
		cout << "\n\t\t2-Burgers\n";
		cout << "\n\t\t3-Sides\n";	
		cout << "\n\n\t----- Max Order = Rs.5000 -----\t\t-----  0 = EXIT  -----" << endl;
		cout << "\n\n -------------------------------------------------------------------------------------------" << endl;
	}
};
class Order :public Menu {
protected:
	int  quantity, ord, a, b, c, d, e, f, g, h, i, j, k, l, T;
	string y, yes;
public:

	void Max(int T)
	{
		if (T <= 5000)
		{
			cout << "\n Your Order is saved! " << endl;
			cout << " Current Order is at : " << T << endl;
		}
		else
		{
			cout << "\n You can Order only upto 5000 \n" << endl;
			cout << " Current Order is at : " << T << endl;
			order_list();
		}

	}
	void order_list()
	{
		T = 0;
	a:
	b:
		cout << "\n\n\t Enter Your Order : ";
		cin >> ord;
		{

			switch (ord) {
			case 1:
				cout << "\t 1 = BBQ PIZZA (Rs.1299) \t\t 2 = PEPORONI PIZZA  (Rs.1299)" << endl;
				cout << "\t 3 = FUJITA PIZZA (Rs. 1100)   \t\t 4 = PLAIN CRUST (Rs.1100)" << endl;

				int x;
				cout << "\nEnter you Choice: ";
				cin >> x;
				if (x == 1) {
					cout << "\n You ordered BBQ PIZZA : Rs.1299";
					cout << "\n\t Enter Quantity: ";
					cin >> quantity;
					a = 1299;
					T = T + a * quantity;
					Max(T);
				}
				else if (x == 2) {
					cout << "\n You ordered PEPORONI PIZZA : Rs.1299";
					cout << "\n\t Enter Quantity: ";
					cin >> quantity;
					a = 1299;
					T = T + a * quantity;
					Max(T);
				}
				else if (x == 3) {
					cout << "\n You ordered FUJITA PIZZA : Rs.1100";
					cout << "\n\t Enter Quantity: ";
					cin >> quantity;
					a = 1100;
					T = T + a * quantity;
					Max(T);
				}
				else if (x == 4) {
					cout << "\n You ordered PLAIN CRUST : Rs.1100";
					cout << "\n\t Enter Quantity: ";
					cin >> quantity;
					a = 1100;
					T = T + a * quantity;
					Max(T);
				}
				else
					cout << "\nPLEASE INSERT CORRECT OPTION!!\n";

				break;
			case 2:
				cout << "\t 1 = Ham Burger (Rs.129) \t\t 2 = Beef Burger  (Rs.299)" << endl;
				cout << "\t 3 = Cheese Burger (Rs. 310)   \t\t 4 = Chicken BUrger (Rs.300)" << endl;
				int j;
				cout << "\nEnter you Choice: ";
				cin >> j;
				if (j == 1) {
					cout << "\n You ordered Ham Burger : Rs.129";
					cout << "\n\t Enter Quantity: ";
					cin >> quantity;
					a = 129;
					T = T + a * quantity;
					Max(T);
				}
				else if (j == 2) {
					cout << "\n You ordered BEEF BURGER : Rs.299";
					cout << "\n\t Enter Quantity: ";
					cin >> quantity;
					a = 299;
					T = T + a * quantity;
					Max(T);
				}
				else if (j == 3) {
					cout << "\n You ordered CHEESE BURGER: Rs.310";
					cout << "\n\t Enter Quantity: ";
					cin >> quantity;
					a = 310;
					T = T + a * quantity;
					Max(T);
				}
				else if (j == 4) {
					cout << "\n You ordered CHICKEN BURGER : Rs.300";
					cout << "\n\t Enter Quantity: ";
					cin >> quantity;
					a = 300;
					T = T + a * quantity;
					Max(T);
				}
				else
					cout << "\nPLEASE INSERT CORRECT OPTION!!\n";

				break;

			case 3:
				cout << "\t 1 = Biryani (Rs.299) \t\t 2 = Beef Karahi (Rs.999)" << endl;
				int i;
				cout << "\nEnter you Choice: ";
				cin >> i;
				if (i == 1) {
					cout << "\n You ordered Biryani : Rs.299";
					cout << "\n\t Enter Quantity: ";
					cin >> quantity;
					a = 299;
					T = T + a * quantity;
					Max(T);
				}
				else if (i == 2) {
					cout << "\n You ordered BEEF Karahi : Rs.999";
					cout << "\n\t Enter Quantity: ";
					cin >> quantity;
					a = 999;
					T = T + a * quantity;
					Max(T);
				}
				break;
			case 4:
				cout << "\t 1 = Fanta (Rs.60) \t\t 2 = Pepsi  (Rs.60)" << endl;
				cout << "\t 3 = Sting (Rs. 100)   \t\t 4 = Lemon Malt (Rs.110)" << endl;
				int n;
				cout << "\nEnter you Choice: ";
				cin >> n;
				if (n == 1) {
					cout << "\n You ordered FANTA : Rs.60";
					cout << "\n\t Enter Quantity: ";
					cin >> quantity;
					a = 60;
					T = T + a * quantity;
					Max(T);
				}
				else if (n == 2) {
					cout << "\n You ordered Pepsi : Rs.60";
					cout << "\n\t Enter Quantity: ";
					cin >> quantity;
					a = 60;
					T = T + a * quantity;
					Max(T);
				}
				else if (n == 3) {
					cout << "\n You ordered Sting : Rs.100";
					cout << "\n\t Enter Quantity: ";
					cin >> quantity;
					a = 100;
					T = T + a * quantity;
					Max(T);
				}
				else if (n == 4) {
					cout << "\n You ordered Lemon Malt : Rs.110";
					cout << "\n\t Enter Quantity: ";
					cin >> quantity;
					a = 110;
					T = T + a * quantity;
					Max(T);
				}
				break;

			}

			cout << "\n\t Do you want to add somthing to your order (y/n) :";
			cin >> y;
			if (y == "y" || y == "Y")
			{
				goto a;
			}
			else if (y == "n" || y == "N")
			{
				cout << "\n\n\n\t\t\t Thank you for your visit !! \t\t\t Generating Bill.... \n\n\n\n";
				system("pause");
			}
		}
		system("cls");
		string choice;
		cout << "\n\n\t\t\t Do you want Pick Up(p) or Delivery(d) (p/d)" << endl;
		cout << "\n\t\t\t Note: Delivery will cost you Extra charges " << endl;
		cin >> choice;
		if (choice == "p" || choice == "P")
		{
			cout << "\t\t\t Bill No               : 345 " << endl;
			cout << "\n\t\t\t--------------------------------------------" << endl;
			cout << "\t\t\t Total Bill            : Rs." << T << endl;
			cout << "\n\n\t\t\t\t\t\t\t ~~ Good Day! ";
		}
		else if (choice == "d" || choice == "D")
		{
			cout << "\t\t\t Bill No               : 345 " << endl;
			cout << "\t\t\t Total Food Bill       : Rs." << T << endl;
			cout << "\t\t\t Delivery Charges      : Rs.150" << endl;
			cout << "\n\t\t\t--------------------------------------------" << endl;
			cout << "\t\t\t Total Bill            : Rs." << T + 150 << endl;
			cout << "\n\n\t\t\t\t\t\t\t ~~ Good Day! \n\n";
		}

	}
	void show1()
	{
		food_list();
		order_list();
	}
};

class Account : public Order, public Menu {
private:
	string ID, Name, Password;
	
	string* usernames;
	string* passwords;

	int tLen;

	string toString() { return Password + "," + ID + "\n"; }
	void split(string str, int index) {
		const int numValues = 2;
		// As each line has 2 different values. -> username , password
		string arr[numValues];
		string delimiter = ",";
		int first = 0;
		int curr = 0;
		int lastItem = str.find(delimiter);
		while (lastItem != -1) {
			arr[curr++] = str.substr(first, lastItem - first);
			first = lastItem + delimiter.size();
			lastItem = str.find(delimiter, first);
		}
		arr[curr] = str.substr(first, lastItem - first);
		// Storing the value into the object.
		usernames[index] = arr[1];
		passwords[index] = arr[0];
	}
	void readFromFile() {
		string* credentials;
		fstream file("logins.txt", ios::in);
		string temp;
		int len = 0; // Length variable

		if (!file.good())
			return;
		// Getting the length of the file

		while (!file.eof()) {
			getline(file, temp);
			len++;
		}
		// Taking the file pointer to the beginning of the file:
		// file.seekg(0, ios::beg);
		file.close();
		file.open("logins.txt", ios::in);

		// Dynamically allocating the arrays:
		credentials = new string[len];
		usernames   = new string[len];
		passwords   = new string[len];

		int iter = 0;
		while (getline(file, temp)) {
			credentials[iter++] = temp;
		}

		for (int i = 0; i < len; i++)
			split(credentials[i], i);
		tLen = len;
		file.close();
	}
	void writeToFile() {
		ofstream file("logins.txt", ios::app);
		file << toString();
		file.close();
	}
public:
	void Open()//interface
	{
		readFromFile();
		int choice;
	flag4:
		cout << "\n\n\t\t----------   Welcome to Food Panda Login system   ----------\n\n" << endl;
		cout << "\n\n 1 = Account registration \n\n 2 = Login \n\n 3 = Exit \n\n";
		cout << " Enter choice : ";
	flag2:
		cin >> choice;

		switch (choice)
		{
		case 1://Registration
			system("cls");
			Register();//call function
			break;

		case 2:// login
			system("cls");
			login();//call function
			break;
		case 3:// exit
			exit(0);
		default:
		{
			cout << "\n\n Invalid choice! Try again" << endl;
			system("pause");
			system("cls");
			goto flag4;
		}
		}
	}
	void Register()//Registera
	{
		string x, y;
		string pass1, pass2;
		cout << "\n\n---------- Register your Account ----------\n\n" << endl;
		cout << "\n\n Enter ID : ";
	flag:
		cin >> x;
		if (ID == x)
		{
			cout << "\n This ID already exists, Try different : ";
			goto flag;
		}
		ID = x;
		cout << "\n Enter Username : ";
		cin >> y;
		Name = y;

		cout << "\n Enter Password : ";
	flag0:
		cin >> pass1;
		cout << " Confirm your password : ";
		cin >> pass2;
		if (pass1 != pass2)
		{
			cout << "\n Passwords do not match!  Try again : ";
			goto flag0;
		}
		cout << "\n Registered successfully! \n" << endl;
		Password = pass1;

		// Saving data to file:
		writeToFile();

		system("pause");
		system("cls");
		Open();
	}
	void login()	// login
	{
	flag1:
		string id, pwd;
		cout << "\n\n Enter ID : ";
		cin >> id;
		bool found = false;
		for (int i = 0; i < tLen; i++) {
			if (id == usernames[i]) {
				found = true;
				break;
			}
		}

		if (!found) {
			cout << "ID not found.\n";
			int x = 0;
			cout << "\n\n 1 = Try again \n 2 = For Registration " << endl;
		x:
			cin >> x;
			switch (x)
			{
			case 1:
				goto flag1;
				break;
			case 2:
				system("cls");
				Register();
				break;
			default:
				cout << "\n Invalid choice" << endl;
				goto x;
			}
		}

		cout << "\n Enter Password: ";
	flag2:
		found = false;
		cin >> pwd;
		for (int i = 0; i < tLen; i++) {
			if (passwords[i] == pwd) {
				found = true;
				break;
			}
		}
		if (!found) {
			cout << "\n Incorrect Password, Re-enter: ";
			goto flag2;
		}
		else{
			cout << "\n login succeeded!" << endl;
			system("pause");
			system("cls");
			show1();
		}
	}
};

int main()
{
	Account A;
	A.Open(); // display interface

	system("pause");
	return 0;
}