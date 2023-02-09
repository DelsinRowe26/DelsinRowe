// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com


#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

/*class Student
{
public:

    int age, group;
    string name, familiya;
    Birthday data_of_birthday;
}; */

/*class Birthday
{
public:

    int day, month, year;

};*/

int main() 
{
    Student *gr[2];
    /*Student gr[2] = {{9,9,2002,"Gritchin","Ilya","Vladimirovich"},
                      {21,2,2003,"Zadorozhny","Denis","Vyacheslavovich"}};*/
    gr[0] = new Student({ 9,9,2002}, "Gritchin", "Ilya", "Vladimirovich");
    gr[1] = new Student({ 21,2,2003 }, "Zadorozhny", "Denis", "Vyacheslavovich");
    for (int i = 0; i < sizeof(gr)/sizeof(gr[0]); i++)
    {
        gr[i]->show();
    }
    gr[0]->SetFN("Nikolaev");
    gr[1]->SetSN("Dinya");
    gr[0]->show();
    gr[1]->show();
    delete gr[0];
    delete gr[1];

    return 0;
}