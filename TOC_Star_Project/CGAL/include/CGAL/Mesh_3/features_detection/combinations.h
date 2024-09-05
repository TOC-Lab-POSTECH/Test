// Copyright (c) 2022 GeometryFactory (France).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org).
//
// $URL$
// $Id$
// SPDX-License-Identifier: GPL-3.0-or-later OR LicenseRef-Commercial
//
//
// Author(s)     : Sebastien Loriot
//
//******************************************************************************
//
//******************************************************************************


#ifndef CGAL_MESH_3_FEATURES_DETECTION_COMBINATIONS_H
#define CGAL_MESH_3_FEATURES_DETECTION_COMBINATIONS_H

#include <CGAL/license/Mesh_3.h>

#include <array>

namespace CGAL
{
namespace Mesh_3
{
namespace internal
{
  const std::array<std::uint8_t, 8> combinations[]
                            = {
                                // 1 color
                                {0,0,0,0,0,0,0,0}, //0
                                // 2 colors
                                {0,0,0,0,0,0,0,1}, //1
                                {0,0,0,0,0,0,1,1}, //2
                                // 3 colors
                                {0,0,0,0,0,0,1,2}, //3
                                {0,0,0,0,0,1,1,0},
                                {0,0,0,0,0,1,1,1},
                                {0,0,0,0,0,1,1,2},
                                {0,0,0,0,0,1,2,0},
                                {0,0,0,0,0,1,2,1},
                                {0,0,0,0,1,1,1,1},
                                {0,0,0,0,1,1,1,2},
                                {0,0,0,0,1,1,2,2},
                                {0,0,0,0,1,2,2,1},
                                {0,0,0,1,0,1,1,0},
                                {0,0,0,1,0,1,1,1},
                                {0,0,0,1,0,1,1,2},
                                {0,0,0,1,0,1,2,0},
                                {0,0,0,1,0,1,2,1},
                                {0,0,0,1,0,1,2,2},
                                {0,0,0,1,1,0,0,0},
                                {0,0,0,1,1,0,0,1},
                                {0,0,0,1,1,0,0,2},
                                {0,0,0,1,1,0,1,1},
                                {0,0,0,1,1,0,1,2},
                                {0,0,0,1,1,0,2,2},
                                {0,0,0,1,1,1,1,0},
                                {0,0,0,1,1,1,1,2},
                                {0,0,0,1,1,1,2,0},
                                {0,0,0,1,1,1,2,1},
                                {0,0,0,1,1,1,2,2},
                                {0,0,0,1,1,2,2,0},
                                {0,0,0,1,1,2,2,1},
                                {0,0,0,1,1,2,2,2},
                                {0,0,0,1,2,0,0,0},
                                {0,0,0,1,2,0,0,1},
                                {0,0,0,1,2,0,0,2},
                                {0,0,0,1,2,0,1,2},
                                {0,0,0,1,2,0,2,1},
                                {0,0,0,1,2,1,1,0},
                                {0,0,0,1,2,1,1,2},
                                {0,0,0,1,2,1,2,0},
                                {0,0,0,1,2,1,2,1},
                                {0,0,0,1,2,1,2,2},
                                {0,0,0,1,2,2,2,1},
                                {0,0,1,1,1,1,0,0},
                                {0,0,1,1,1,1,0,2},
                                {0,0,1,1,1,1,2,2},
                                {0,0,1,1,1,2,0,2},
                                {0,0,1,1,1,2,2,0},
                                {0,0,1,2,1,2,0,0},
                                {0,0,1,2,1,2,0,1},
                                {0,0,1,2,1,2,2,1},
                                {0,0,1,2,2,1,0,0},
                                {0,0,1,2,2,1,0,1},
                                {0,1,1,0,1,0,0,1},
                                {0,1,1,0,1,0,0,2},
                                {0,1,1,0,1,2,2,1},
                                {0,1,1,2,1,2,2,0}, //57
                                // 4 colors
                                {0,0,0,0,0,1,2,3}, //58
                                {0,0,0,0,1,1,2,3},
                                {0,0,0,0,1,2,2,3},
                                {0,0,0,1,0,1,2,3},
                                {0,0,0,1,0,2,3,0},
                                {0,0,0,1,0,2,3,1},
                                {0,0,0,1,1,0,2,3},
                                {0,0,0,1,1,1,2,3},
                                {0,0,0,1,1,2,2,3},
                                {0,0,0,1,1,2,3,0},
                                {0,0,0,1,1,2,3,1},
                                {0,0,0,1,1,2,3,2},
                                {0,0,0,1,2,0,0,3},
                                {0,0,0,1,2,0,1,3},
                                {0,0,0,1,2,0,2,3},
                                {0,0,0,1,2,0,3,3},
                                {0,0,0,1,2,1,1,3},
                                {0,0,0,1,2,1,2,3},
                                {0,0,0,1,2,1,3,0},
                                {0,0,0,1,2,1,3,1},
                                {0,0,0,1,2,1,3,2},
                                {0,0,0,1,2,1,3,3},
                                {0,0,0,1,2,2,2,3},
                                {0,0,0,1,2,2,3,0},
                                {0,0,0,1,2,2,3,1},
                                {0,0,0,1,2,2,3,2},
                                {0,0,0,1,2,2,3,3},
                                {0,0,0,1,2,3,3,0},
                                {0,0,0,1,2,3,3,1},
                                {0,0,0,1,2,3,3,2},
                                {0,0,0,1,2,3,3,3},
                                {0,0,1,1,1,1,2,3},
                                {0,0,1,1,1,2,0,3},
                                {0,0,1,1,1,2,2,3},
                                {0,0,1,1,1,2,3,0},
                                {0,0,1,1,1,2,3,2},
                                {0,0,1,1,1,2,3,3},
                                {0,0,1,1,2,2,3,3},
                                {0,0,1,1,2,3,2,3},
                                {0,0,1,1,2,3,3,2},
                                {0,0,1,2,1,2,0,3},
                                {0,0,1,2,1,2,2,3},
                                {0,0,1,2,1,2,3,3},
                                {0,0,1,2,1,3,0,0},
                                {0,0,1,2,1,3,0,1},
                                {0,0,1,2,1,3,0,2},
                                {0,0,1,2,1,3,2,0},
                                {0,0,1,2,1,3,2,1},
                                {0,0,1,2,1,3,2,3},
                                {0,0,1,2,2,1,0,3},
                                {0,0,1,2,2,1,1,3},
                                {0,0,1,2,2,1,3,3},
                                {0,0,1,2,2,3,0,0},
                                {0,0,1,2,2,3,0,1},
                                {0,0,1,2,2,3,0,2},
                                {0,0,1,2,2,3,1,3},
                                {0,0,1,2,2,3,3,1},
                                {0,1,1,0,1,0,2,3},
                                {0,1,1,0,1,2,2,3},
                                {0,1,1,0,1,2,3,1},
                                {0,1,1,0,2,3,3,2},
                                {0,1,1,2,1,2,2,3},
                                {0,1,1,2,1,2,3,0},
                                {0,1,1,2,2,3,3,0},
                                {0,1,1,2,3,0,2,3},
                                {0,1,2,3,3,2,1,0}, //123
                                // 5 colors
                                {0,0,0,0,1,2,3,4}, //124
                                {0,0,0,1,0,2,3,4},
                                {0,0,0,1,1,2,3,4},
                                {0,0,0,1,2,0,3,4},
                                {0,0,0,1,2,1,3,4},
                                {0,0,0,1,2,2,3,4},
                                {0,0,0,1,2,3,3,4},
                                {0,0,0,1,2,3,4,0},
                                {0,0,0,1,2,3,4,1},
                                {0,0,0,1,2,3,4,2},
                                {0,0,0,1,2,3,4,3},
                                {0,0,1,1,1,2,3,4},
                                {0,0,1,1,2,2,3,4},
                                {0,0,1,1,2,3,2,4},
                                {0,0,1,1,2,3,3,4},
                                {0,0,1,2,1,2,3,4},
                                {0,0,1,2,1,3,0,4},
                                {0,0,1,2,1,3,2,4},
                                {0,0,1,2,1,3,4,0},
                                {0,0,1,2,1,3,4,1},
                                {0,0,1,2,1,3,4,2},
                                {0,0,1,2,1,3,4,4},
                                {0,0,1,2,2,1,3,4},
                                {0,0,1,2,2,3,0,4},
                                {0,0,1,2,2,3,1,4},
                                {0,0,1,2,2,3,2,4},
                                {0,0,1,2,2,3,3,4},
                                {0,0,1,2,2,3,4,4},
                                {0,0,1,2,3,4,0,0},
                                {0,0,1,2,3,4,0,1},
                                {0,0,1,2,3,4,1,4},
                                {0,0,1,2,3,4,2,1},
                                {0,0,1,2,3,4,2,3},
                                {0,1,1,0,1,2,3,4},
                                {0,1,1,0,2,3,3,4},
                                {0,1,1,2,1,2,3,4},
                                {0,1,1,2,1,3,4,0},
                                {0,1,1,2,1,3,4,1},
                                {0,1,1,2,2,0,3,4},
                                {0,1,1,2,2,3,3,4},
                                {0,1,1,2,2,3,4,0},
                                {0,1,1,2,3,0,2,4},
                                {0,1,2,3,3,2,1,4}, //166
                                // 6 colors
                                {0,0,0,1,2,3,4,5}, //167
                                {0,0,1,1,2,3,4,5},
                                {0,0,1,2,1,3,4,5},
                                {0,0,1,2,2,3,4,5},
                                {0,0,1,2,3,4,0,5},
                                {0,0,1,2,3,4,1,5},
                                {0,0,1,2,3,4,2,5},
                                {0,0,1,2,3,4,5,5},
                                {0,1,1,0,2,3,4,5},
                                {0,1,1,2,1,3,4,5},
                                {0,1,1,2,2,3,4,5},
                                {0,1,1,2,3,0,4,5},
                                {0,1,1,2,3,4,4,5},
                                {0,1,1,2,3,4,5,3},
                                {0,1,2,3,3,2,4,5}, //181
                                // 7 colors
                                {0,0,1,2,3,4,5,6}, //182
                                {0,1,1,2,3,4,5,6},
                                {0,1,2,3,3,4,5,6}, //184
                                // 8 colors
                                {0,1,2,3,4,5,6,7} //185

                                };

}//end namespace internal
}//end namespace Mesh_3
}//end namespace CGAL


#endif // CGAL_MESH_3_FEATURES_DETECTION_COMBINATIONS_H
