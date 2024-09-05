#pragma once
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


namespace cgal {
	void kruskal(const Polyhedron& P);
}

