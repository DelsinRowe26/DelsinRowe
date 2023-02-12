///<summary>
/// ��������� ������ Student.cpp
///</summary>
#pragma once
#include <string>
#include "Birthday.h"
using namespace std;

class Student
{
	/// <summary>
	/// �����: Student
	/// ��������:
	///		� ������ ����� �������� ����������(�������, ���, �������� � ���� �������� ��������)
	/// 
	/// </summary>
	public:
	//	int age;
		Student(Birthday dr, string FN, string SN, string PN);
		Birthday dr;
		
	/// <summary>
	/// �������� �������
	/// </summary>
	public:
		/// <summary>
		/// ����� show �����������
		/// </summary>
		/// <param name=""></param>
		void show(void);
		/// <summary>
		/// ����� SetFN �������� ������� �������� ��� ������ 
		/// </summary>
		/// <param name="FN">�������</param>
		void SetFN(string FN);
		/// <summary>
		/// ����� GetFN ��������� ������� ��������
		/// </summary>
		/// <returns>������� ��������</returns>
		string GetFn();
		/// <summary>
		/// ������ SetSN �������� ����� �������� ��� ������
		/// </summary>
		/// <param name="SN">���</param>
		void SetSN(string SN);
		/// <summary>
		/// ����� GetSN ��������� ����� ��������
		/// </summary>
		/// <returns>��� ��������</returns>
		string GetSN();
		/// <summary>
		/// ����� SetPN �������� �������� �������� ��� ��� ������
		/// </summary>
		/// <param name="PN">��������</param>
		void SetPN(string PN);
		/// <summary>
		/// ����� GetPN ��������� �������� ��������
		/// </summary>
		/// <returns>�������� ��������</returns>
		string GetPN();

	/// <summary>
	/// �������� ���������� ����������� ���� 
	/// </summary>
	protected:
		string Firstname;
		string Secondname;
		string Patronymic;
};

