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
			<< age;
		save.close();
	}
	void Print()
	{
		Person temp;
		ifstream r("Person.txt");
		do
		{
			r >> temp.name >> temp.tel >> temp.age;
			cout << "Name: " << temp.name << endl
				<< "Tel: " << temp.tel << endl
				<< "Age: " << temp.age << endl;
		} while (!r.eof());
		r.close();

	}
};

int main()
{
	Person obj("Ivan", "380973563534", 20);
	obj.Save();
	Person obj2("Irina", "38565481515", 45, "38565481515", "38565481515");
	obj2.Save();
	obj2.Print();
}
