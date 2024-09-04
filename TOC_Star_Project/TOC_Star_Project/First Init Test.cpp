#include "pch.h"
#include "First Init Test.h"

#include <iostream>

FirstTest::TestNode::TestNode() {}
FirstTest::TestNode::TestNode(int init) { this->data = init; }

void FirstTest::TestNode::setData(int in) { this->data = in; }

void FirstTest::TestNode::printData()
{
	std::cout << "Data: " << this->data << std::endl;
}

