//
//  Sphere.cpp
//  raytracing
//
//  Created by Claude Q. on 6/30/15.
//  Copyright (c) 2015 Claude Q. All rights reserved.
//

#include "Sphere.h"

bool Sphere::hit(const Ray& ray, double& tmin, ShadeRec& sr)
{
    double t;

    Vector3D  temp = ray.o - center;
    double      a = ray.d * ray.d;  // 点乘
    double      b = 2.0 * temp * ray.d;
    
    
    
}