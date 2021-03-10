#pragma once

#include "stdafx.h"
#include <iostream> 
#include <vector> 
#include "structs.h"
//#include "DIP.cpp"



class Etalons {
public:
	Etalons(std::string name, cv::Scalar color);
	~Etalons();
	void set(objectMoment& object);
	double getX();
	double getY();
	std::string getName();
	cv::Scalar getColor();
	double computeDist(objectMoment& object);
	double computeDistE(cv::Point);
private:
	double x, y, sumX, sumY;
	cv::Scalar color;
	int numberElements;
	std::string name{};

};