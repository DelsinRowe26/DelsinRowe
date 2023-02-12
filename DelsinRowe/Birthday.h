#pragma once
class Birthday
{
	/// <summary>
	/// Создание переменных для хранения дня, месяца и года рождения
	/// </summary>
	public:
		unsigned char day;
		unsigned char month;
		unsigned short year;

	/// <summary>
	/// Создание методов
	/// </summary>
	public:
		/// <summary>
		/// Метод SetDay для отправки или замены даты рождения
		/// </summary>
		/// <param name="day">День рождения</param>
		void SetDay(unsigned char day);
		/// <summary>
		/// Метод GetDay для получения дня рождения студента
		/// </summary>
		/// <returns>День</returns>
		unsigned char GetDay();
		/// <summary>
		/// Метод SetMonth для отправки или замены месяца рождения студента
		/// </summary>
		/// <param name="month">Месяц</param>
		void SetMonth(unsigned char month);
		/// <summary>
		/// Метод GetMonth предназначен для получения месяца рождения студента
		/// </summary>
		/// <returns>Месяц</returns>
		unsigned char GetMonth();
		/// <summary>
		/// Метод SetYear предназначен для отрпавки или замены года рождения студента
		/// </summary>
		/// <param name="year"></param>
		void SetYear(unsigned char year);
		/// <summary>
		/// Метод GetYear предназначен для получения года рождения студента
		/// </summary>
		/// <returns>Год</returns>
		unsigned char GetYear();
};

