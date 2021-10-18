#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int, int);
extern "C" int getArea(int, int);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

//Task1: add one unit case each for getPerimeter and getArea
namespace CSCN71020Assign2UnitTesting
{
	TEST_CLASS(CSCN71020Assign2UnitTesting)
	{
	public:
		
		TEST_METHOD(perimeterFunctionality)
		{
			//This is testing the getPerimeter function using length 4, width 3 to get 4+4+3+3=14
			int Result = 0;
			Result = getPerimeter(4, 3);
			Assert::AreEqual(14, Result);

		}

		TEST_METHOD(areaFunctionality)
		{
			//This is testing the getArea function using length 4, width 3 to get 4*3=12
			int Result = 0;
			Result = getArea(4, 3);
			Assert::AreEqual(12, Result);

		}

	};

}
