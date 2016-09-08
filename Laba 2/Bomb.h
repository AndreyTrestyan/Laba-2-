#pragma once
#include "string.h"

class Student
{
public:
		 Student();
		 Student(char*, int);

		 void setName();
		 void setSurname();
		 void setPatronymic();
		 void setId();
		 void setAdress();
		 void setNumber();
		 void setFaculty();
		 void setCourse();
		 void setGroup();
		 void setAll();
		 void setData();

		 ~Student(void);
		 void print();
		 char* getFaculty(void);
		 int getGroup(void);

private:
		 char name[30];      //	���
		 char surname[30];   //	�������
		 char patronymic[30];// ��������
		 int  age;           //	�������
		 int  id;            //	����
		 char adress[30];    //	�����
		 int  number;        //	����� ��������
		 char faculty[30];   //	���������
		 int  course;        //	����� �����
		 int  group;         //	����� ������
		 char data[9];
		 bool Datacheck();
};