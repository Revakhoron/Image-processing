#pragma once
#include "stdafx.h"
#include <iostream> 
#include <vector> 
struct imageColor {
	uchar r;
	uchar g;
	uchar b;
};

//struct etalon {
//	cv::Scalar color;
//	std::vector<cv::Point> er;
//};

struct objectMoment {
	double m00;
	double m01;
	double m10;
	double xt;
	double yt;
	double u00;
	double u11;
	double u02;
	double u20;
	double F1;
	double F2;
	unsigned perimeter = 0;
};