#include <iostream>

// Include our library
#include "header/First Init Test.h"
#include "header/SecondTest.h"

// CGAL Test
#include <CGAL/Simple_cartesian.h>
#include <CGAL/Polyhedron_3.h>
#include <CGAL/Polyhedron_items_with_id_3.h>
#include <iostream>
#include <list>
#include <CGAL/boost/graph/kruskal_min_spanning_tree.h>
typedef CGAL::Simple_cartesian<double>                               Kernel;
typedef Kernel::Point_3                                              Point;
typedef CGAL::Polyhedron_3<Kernel, CGAL::Polyhedron_items_with_id_3>  Polyhedron;
typedef boost::graph_traits<Polyhedron>::vertex_descriptor vertex_descriptor;
typedef boost::graph_traits<Polyhedron>::vertex_iterator   vertex_iterator;
typedef boost::graph_traits<Polyhedron>::edge_descriptor   edge_descriptor;

#include "header/CGAL_TEST.h"

int main()
{
    // First Test
    std::cout << "First Test\n";
    FirstTest::TestNode node(10);
    node.printData();
    node.setData(1);
    node.printData();

    // Second Test
    std::cout << "\nSecond Test\n";
    SecondTest::TestNode2 node2(11);
    node2.printData();
    node2.square();
    std::cout << node2.getData() << std::endl;
    node2.printData();

    //CGAL Test
    std::cout << "\nCGAL Test\n";
    Polyhedron P;
    Point a(1, 0, 0);
    Point b(0, 1, 0);
    Point c(0, 0, 1);
    Point d(0, 0, 0);
    P.make_tetrahedron(a, b, c, d);
    // associate indices to the vertices using the "id()" field of the vertex.
    vertex_iterator vb, ve;
    int index = 0;
    // boost::tie assigns the first and second element of the std::pair
    // returned by boost::vertices to the variables vit and ve
    for (boost::tie(vb, ve) = vertices(P); vb != ve; ++vb) {
        vertex_descriptor  vd = *vb;
        vd->id() = index++;
    }
    cgal::kruskal(P);
    return 0;

}