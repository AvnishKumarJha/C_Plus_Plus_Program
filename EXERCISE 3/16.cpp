#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rollnumber, p, c, m, e, cs, pe, mo, tm = 600;
    string name;
    float per;

    cout << "**********Scorecard/Marksheet of the Student**********" << endl << endl;
    cout << "Enter the Name of the Student " << endl;
    getline(cin, name);
    cout << "Enter the RollNumber of the Student " << endl;
    cin >> rollnumber;
    cout << endl;
    cout << "Enter the Marks of the Physics Subject " << endl;
    cin >> p;
    cout << "Enter the Marks of the Chemistry Subject " << endl;
    cin >> c;
    cout << "Enter the Marks of the Maths Subject " << endl;
    cin >> m;
    cout << "Enter the Marks of the English Subject " << endl;
    cin >> e;
    cout << "Enter the Marks of the ComputerScience Subject " << endl;
    cin >> cs;
    cout << "Enter the Marks of the PhysicalEducation Subject" << endl;
    cin >> pe;
    cout << endl;
    cout << "Marks in the Physics Subject " << p << endl;
    cout << "Marks in the Chemistry Subject " << c << endl;
    cout << "Marks in the Mathematics Subject " << m << endl;
    cout << "Marks in the English Subject " << e << endl;
    cout << "Marks in the ComputerScience Subject " << cs << endl;
    cout << "Marks in the PhysicalEducation Subject " << pe << endl;
    cout << endl;

    mo = p + c + m + e + cs + pe;
    cout << "Display the MarksObtained by the Student " << mo << endl;
    per = (mo / tm) / 100;
    cout << "Display the Total Percentage of the Student " << p << endl;
    cout << endl;

    int marks;
    cout << "Enter your TotalMarks Obtained by the Student " << endl;
    cin >> marks;

    if (marks > 550)
    {
        cout << "Grade O" << endl;
        cout << "Outstanding" << endl;
    }
    else if (mo > 500)
    {
        cout << "Grade A++" << endl;
        cout << "Excellent" << endl;
    }
    else if (mo > 450)
    {
        cout << "Grade A" << endl;
        cout << "VeryGood" << endl;
    }
    else if (mo > 400)
    {
        cout << "Grade B++" << endl;
        cout << "Good" << endl;
    }
    else if (mo > 350)
    {
        cout << "Grade B" << endl;
        cout << "Average" << endl;
    }
    else if (mo > 300)
    {
        cout << "Grade C++" << endl;
        cout << "Satisfactory" << endl;
    }
    else if (mo > 250)
    {
        cout << "Grade C" << endl;
    }
    else if (mo > 200)
    {
        cout << "Grade D" << endl;
    }
    else if (mo > 150)
    {
        cout << "Grade E" << endl;
    }
    else if (mo > 100)
    {
        cout << "Grade F" << endl;
    }
    else
    {
        cout << "Grade Fail" << endl;
    }

    return 0;
}