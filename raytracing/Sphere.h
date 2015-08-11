//
//  Sphere.h
//  raytracing
//
//  Created by Claude Q. on 6/30/15.
//  Copyright (c) 2015 Claude Q. All rights reserved.
//

#ifndef __raytracing__Sphere__
#define __raytracing__Sphere__

#include "GeometricObject.h"
#include "ShadeRec.h"

#include <stdio.h>


class Sphere : public GeometricObject
{
public:
    Point3D     center;
    double      radius;
    bool hit(const Ray& ray, double& tmin, ShadeRec& sr)  const override ;
    
    
};





#endif /* defined(__raytracing__Sphere__) */
