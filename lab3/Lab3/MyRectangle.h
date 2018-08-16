//Lab / Lab 02
//Author: Jordan Olson
//Date last modified: 8/24/2016
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
class MyRectangle
{
public:
	MyRectangle();
	~MyRectangle();
	int getHeight(int h);
	int getWidth(int w);
	int getArea();
	MyRectangle(int w, int h);
private:
	int height = 0;
	int width = 0;
};

MyRectangle::MyRectangle()
{
}


MyRectangle::~MyRectangle()
{
}


int MyRectangle::getHeight(int h) {
	height = h;
	return height;
};


int MyRectangle::getWidth(int w) {
	width = w;
	return width;
};


int MyRectangle::getArea() {
	return height * width;
};


MyRectangle::MyRectangle(int w, int h) {
	width = w;
	height = h;
};

