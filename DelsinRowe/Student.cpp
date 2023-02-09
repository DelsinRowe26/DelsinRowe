#include "Student.h"

Student::Student(Birthday db, string FN, string SN, string PN)
{
	dr.day = db.day;
	dr.month = db.month;
	dr.year = db.year;
	Firstname = FN;
	Secondname = SN;
	Patronymic = PN;
}

void Student::show(void) 
{
	printf("%s %s %s %02u.%02u.%04u\n", this->Firstname.c_str(), this->Secondname.c_str(), this->Patronymic.c_str(), this->dr.day, this->dr.month, this->dr.year);
}

void Student::SetFN(string FN) 
{
	Firstname = FN;
}

string Student::GetFn() 
{
	return Firstname;
}

void Student::SetSN(string SN) 
{
	Secondname = SN;
}

string Student::GetSN() 
{
	return Secondname;
}

void Student::SetPN(string PN) 
{
	Patronymic = PN;
}

string Student::GetPN()
{
	return Patronymic;
}
