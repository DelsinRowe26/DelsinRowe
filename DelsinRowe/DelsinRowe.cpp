// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
///<summary>
/// Программа: DelsinRowe
/// Цель: Выводить данные студентов
///     Результат:
///         Вывод данных студентов.
///     Вызываемые классы:
///         Student.
///     Описание программы:
///         Вывод данных студентов, и возможность изменения данных
///     Дата: 10.02.2023 Версия 1.0.0.1
///     Автор: Гритчин И.В.
///     Исправления: нет
///</summary>
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() 
{
    /// <summary>
    /// Массив gr в которой сохраняются данные студентов 
    /// </summary>
    /// <param name="gr"></param>
    /// <returns></returns>
    Student *gr[2];

    /*Student gr[2] = {{9,9,2002,"Gritchin","Ilya","Vladimirovich"},
                      {21,2,2003,"Zadorozhny","Denis","Vyacheslavovich"}};*/
    ///<summary>
    /// Внесение данных студентов
    /// И вывод данных через цикл
    ///</summary>
    gr[0] = new Student({ 9,9,2002}, "Gritchin", "Ilya", "Vladimirovich");
    gr[1] = new Student({ 21,2,2003 }, "Zadorozhny", "Denis", "Vyacheslavovich");
    for (int i = 0; i < sizeof(gr)/sizeof(gr[0]); i++)
    {
        gr[i]->show();
    }

    /// <summary>
    /// Изменение данных студентов и удаление данных студентов
    /// </summary>
    /// <returns></returns>

    gr[0]->SetFN("Nikolaev");
    gr[1]->SetSN("Dinya");
    gr[0]->show();
    gr[1]->show();
    delete gr[0];
    delete gr[1];

    return 0;
}