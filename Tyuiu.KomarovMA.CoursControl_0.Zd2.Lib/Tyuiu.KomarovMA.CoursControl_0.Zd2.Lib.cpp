// Tyuiu.KomarovMA.CoursControl_0.Zd2.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "cmath"
#include "math.h"
#include "../../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"
class Service : public ISprint0Task8V3
{
	int w = 2;
	virtual double Proizved(double x, double y, double z) override
	{
		return ((x || y - z) / (pow(x, w) || 2));
	}
};
