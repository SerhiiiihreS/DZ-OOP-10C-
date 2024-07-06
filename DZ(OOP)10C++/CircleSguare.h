#pragma once
#include "Sguare.h"
#include "Circle.h"
#include<iostream>
using namespace std;
class CircleSguare :public Sguare,public Circle
{
	int radius;
	int side;
public:
	CircleSguare(int r, int s) :Sguare(s), Circle(r) {};
	void Сontrol() {
		if ((radius * 2) < side) {
			cout << "The circle is included in the task square!" << endl;
		}
		else {
			cout << "The circle is larger, the condition is not met!" << endl;

		}
	}
};

