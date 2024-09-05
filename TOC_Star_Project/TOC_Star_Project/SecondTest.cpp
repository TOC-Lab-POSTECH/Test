#include "pch.h"
#include "SecondTest.h"

#include<iostream>

SecondTest::TestNode2::TestNode2() {}
SecondTest::TestNode2::TestNode2(int _init) {
	this->iData = _init;
}

void SecondTest::TestNode2::square() {
	int tmp = this->iData * this->iData;
	if (tmp < 0) {
		std::cout << "WARNING: The result is too huge so that overflow occurs\n";
		return;
	}
	this->iData = tmp;
}

int SecondTest::TestNode2::getData() { return this->iData; }

void SecondTest::TestNode2::printData() {
	std::cout << "Data : " << this->iData << std::endl;
}