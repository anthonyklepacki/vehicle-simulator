// VehicleSim.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cmath>
#include "vehicle.h"





// Example drawing the interference pattern of light
// falling on a grid with n slits and ratio r of slit
// width over distance between slits.





// This is the main program
int main()
{
	float dt = 0.01;
	float distance = 0;
	float maxDistance = 100;

	vehicle *racecar = new vehicle;
	racecar->mass = 400;
	racecar->acceleration = 0.0;
	racecar->eng->throttlePosition = 1.0;
	
	while (distance < maxDistance) {
		racecar->update(dt);
		distance += racecar->speed*dt;
		racecar->report_params();
	}


	std::cin;
}



