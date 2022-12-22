#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string sur = "w";
			int mat = 5;
			Student* p = new Student[2];
			p[0].prizv = "v";
			p[0].fizyka = 4;
			p[0].matematyka = 4;
			p[0].informatyka = 4;

			p[1].prizv = "w";
			p[1].fizyka = 5;
			p[1].matematyka = 5;
			p[1].informatyka = 3;

			Sort(p, 2);
			Assert::AreEqual(p[0].prizv, sur);
			Assert::AreEqual(p[0].fizyka, 5);
			Assert::AreEqual(p[0].matematyka, 5);
			Assert::AreEqual(p[0].informatyka, 3);
		}
	};
}
