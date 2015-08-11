//
//  World.h
//  raytracing
//
//  Created by Claude Q. on 6/30/15.
//  Copyright (c) 2015 Claude Q. All rights reserved.
//

#ifndef __raytracing__World__
#define __raytracing__World__

#include "ViewPlane.h"
#include "RGBColor.h"
#include "Sphere.h"
#include "Tracer.h"

#include <vector>

#include <stdio.h>


class World
{
public:
    ViewPlane   vp;
    RGBColor    background_color;
    Tracer*     tracer_ptr;
    Sphere      sphere;
    std::vector<GeometricObject*>   objects;
    
    World(void);
    
    void    build(void);
    void    render_scene(void) const;
    void    open_window(const int hres, const int vres) const;
    void    display_pixel(const int row, const int column, const RGBColor& pixel_color) const;
    
    void    add_object(GeometricObject* obj_ptr);
    ShadeRec  hit_bare_bones_objects(const Ray& ray) const;
    
    
};

inline void World::add_object(GeometricObject* obj_ptr)
{
    objects.push_back(obj_ptr);
}

#endif /* defined(__raytracing__World__) */
