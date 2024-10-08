#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.2/lab 5.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double R = 9.0 / 3;
			Assert::AreEqual(R, 3.0);
		}
	};
}
