//
//  World.cpp
//  raytracing
//
//  Created by Claude Q. on 6/30/15.
//  Copyright (c) 2015 Claude Q. All rights reserved.
//

#include "World.h"

void World::build()
{
    vp.hres = 200;
    vp.vres = 200;
    vp.s = 1;       // pixel size
    vp.gamma = 1.0;
    
    background_color = RGBColor();
    //tracer_ptr =  new  SingleSphere(this);
}


ShadeRec  World::hit_bare_bones_objects(const Ray& ray) const
{
    ShadeRec sr(*this);
    
    
}