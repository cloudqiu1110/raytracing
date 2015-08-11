//
//  ShadeRec.h
//  raytracing
//
//  Created by Claude Q. on 6/30/15.
//  Copyright (c) 2015 Claude Q. All rights reserved.
//

#ifndef __raytracing__ShadeRec__
#define __raytracing__ShadeRec__


#include "RGBColor.h"
#include "Normal.h"
#include "Point3D.h"
#include "World.h"

#include <stdio.h>

//class World;

class ShadeRec
{
public:
    bool        hit_an_object;
    Point3D     local_hit_point;
    Normal      normal;
    RGBColor    color;
    World&      w;
    
    explicit    ShadeRec(World& wr);
    explicit    ShadeRec(const ShadeRec& sr);
    ~ShadeRec(void);
    
    ShadeRec&   operator= (const ShadeRec& rhs);
    
};

#endif /* defined(__raytracing__ShadeRec__) */
