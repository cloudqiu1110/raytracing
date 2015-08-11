//
//  Ray.h
//  raytracing
//
//  Created by Claude Q. on 6/30/15.
//  Copyright (c) 2015 Claude Q. All rights reserved.
//

#ifndef __raytracing__Ray__
#define __raytracing__Ray__



#include "Point3D.h"
#include "Vector3D.h"



#include <stdio.h>



class Ray
{
public:
    Point3D     o;  // origin point in view plane
    Vector3D    d;  // ray directrion
    Ray(void);
    Ray(const Point3D& origin, const Vector3D& dir);
    ~Ray(void);
    
    
private:    
    Ray&  operator=(const Ray& rhs);    // assignment constructor
    Ray(const Ray& ray);        // copy constructor

    
};


















#endif /* defined(__raytracing__Ray__) */
