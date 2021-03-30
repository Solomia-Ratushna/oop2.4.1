#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2.4/Matrix.cpp"
#include "../lab2.4/Matrix.h"
#include "../lab2.4/Solomia.h"
#include "../lab2.4/Solomia.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest241
{
	TEST_CLASS(UnitTest241)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			Matrix A(3), B(3);
			Assert::AreEqual(A == B, true);
		}
	};
}
