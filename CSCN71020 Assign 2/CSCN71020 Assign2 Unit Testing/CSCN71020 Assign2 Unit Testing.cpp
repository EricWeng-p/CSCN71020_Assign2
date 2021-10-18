#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" int setLength(int input, int* length);
extern "C" int setWidth(int input, int* width);

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
			int length = 4;
			int width = 3;

			Result = getPerimeter(&length, &width);
			Assert::AreEqual(14, Result);
		}

		TEST_METHOD(areaFunctionality) {
			//This is testing the getArea function using length 4, width 3 to get 4*3=12
			int Result = 0;
			int length = 4;
			int width = 3;
			Result = getArea(&length, &width);
			Assert::AreEqual(12, Result);
		}


		TEST_METHOD(lengthFunctionality1) {
			//This is testing setLength for length = 1 and input = 5

			int length = 1;
			int input = 5;
			setLength(input, &length);
			Assert::AreEqual(5, length);

		}

		TEST_METHOD(lengthFunctionality2) {
			//This is testing setLength for length = 5 and input = 0
			int length = 5;
			int input = 0;
			setLength(input, &length);
			Assert::AreEqual(5, length);

		}

		TEST_METHOD(lengthFunctionality3) {
			//This is testing setLength for length = 5 and input = 100

			int length = 5;
			int input = 100;
			setLength(input, &length);
			Assert::AreEqual(5, length);
		}
		TEST_METHOD(widthFunctionality1) {
			//This is testing setWidth for width = 1 and input = 300

			int width = 1;
			int input = 300;
			setWidth(input, &width);
			Assert::AreEqual(1, width);

		}
		TEST_METHOD(widthFunctionality2) {
			//This is testing setWidth for width = 1 and input = 3

			int width = 1;
			int input = 3;
			setWidth(input, &width);
			Assert::AreEqual(3, width);

		}
		TEST_METHOD(widthFunctionality3) {
			//This is testing setWidth for width = 3 and input = -30

			int width = 3;
			int input = -30;
			setLength(input, &width);
			Assert::AreEqual(3, width);
		}
	};
}
	
