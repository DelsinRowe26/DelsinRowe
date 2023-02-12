///<summary>
/// Заголовок класса Student.cpp
///</summary>
#pragma once
#include <string>
#include "Birthday.h"
using namespace std;

class Student
{
	/// <summary>
	/// Метод: Student
	/// Описание:
	///		В данный метод вносятся переменные(Фамилия, Имя, Отчество и дата рождения студента)
	/// 
	/// </summary>
	public:
	//	int age;
		Student(Birthday dr, string FN, string SN, string PN);
		Birthday dr;
		
	/// <summary>
	/// Создание методов
	/// </summary>
	public:
		/// <summary>
		/// Метод show отображения
		/// </summary>
		/// <param name=""></param>
		void show(void);
		/// <summary>
		/// Метод SetFN отправки фамилии студента для замены 
		/// </summary>
		/// <param name="FN">фамилия</param>
		void SetFN(string FN);
		/// <summary>
		/// Метод GetFN получения фамилии студента
		/// </summary>
		/// <returns>Фамилия студента</returns>
		string GetFn();
		/// <summary>
		/// Метода SetSN отправки имени студента для замены
		/// </summary>
		/// <param name="SN">имя</param>
		void SetSN(string SN);
		/// <summary>
		/// Метод GetSN получения имени студента
		/// </summary>
		/// <returns>Имя студента</returns>
		string GetSN();
		/// <summary>
		/// Метод SetPN отправки отчества студента для его замены
		/// </summary>
		/// <param name="PN">отчество</param>
		void SetPN(string PN);
		/// <summary>
		/// Метод GetPN получение отчества студента
		/// </summary>
		/// <returns>Отчетсво студента</returns>
		string GetPN();

	/// <summary>
	/// Создание переменных защищенного типа 
	/// </summary>
	protected:
		string Firstname;
		string Secondname;
		string Patronymic;
};

