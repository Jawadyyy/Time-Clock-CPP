#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int hours, minutes, seconds;
    int a = 0, b = 0;

    while (a == 0)
    {
        cout << "Enter Hours: " << endl;
        cin >> hours;

        cout << "Enter Minutes: " << endl;
        cin >> minutes;

        cout << "Enter Seconds: " << endl;
        cin >> seconds;

        if (hours < 24 && minutes < 60 && seconds < 60)
        {
            a++;
        }
        else
        {
            system("cls");
        }
    }

    while (b == 0)
    {
        system("cls");
        cout << "Time:  " << hours << ":" << minutes << ":" << seconds << endl;
        Sleep(1000);
        seconds++;
        if (seconds > 59)
        {
            seconds = 0;
            minutes++;
        }
        if (minutes > 59)
        {
            minutes = 0;
            hours++;
        }
        if (hours > 23)
        {
            hours = 0;
        }
    }

    return 0;
}