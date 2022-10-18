#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

class Person
{
	string name;
	string tel;
	int age;
	string addrs;
	string job;
	vector<Person>Firms;
	string finD;
 
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
		ofstream save("Person.txt", ios::app);//можно дописывать фаил
		save << endl << name << endl
			<< tel << endl
			<< age << endl
			<< addrs << endl
			<< job<< endl;
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

	void Ccleanr() {  
		ofstream r("Person.txt", ios::out | ios::trunc);
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

	void SearchByOwnerName()
	{
		 
		cin >> finD;
		if (finD == name) {
			cout << "Текст найден"<< endl;

		}
		else {
			cout << "error";
		}
	}
	void SearchByOwnertl()
	{

		cin >> finD;
		if (finD == tel) {
			cout << "Текст найден" << endl;

		}
		else {
			cout << "error";
		}
	}
	void SearchByOwnerag()
	{
		int a;
		cin >> a;
		if (a == age) {
			cout << "Текст найден" << endl;

		}
		else {
			cout << "error";
		}
	}
	void SearchByOwneradd()
	{

		cin >> finD;
		if (finD == addrs) {
			cout << "Текст найден" << endl;

		}
		else {
			cout << "error";
		}
	}
	void SearchByOwnerjob()
	{

		cin >> finD;
		if (finD == job) {
			cout << "Текст найден" << endl;

		}
		else {
			cout << "error";
		}
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Ввод данных:" << endl;
	Person obj;  
	obj.InPerson();
	obj.Save();
	cout << "1.Поиск имени" << endl;
	cout << "2.Поиск телефона" << endl;
	cout << "3.Поиск по agе" << endl;
	cout << "4.Поиск по адресy" << endl;
	cout << "5.Поиск по работе" << endl<<"Введите Ваш выбор:";
	int vib;
	cin>> vib;
	switch (vib)
	{
	case 1:
		cout << "1.Поиск имени:" << endl;
		obj.SearchByOwnerName();
		break;
	case 2:
		cout << "2.Поиск телефона:" << endl;
		obj.SearchByOwnertl();
		break;
	case 3:
		cout << "3.Поиск по agе:" << endl;
		obj.SearchByOwnerag();
		break;
	case 4:
		cout << "4.Поиск по адресy:" << endl;
		obj.SearchByOwneradd();
		break;
	case 5:
		cout << "5.Поиск по работе:" << endl;
		obj.SearchByOwnerjob();
		break;
	
	default:
		cout << "error" << endl;
		break;
	}
	obj.Print();
	obj.Ccleanr();
	 
	 

};
