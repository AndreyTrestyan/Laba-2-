/*
������� ����� Student:  id,  �������,  ���,  ��������,
����  ��������,  �����,  �������, ���������, ����, ������.
�������-����� ��������� ������ � ���������� ����� (�������� ������������),
������ �������� ��������
������� ������ ��������. �������:
a)  ������ ��������� ��������� ����������;
b)  ������ ������� ������.


*/
#include "Bomb.h"
#include <iostream>
#include <windows.h>
using namespace std;

void main()
{
 /*Student a1, a2;
 Student a3("Valik",18);//� ������� ������������ � �����������
 a1.setAll();
 char* q = a1.getName();
 int w = a1.getAge();
 a1.print();*/

 Student a[2];
 char fakultet[30];
 cout << "Enter the faculty to compare with other: " << endl;
 cin >> fakultet;
 for (int i = 0 ; i < 2 ; i ++)
 {
	 cout << "--------CREATING A NEW STUDENT--------" << endl;
	 a[i].setAll();
 }

 cout <<"\n\n\n"<< fakultet << "students" << endl;
  for (int i = 0 ; i < 2 ; i ++)
 {
	 if ( !strcmp(a[i].getFaculty(),fakultet) )
	 {
		 a[i].print();
	 }

 }

  int group ;
  cout << "Enter the group number and you'll see a student" << endl;
  cin >> group;
  for (int i = 0 ; i < 2 ; i ++)
 {
	 if ( a[i].getGroup() == group) 
	 {
		 a[i].print();
	 }

 }


 	

 system("pause");
}