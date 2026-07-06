//This project is realted to DIGITAL CLOCK WITH GRAPHICS:

#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

int main()
{
    while (true)
    {
        system("cls");   // Clear screen

        time_t now = time(0);
        tm *t = localtime(&now);

        cout << "===== DIGITAL CLOCK =====" << endl;
        cout << "Time: ";

        cout << t->tm_hour << ":"
             << t->tm_min << ":"
             << t->tm_sec << endl;

        Sleep(1000);   // Wait for 1 second
    }

    return 0;
}