#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int rollno, phy, che, mat ,grade , total;
    float percent;
    char name[20],grade[29];

    cout << "Roll No :";
    cin >> rollno;

    cout << "Name :";
    cin >> name;

    cout << "Enter the Marks of the student \n";

    cout << "Physics";
    cin >> phy;
    cout << "Chemistry";
    cin >> che;
    cout << "Maths";
    cin >> mat;

    total = phy + che + mat;
    percent = total/3;

    if (percent >= 60)
        grade=str("A");

    else
        if (percent && percent >= 48)
            grade="B"

        else
            if (percent <48 && percent >= 36)
                grade="Pass";

             else
                grade="Fail";




       cout << "Roll No : " << rollno <<endl << "Name of Student : " << name <<endl;

       cout << "Marks in Physics : " << phy << endl;
       cout << "Marks in Chemistry : " << che << endl;
       cout << "Marks in Information Technology : " << mat << endl;
       cout << "Total Marks = " << total <<endl;
       cout << "Percentage = " << percent <<endl;
       cout << "Grade = " << div <<endl;


}