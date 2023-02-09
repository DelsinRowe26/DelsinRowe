#pragma once
#include <string>
#include "Birthday.h"
using namespace std;

class Student
{
	
	public:
	//	int age;
		Student(Birthday dr, string FN, string SN, string PN);
		Birthday dr;
		
		
	public:

		void show(void);
		void SetFN(string FN);
		string GetFn();
		void SetSN(string SN);
		string GetSN();
		void SetPN(string PN);
		string GetPN();

	protected:
		
		string Firstname;
		string Secondname;
		string Patronymic;
};

