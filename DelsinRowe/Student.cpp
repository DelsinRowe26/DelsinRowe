#include "Student.h"

/// <summary>
/// Метод: Student
///	Цель:
///		Получение введенных данных пользователем
///	
/// </summary>
/// <param name="db">переменная относящаяся к классу Bithday, в ней хранится дата рожедения студента </param>
/// <param name="FN">Фамилия</param>
/// <param name="SN">Имя</param>
/// <param name="PN">Отчество</param>
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
/// Метод show для отображения данных студента
/// </summary>
/// <param name=""></param>
void Student::show(void) 
{
	printf("%s %s %s %02u.%02u.%04u\n", this->Firstname.c_str(), this->Secondname.c_str(), this->Patronymic.c_str(), this->dr.day, this->dr.month, this->dr.year);
}

/// <summary>
/// Метод SetFN для отправки фамилии для её замены
/// </summary>
/// <param name="FN">Фамилия</param>
void Student::SetFN(string FN) 
{
	Firstname = FN;
}

/// <summary>
/// Метод GetFN для получения фамилии студента
/// </summary>
/// <returns>Фамилию</returns>
string Student::GetFn() 
{
	return Firstname;
}

/// <summary>
/// Метод SetSN для отправки имени студента, и замены имени
/// </summary>
/// <param name="SN">Имя</param>
void Student::SetSN(string SN) 
{
	Secondname = SN;
}

/// <summary>
/// Метод GetSN для получения имени студента
/// </summary>
/// <returns>Имя</returns>
string Student::GetSN() 
{
	return Secondname;
}

/// <summary>
/// Метод SetPN для отправки и замены отчества студента
/// </summary>
/// <param name="PN">Отчество</param>
void Student::SetPN(string PN) 
{
	Patronymic = PN;
}

/// <summary>
/// Метод GetPN для получения отчества студента
/// </summary>
/// <returns>Отчество</returns>
string Student::GetPN()
{
	return Patronymic;
}
