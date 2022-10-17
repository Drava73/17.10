#include <fstream>
#include <iostream>
using namespace std;

class Person
{
	string name;
	string tel;
	int age;
	string addrs;
	string job;
public:
	Person() = default;
	Person(string n, string t, int a, string d, string j)
	{
		name = n;
		tel = t;
		age = a;
		addrs = d;
		job = j;
	}
	void Save()
	{
		ofstream save("Person.txt", ios::app);
		save << name << endl
			<< tel << endl
			<< age << endl
			<< addrs << endl
			<< job;
		save.close();
	}
	void Print()
	{
		Person temp;
		ifstream r("Person.txt");
		if (r.is_open())
		{
			r >> temp.name >> temp.tel >> temp.age >> temp.addrs >> temp.job;
			cout << "Name: " << temp.name << endl
				<< "Tel: " << temp.tel << endl
				<< "Age: " << temp.age << endl
				<< "Address: " << temp.addrs << endl
				<< "Job: " << temp.job << endl;
			cout << endl;
		} while ( r.eof());
		r.close();
		 

	}

	void InPerson() {
		cout << "Name: ";
		cin >> name;
		cout << endl << "Tel: ";
		cin >> tel;
		cout << endl << "Age: ";
		cin >> age;
		cout << endl << "Address: ";
		cin >> addrs;
		cout << endl << "Job: ";
		cin >> job;
		cout << endl;
	}


};

int main()
{
	Person obj;
	obj.InPerson();
	obj.Save();
	obj.Print();
	Person obj1;
	
}
