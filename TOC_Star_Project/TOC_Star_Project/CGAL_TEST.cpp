#include "pch.h"
#include "CGAL_TEST.h"

void cgal::kruskal(const Polyhedron& P)
{
    // We use the default edge weight which is the length of the edge
    // This property map is defined in graph_traits_Polyhedron_3.h
    // This function call requires a vertex_index_map named parameter which
    // when  omitted defaults to "get(vertex_index,graph)".
    // That default works here because the vertex type has an "id()" method
    // field which is used by the vertex_index internal property.
    std::list<edge_descriptor> mst;
    boost::kruskal_minimum_spanning_tree(P, std::back_inserter(mst));
    std::cout << "#VRML V2.0 utf8\n"
        "Shape {\n"
        "appearance Appearance {\n"
        "material Material { emissiveColor 1 0 0}}\n"
        "geometry\n"
        "IndexedLineSet {\n"
        "coord Coordinate {\n"
        "point [ \n";
    vertex_iterator vb, ve;
    for (boost::tie(vb, ve) = vertices(P); vb != ve; ++vb) {
        std::cout << (*vb)->point() << "\n";
    }
    std::cout << "]\n"
        "}\n"
        "coordIndex [\n";
    for (std::list<edge_descriptor>::iterator it = mst.begin(); it != mst.end(); ++it) {
        std::cout << source(*it, P)->id()
            << ", " << target(*it, P)->id() << ", -1\n";
    }
    std::cout << "]\n"
        "}#IndexedLineSet\n"
        "}# Shape\n";
}