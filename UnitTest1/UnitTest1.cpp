#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_13.1/LAB_13.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestSum)
		{
			// Arrange
			nsVar::x_p = 0.0;
			nsVar::x_k = 1.0;
			nsVar::dx = 0.1;
			nsVar::e = 0.0001;

			// Act
			nsVar::x = nsVar::x_p;
			nsSum::sum();

			// Assert
			Assert::IsTrue(fabs(nsVar::s - 1.718282) < nsVar::e);
		}
	};
}
