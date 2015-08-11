//
//  Tracer.h
//  raytracing
//
//  Created by Claude Q. on 6/30/15.
//  Copyright (c) 2015 Claude Q. All rights reserved.
//

#ifndef __raytracing__Tracer__
#define __raytracing__Tracer__

#include "World.h"

#include <stdio.h>

class  Tracer
{
public:
    Tracer(void);
    Tracer(World* w_ptr);
    
    virtual  RGBColor  trace_ray(const Ray& ray) const;
protected:
    World*  world_ptr;
    
};

#endif /* defined(__raytracing__Tracer__) */
