// Tyuiu.KomarovMA.CoursControl_0.Zd2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "cmath"
#include "math.h"
#include "../Tyuiu.KomarovMA.CoursControl_0.Zd2.Lib/Tyuiu.KomarovMA.CoursControl_0.Zd2.Lib.cpp"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
    ISprint0Task8V3* date = new Service();
    cout << "Решение выражения (x + y - z) / (x^2 + 2)\n";
    cout << "x:";
    double x;
    cin >> x;
    cout << "y:";
    double y;
    cin >> y;
    cout << "z:";
    double z;
    cin >> z;
    double rez;
    rez = date->Proizved(x, y, z);
    cout << rez;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
