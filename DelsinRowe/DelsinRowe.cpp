// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
///<summary>
/// Program: DelsinRowe
/// Purpose: Display student data
///     Result:
/// Display student data.
/// Callable classes:
///Student.
///     Program description:
/// Output student data, and the ability to change data
/// Date: 02/10/2023 Version 1.0.0.1
/// Author: Gritchin I.V.
/// Fixes: no
///</summary>
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() 
{
    /// <summary>
    /// Array gr in which student data is stored
    /// </summary>
    /// <param name="gr"></param>
    /// <returns></returns>
    Student *gr[2];

    /*Student gr[2] = {{9,9,2002,"Gritchin","Ilya","Vladimirovich"},
                      {21,2,2003,"Zadorozhny","Denis","Vyacheslavovich"}};*/
    ///<summary>
    /// Entering student data
    /// And output data through the loop
    ///</summary>
    gr[0] = new Student({ 9,9,2002}, "Gritchin", "Ilya", "Vladimirovich");
    gr[1] = new Student({ 21,2,2003 }, "Zadorozhny", "Denis", "Vyacheslavovich");
    for (int i = 0; i < sizeof(gr)/sizeof(gr[0]); i++)
    {
        gr[i]->show();
    }

    /// <summary>
    /// Changing student data and deleting student data
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