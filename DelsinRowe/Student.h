///<summary>
/// Class header Student.cpp
///</summary>
#pragma once
#include <string>
#include "Birthday.h"
using namespace std;

class Student
{
	/// <summary>
	/// Method: Student
	/// Description:
	/// Variables are entered into this method (Surname, First name, Patronymic and date of birth of the student)
	/// </summary>
	public:
	//	int age;
		Student(Birthday dr, string FN, string SN, string PN);
		Birthday dr;
		
	/// <summary>
	/// Create methods
	/// </summary>
	public:
		/// <summary>
		/// Display show method
		/// </summary>
		/// <paramname=""></param>
		void show(void);
		/// <summary>
		/// SetFN method to send the student's last name to replace
		/// </summary>
		/// <param name="FN">last name</param>
		void SetFN(string FN);
		/// <summary>
		/// GetFN method for getting the student's last name
		/// </summary>
		/// <returns>Student's last name</returns>
		string GetFn();
		/// <summary>
		/// Method SetSN send student name to replace
		/// </summary>
		/// <param name="SN">name</param>
		void SetSN(string SN);
		/// <summary>
		/// GetSN method for getting the student's name
		/// </summary>
		/// <returns>Student name</returns>
		string GetSN();
		/// <summary>
		/// The SetPN method of sending the student's middle name to replace it
		/// </summary>
		/// <param name="PN">middle name</param>
		void SetPN(string PN);
		/// <summary>
		/// GetPN method getting the student's middle name
		/// </summary>
		/// <returns>Student report</returns>
		string GetPN();

	/// <summary>
	/// Create protected type variables
	/// </summary>
	protected:
		string Firstname;
		string Secondname;
		string Patronymic;
};

