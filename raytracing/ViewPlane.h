//
//  ViewPlane.h
//  raytracing
//
//  Created by Claude Q. on 6/30/15.
//  Copyright (c) 2015 Claude Q. All rights reserved.
//

#ifndef __raytracing__ViewPlane__
#define __raytracing__ViewPlane__

#include <stdio.h>


class ViewPlane
{
public:
    int     hres;
    int     vres;
    float   s;          // pixel size
    float   gamma;
    float   inv_gamma;
    
};

#endif /* defined(__raytracing__ViewPlane__) */
