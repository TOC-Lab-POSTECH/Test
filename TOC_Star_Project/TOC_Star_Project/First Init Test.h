#pragma once

namespace FirstTest
{
	class TestNode {
	private:
		int data = 0;
	public:
		TestNode();
		TestNode(int);
		void setData(int);
		void printData();
	};
}