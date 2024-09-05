#pragma once

namespace SecondTest {
	class TestNode2
	{
	private:
		int iData = 1;

	public:
		TestNode2();
		TestNode2(int);

		void square();
		int getData();
		void printData();
	};
}