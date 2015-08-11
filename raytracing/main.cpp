//
//  main.cpp
//  raytracing
//
//  Created by Claude Q. on 6/25/15.
//  Copyright (c) 2015 Claude Q. All rights reserved.
//


// OpenCV is just used for displaying the result
#include <Opencv/cv.h>
#include <opencv/highgui.h>
#include <opencv2/opencv.hpp>
using cv::Mat;


#include <string>
#include <vector>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;



#include <stdio.h>


class Test
{
public:
    void haha();
    double huge[100000000];
    
};

void Test::haha()
{
    std::cout << "hahah" << std::endl;
}


Test& doit()
{
    Test t;
    return t;
}


int main(int argc, const char * argv[])
{


    
    string pic1 = "/Users/qiulongyun/Downloads/meinv1.jpg";
    
    Mat img = cv::imread(pic1);
    
    cv::imshow("hi", img);
    cvWaitKey(0);

    
    return 0;
}
