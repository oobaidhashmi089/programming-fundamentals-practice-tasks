#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std ;
void main()
{
//Variable decleration 
string name,father_name ,roll_number,college , board ;
float percentage,total_numbers,sub1,sub2,sub3,sub4,sub5;
string grade1,grade2,grade3,grade4,grade5,tgrades;
////Inputs field
cout << " Enter your name: ";
cin >> name;
cout << "Enter your father name: " ;
cin>> father_name;
cout << "Enter your roll number: ";
cin>> roll_number;
cout << "Enter your college: ";
cin >> college;
cout << "Enter your board: ";
cin >> board;
cout << "Enter your maths marks ";
cin >> sub1;
cout << "Enter your english marks ";
cin >> sub2;
cout << "Enter your physics marks ";
cin >> sub3;
cout << "Enter your chemistry marks ";
cin >> sub4;
cout << "Enter your urdu marks";
cin >> sub5;
////Percentage calculation
total_numbers = sub1+sub2+sub3+sub4+sub5 ;
percentage = (total_numbers/500)*100;
 //grade of sub1
if (sub1 >=80)
{ 
grade1='A';
}
else if (sub1 >=60) 
{ 
grade1='B';
}
else if ( sub1 >= 40)
{
grade1='C';
}
else if ( sub1 < 40 ) 
{
grade1='F';
}
////grade of sub2
if (sub2 >=80)
{ 
grade2='A';
}
else if (sub2 >=60) 
{ 
grade2='B';
}
else if ( sub2 >= 40)
{
grade2='C';
}
else if ( sub2 < 40 ) 
{
grade2='F';
}
//grade of sub3
if (sub3 >=80)
{ 
grade3='A';
}
else if (sub3 >=60) 
{ 
grade3='B';
}
else if ( sub3 >= 40)
{
grade3='C';
}
else if ( sub3 < 40 ) 
{
grade3='F';
}
//grade of sub4
if (sub4 >=80)
{ 
grade4='A';
}
else if (sub4 >=60) 
{ 
grade4='B';
}
else if ( sub4 >= 40)
{
grade4='C';
}
else if ( sub4 < 40 ) 
{
grade4='F';
}
//grade of sub5
if (sub5 >=80)
{ 
grade5='A';
}
else if (sub5 >=60) 
{ 
grade5='B';
}
else if ( sub5 >= 40)
{
grade5='C';
}
else if ( sub5 < 40 ) 
{
grade5 ='F';
}
////Total grades
if (percentage >=80)
{ 
tgrades='A';
}
else if (percentage >=60) 
{ 
tgrades='B';
}
else if ( percentage >= 40)
{
tgrades='C';
}
else if ( percentage < 40 ) 
{
tgrades='F';
}
 
cout<<"................................................................................................
............";
 cout << "\t\t\t\t\t\t\t\tBoard: " <<board<< endl;
cout << "\t\t\t\t\t\tcollege: " <<college<< endl;
cout<<".........................................................................................
........................\n";
cout<<"Name: "<<name; 
cout<<"\t\t\t\t\t\t\t\t\tPercentage= " <<percentage<<" %"<<endl;
 
cout<<"\t\t\t\t\t\t\t\t\tTotal numbers= "<< sub1+sub2+sub3+sub4+sub5 <<endl;
cout<<"Father name:" << father_name <<endl; 
cout<<"\t\t\t\t\t\t\t\t\t\Grade= '" <<tgrades<< "'" <<endl;
cout << "roll_number:"<< roll_number << endl;
cout<<".........................................................................................
.......................\n";
 
cout <<"Sub Total marks Marks obataind Grade \n";
cout<<"_______________________________________________________________________________\n";
cout<<"Maths: 100 \t\t\t " <<sub1 << "\t\t" <<grade1 
<<endl ;
cout<<"English: 100 \t\t " <<sub2 << "\t\t" <<grade2 
<<endl ;
cout<<"Physics: 100 \t\t\t " <<sub3 << "\t\t" <<grade3 
<<endl ;
cout<<"Chemistry: 100 \t\t\t " <<sub4 << "\t\t" <<grade4 
<<endl ;
cout<<"Urdu: 100 \t\t\t " <<sub5 << "\t\t" <<grade5 
<<endl ;
 _getch();
}
