#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KomarovMA.CoursControl_0.Zd2.Lib/Tyuiu.KomarovMA.CoursControl_0.Zd2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V3* date = new Service();
			double x = 1;
			double y = 4;
			double z = 2;
			int rez;
			rez = date->Proizved(x, y, z);
			Assert::AreEqual(1, rez);
		}
	};
}
