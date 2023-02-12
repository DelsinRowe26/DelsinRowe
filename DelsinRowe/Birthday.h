#pragma once
class Birthday
{
	/// <summary>
	/// �������� ���������� ��� �������� ���, ������ � ���� ��������
	/// </summary>
	public:
		unsigned char day;
		unsigned char month;
		unsigned short year;

	/// <summary>
	/// �������� �������
	/// </summary>
	public:
		/// <summary>
		/// ����� SetDay ��� �������� ��� ������ ���� ��������
		/// </summary>
		/// <param name="day">���� ��������</param>
		void SetDay(unsigned char day);
		/// <summary>
		/// ����� GetDay ��� ��������� ��� �������� ��������
		/// </summary>
		/// <returns>����</returns>
		unsigned char GetDay();
		/// <summary>
		/// ����� SetMonth ��� �������� ��� ������ ������ �������� ��������
		/// </summary>
		/// <param name="month">�����</param>
		void SetMonth(unsigned char month);
		/// <summary>
		/// ����� GetMonth ������������ ��� ��������� ������ �������� ��������
		/// </summary>
		/// <returns>�����</returns>
		unsigned char GetMonth();
		/// <summary>
		/// ����� SetYear ������������ ��� �������� ��� ������ ���� �������� ��������
		/// </summary>
		/// <param name="year"></param>
		void SetYear(unsigned char year);
		/// <summary>
		/// ����� GetYear ������������ ��� ��������� ���� �������� ��������
		/// </summary>
		/// <returns>���</returns>
		unsigned char GetYear();
};

