#include "Student.h"

/// <summary>
/// �����: Student
///	����:
///		��������� ��������� ������ �������������
///	
/// </summary>
/// <param name="db">���������� ����������� � ������ Bithday, � ��� �������� ���� ��������� �������� </param>
/// <param name="FN">�������</param>
/// <param name="SN">���</param>
/// <param name="PN">��������</param>
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
/// ����� show ��� ����������� ������ ��������
/// </summary>
/// <param name=""></param>
void Student::show(void) 
{
	printf("%s %s %s %02u.%02u.%04u\n", this->Firstname.c_str(), this->Secondname.c_str(), this->Patronymic.c_str(), this->dr.day, this->dr.month, this->dr.year);
}

/// <summary>
/// ����� SetFN ��� �������� ������� ��� � ������
/// </summary>
/// <param name="FN">�������</param>
void Student::SetFN(string FN) 
{
	Firstname = FN;
}

/// <summary>
/// ����� GetFN ��� ��������� ������� ��������
/// </summary>
/// <returns>�������</returns>
string Student::GetFn() 
{
	return Firstname;
}

/// <summary>
/// ����� SetSN ��� �������� ����� ��������, � ������ �����
/// </summary>
/// <param name="SN">���</param>
void Student::SetSN(string SN) 
{
	Secondname = SN;
}

/// <summary>
/// ����� GetSN ��� ��������� ����� ��������
/// </summary>
/// <returns>���</returns>
string Student::GetSN() 
{
	return Secondname;
}

/// <summary>
/// ����� SetPN ��� �������� � ������ �������� ��������
/// </summary>
/// <param name="PN">��������</param>
void Student::SetPN(string PN) 
{
	Patronymic = PN;
}

/// <summary>
/// ����� GetPN ��� ��������� �������� ��������
/// </summary>
/// <returns>��������</returns>
string Student::GetPN()
{
	return Patronymic;
}
