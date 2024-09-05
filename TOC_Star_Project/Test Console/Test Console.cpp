#include <iostream>

// Include our library
#include "header/First Init Test.h"
#include "header/SecondTest.h"

int main()
{
    // First Test
    std::cout << "First Test\n";
    FirstTest::TestNode node(10);
    node.printData();
    node.setData(1);
    node.printData();

    std::cout << "\nSecond Test\n";
    // Second Test
    SecondTest::TestNode2 node2(11);
    node2.printData();
    node2.square();
    std::cout << node2.getData() << std::endl;
    node2.printData();
}