#include "Student.h"

/// <summary>
/// Method: Student
///	Target:
/// Get user input
///
/// </summary>
/// <param name="db">variable belonging to the class Bithday, it stores the student's date of birth </param>
/// <param name="FN">Last name</param>
/// <param name="SN">Name</param>
/// <param name="PN">Patronymic name</param>
Student::Student(Birthday db, string FN, string SN, string PN)
{
	dr.day = db.day;
	dr.month = db.month;
	dr.year = db.year;
	Firstname = FN;
	Secondname = SN;
	Patronymic = PN;
}
/// <summary>
/// show method to display student data
/// </summary>
/// <paramname=""></param>
void Student::show(void) 
{
	printf("%s %s %s %02u.%02u.%04u\n", this->Firstname.c_str(), this->Secondname.c_str(), this->Patronymic.c_str(), this->dr.day, this->dr.month, this->dr.year);
}

/// <summary>
/// SetFN method to send last name to replace it
/// </summary>
/// <param name="FN">Last name</param>
void Student::SetFN(string FN) 
{
	Firstname = FN;
}

/// <summary>
/// GetFN method to get the student's last name
/// </summary>
/// <returns>Last name</returns>
string Student::GetFn() 
{
	return Firstname;
}

/// <summary>
/// SetSN method to send the student's name, and replace the name
/// </summary>
/// <param name="SN">Name</param>
void Student::SetSN(string SN) 
{
	Secondname = SN;
}

/// <summary>
/// GetSN method to get student name
/// </summary>
/// <returns>Name</returns>
string Student::GetSN() 
{
	return Secondname;
}

/// <summary>
/// SetPN method to send and replace the student's middle name
/// </summary>
/// <param name="PN">Patronymic name</param>
void Student::SetPN(string PN) 
{
	Patronymic = PN;
}

/// <summary>
/// GetPN method for getting a student's middle name
/// </summary>
/// <returns>Patronymic</returns>
string Student::GetPN()
{
	return Patronymic;
}
