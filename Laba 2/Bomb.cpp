#include "Bomb.h"
#include <iostream>
#include <cstring>
using namespace std;


Student::Student()
{
}


Student::Student(char* NAME, int AGE)
{
 age = AGE;
 strcpy(name, NAME);
}


void Student::setName()
{
 cout << "enter name : " << endl;
 cin >> name;
}
void Student::setGroup()
{
 cout << "enter group : " << endl;
 cin >> group;
 if (group <= 0)	
	{
	 cout << "Wrong group, type it again" << endl;
	 setGroup();
	}
}
void Student::setSurname()
{
 cout << "enter surname : " << endl;
 cin >> surname;
}
void Student::setPatronymic()
{
 cout << "enter patronymic : " << endl;
 cin >> patronymic;
}
void Student::setId()
{
 cout << "enter id : " << endl;
 cin >> id;
 while (id < 0 || cin.fail()  )	
	{
	  cin.clear();
      cin.sync();
	 cout << "Wrong id, type it again" << endl;
	 setId();
	}
}
void Student::setFaculty()
{
 cout << "enter faculty : " << endl;
 cin >> faculty;
}
void Student::setAdress()
{
 cout << "enter adress : " << endl;
 cin >> adress;
}
void Student::setNumber()
{
 cout << "enter number : " << endl;
 cin >> number;
 while (age < 0 || cin.fail()  )	
	{
	  cin.clear();
      cin.sync();
	 cout << "Wrong number, type it again" << endl;
	 setNumber();
	}
}
void Student::setCourse()
{
 cout << "enter course : " << endl;
 cin >> course;
 while (age < 0 || cin.fail()  )	
	{
	  cin.clear();
      cin.sync();
	 cout << "Wrong course, type it again" << endl;
	 setCourse();
	}
}

bool Student::Datacheck()
{
 char a[10];
 int day, month, year;
 a[0] = data[0]; //day check
 a[1] = data[1];
 day = atoi(a);
 cout << day << endl;
 if (day >= 31 || day < 1) return false;

 a[0] = data[3]; //month check
 a[1] = data[4];
 month = atoi(a);
 cout << month << endl;
 if (month >= 12 || month < 1) return false;

 a[0] = data[6]; //year check
 a[1] = data[7];
 a[2] = data[8];
 a[3] = data[9];
 year = atoi(a);
 cout << year << endl;
 if (year > 20000 || year < 1 || data[10]) return false;

 if (data[2,5] != '.') return false;

 int day2 = 8, month2 = 9, year2 = 2016; // How many years (from data xx-xx-xxxx format)
 int years = year2 - year; 
 if (years>0)
 if (month2<month || (month2 == month && day2<day)) years --;
  cout << years << " years" <<endl;
  age = years;

 return true;
}


void Student::setData()
{
	cin >> data;	
	while ((Datacheck() == false) || cin.fail()  )	
	{
	  cin.clear();
      cin.sync();
	 cout << "Wrong data, type it again" << endl;
	 setData();	
	}
}

void Student::setAll()
{
	 setData();
	 //setAge();
	 setName();
	 setSurname();
	 setPatronymic();
	 setId();
	 setAdress();
	 setNumber();
	 setFaculty();
	 setCourse();
	 setGroup();
}

Student::~Student(void)
{
}

void Student::print()
{
 cout << "\n\nName - " << Student::name << endl;
 cout << "Age - " << Student::age << endl;
 cout << "Surname - " << Student::surname << endl;
 cout << "Patronic - " << Student::patronymic << endl;
 cout << "ID - " << Student::id << endl;
 cout << "Adress - " << Student::adress << endl;
 cout << "Number - " << Student::number << endl;
 cout << "Faculty - " << Student::faculty << endl;
 cout << "Course - " << Student::course << endl;
 cout << "Group - " << Student::group << endl;
}




char* Student::getName(void)
{
 return name;
}
int Student::getAge(void)
{
 return age;
}
char* Student::getSurname(void)
{
 return surname;
}
char* Student::getSatronymic(void)
{
 return patronymic;
}
int Student::getId(void)
{
 return id;
}
char* Student::getAdress(void)
{
 return adress;
}
int Student::getNumber(void)
{
 return number;
}
char* Student::getFaculty(void)
{
 return faculty;
}
int Student::getCourse(void)
{
 return course;
}
int Student::getGroup(void)
{
 return group;
}