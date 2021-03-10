#include "stdafx.h"
#include "Etalon.h"

Etalons::Etalons(std::string names, cv::Scalar color) {
	this->x = this->y =  0.0;
	this->sumX = this->sumY = 0.0;
	this->numberElements = 0;
	this->name.assign(names);
	this->color = color;
}

void Etalons::set(objectMoment& object) {
	this->sumX += object.F1;
	this->sumY += object.F2;
	this->numberElements += 1;
	this->x = static_cast<double>(this->sumX / this->numberElements);
	this->y = static_cast<double>(this->sumY / this->numberElements);
}

double Etalons::getX() {
	return this->x;
}

double Etalons::getY() {
	return this->y;
}


double Etalons::computeDist(objectMoment& object) {
	double res = 0;
	res += (this->x - object.F1) * (this->x - object.F1);
	res += (this->y - object.F2) * (this->y - object.F2);

	return std::sqrt(res);
}

double Etalons::computeDistE(cv::Point object) {
	double res = 0;
	res += (this->x - object.x) * (this->x - object.x);
	res += (this->y - object.y) * (this->y - object.y);

	return std::sqrt(res);
}

std::string Etalons::getName() {
	return this->name;
}

cv::Scalar Etalons::getColor()
{
	return this->color;
}

Etalons::~Etalons() {
	this->name.clear();
}