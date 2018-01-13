#ifndef VRCS_H
#define VRCS_H
#include "cstdlib"
#include "vector"
#include "iostream"
#include "stdio.h"

using namespace std;


struct Point{
	float x,y,z;
};

/*Classe Locate, possui metodo virtual getLocate*/
class Locate{
private:
	Point points [10];
	int quant;
public:
	Locate();
	void setPoint(Point point);
	virtual void getLocate();
};


/*Classe Movement*/
class Movement {
public:
	Movement();
	char rightThrust();
	char leftThrust();
	char upThrust();
	char downThrust();
	char forwardThrust();
	char backThrust();
};


/*Classe Thrust, herda Movement e faz-se então uso do modificador de acesso public*/
class Thrust : public Movement{
private:
	float gasMass, timeMove, force;
public:
	Thrust();
	float getThrust(float gasMass);
	float getThrust(float timeMove, float force);
};


#endif