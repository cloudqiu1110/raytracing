//
//  Point3D.h
//  raytracing
//
//  Created by Claude Q. on 6/30/15.
//  Copyright (c) 2015 Claude Q. All rights reserved.
//

#ifndef __raytracing__Point3D__
#define __raytracing__Point3D__


#include "Vector3D.h"
#include <stdio.h>


class Point3D
{
public:
    Vector3D operator- ( Point3D& rhs);
};


#endif /* defined(__raytracing__Point3D__) */
