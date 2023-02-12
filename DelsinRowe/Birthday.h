#pragma once
class Birthday
{
	/// <summary>
	/// Create variables to store day, month and year of birth
	/// </summary>
	public:
		unsigned char day;
		unsigned char month;
		unsigned short year;

	/// <summary>
	/// Create methods
	/// </summary>
	public:
		/// <summary>
		/// SetDay method to send or replace date of birth
		/// </summary>
		/// <param name="day">Birthday</param>
		void SetDay(unsigned char day);
		/// <summary>
		/// GetDay method to get the student's birthday
		/// </summary>
		/// <returns>Day</returns>
		unsigned char GetDay();
		/// <summary>
		/// SetMonth method to send or replace the student's month of birth
		/// </summary>
		/// <param name="month">Month</param>
		void SetMonth(unsigned char month);
		/// <summary>
		/// The GetMonth method is designed to get the month of the student's birth
		/// </summary>
		/// <returns>Month</returns>
		unsigned char GetMonth();
		/// <summary>
		/// The SetYear method is designed to remove or replace the student's year of birth
		/// </summary>
		/// <param name="year"></param>
		void SetYear(unsigned char year);
		/// <summary>
		/// The GetYear method is designed to get the student's year of birth
		/// </summary>
		/// <returns>Year</returns>
		unsigned char GetYear();
};

