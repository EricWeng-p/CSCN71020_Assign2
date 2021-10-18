#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int, int);
extern "C" int getArea(int, int);
extern "C" int setLength(int, int);
extern "C" int setWidth(int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

//Task1: add one unit case each for getPerimeter and getArea
namespace CSCN71020Assign2UnitTesting
{
	TEST_CLASS(CSCN71020Assign2UnitTesting)
	{
	public:

		TEST_METHOD(perimeterFunctionality) {
			//This is testing the getPerimeter function using length 4, width 3 to get 4+4+3+3=14
			int Result = 0;
			Result = getPerimeter(4, 3);
			Assert::AreEqual(14, Result);
		}

		TEST_METHOD(areaFunctionality) {
			//This is testing the getArea function using length 4, width 3 to get 4*3=12
			int Result = 0;
			Result = getArea(4, 3);
			Assert::AreEqual(12, Result);
		}


		TEST_METHOD(lengthFunctionality1) {
			//This is testing setLength for length = 5
			int Result = 0;
			Result = setLength(5, 1);
			Assert::AreEqual(5, Result);

		}

		TEST_METHOD(lengthFunctionality2) {
			//This is testing setLength for length = 0
			int Result = 0;
			Result = setLength(0, 5);
			Assert::AreEqual(5, Result);

		}

		TEST_METHOD(lengthFunctionality3) {
			//This is testing setLength for length = 100
			int Result = 0;
			Result = setLength(100, 5);
			Assert::AreEqual(5, Result);
		}
		TEST_METHOD(widthFunctionality1) {
			//This is testing setWidth for width = 3
			int Result = 0;
			Result = setWidth(3, 1);
			Assert::AreEqual(3, Result);

		}
		TEST_METHOD(widthFunctionality2) {
			//This is testing setWidth for width = 300
			int Result = 0;
			Result = setWidth(300, 3);
			Assert::AreEqual(3, Result);

		}
		TEST_METHOD(widthFunctionality3) {
			//This is testing setWidth for width = -30
			int Result = 0;
			Result = setLength(-30, 3);
			Assert::AreEqual(3, Result);
		}
	};
}
	
