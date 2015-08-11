//
//  Plane.h
//  raytracing
//
//  Created by Claude Q. on 6/30/15.
//  Copyright (c) 2015 Claude Q. All rights reserved.
//

#ifndef __raytracing__Plane__
#define __raytracing__Plane__

#include "GeometricObject.h"

#include <stdio.h>


class Plane : public GeometricObject
{
public:
    Plane(void);
    Plane(const Point3D& p, const Normal& n);
    
    virtual  bool   hit(const Ray& ray, double& t, ShadeRec& s)  const;
    
private:
    Point3D     point;
    Normal      normal;
    static  const  double  kEpsilon;
    
    
};


#endif /* defined(__raytracing__Plane__) */
