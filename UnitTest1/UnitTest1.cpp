#include "pch.h"
#include "CppUnitTest.h"
#include "../OOPLab 1.4/Math.h"
#include "../OOPLab 1.4/OOPLab 1.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Math a;
			a.Init(10, 2, 7, 3);
			Assert::AreEqual(a.Dodavannya(),12);
		}
	};
}
