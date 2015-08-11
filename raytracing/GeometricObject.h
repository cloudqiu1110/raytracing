//
//  GeometricObject.h
//  raytracing
//
//  Created by Claude Q. on 6/30/15.
//  Copyright (c) 2015 Claude Q. All rights reserved.
//

#ifndef __raytracing__GeometricObject__
#define __raytracing__GeometricObject__

#include "Ray.h"
#include "RGBColor.h"
#include "ShadeRec.h"


#include <stdio.h>


class GeometricObject
{
public:
    virtual bool hit(const Ray&, double& tmin, ShadeRec& sr) const =0;
    
protected:
    RGBColor  color;
};



#endif /* defined(__raytracing__GeometricObject__) */
