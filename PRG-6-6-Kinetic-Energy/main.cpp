//
//  main.cpp
//  PRG-6-6-Kinetic-Energy
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//
//  In physics, an object that is in motion is said to have kinetic energy. The following
//  formula can be used to determine a moving object's kinetic energy:
//
//  KE = 1/2 * m * v^2
//
//  The variables in the formula are as follows: KE is the kinetic energy, m is the object's
//  mass in kilograms, and v is the object's velocity, in meters per second.
//  Write a function named kineticEnergy that accepts an object's mass (in kilgrams)
//  and velocity (in meters per second) as arguments. The function should return the
//  amount of kinetic energy that the object has. Demonstrate the function by calling it in
//  a program that asks the user to enter values for mass and velocity.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float getMass();
float getVelocity();
void kineticEnergy(float, float);

int main()
{
    float fltObjectMass,
          fltObjectVelocity;
    
    // Single decimal point of precision
    cout << setprecision(1) << fixed << showpoint;
    
    fltObjectMass = getMass();
    
    fltObjectVelocity = getVelocity();
    
    kineticEnergy(fltObjectMass, fltObjectVelocity);
    
    return 0;
}

float getMass()
{
    float fltMass;
    
    cout << "Please enter the object's mass:\n";
    cin >> fltMass;
    
    while(!cin || fltMass <= 0.0f || fltMass > 1000.0f)
    {
        cout << "Please enter a valid float value\n"
        << "(greater than 0.0 kg and less than 1000.0 kg):\n";
        cin.clear();
        cin.ignore();
        cin >> fltMass;
    }
    
    return fltMass;
}

float getVelocity()
{
    float fltVelocity;
    
    cout << "Please enter the object's velocity:\n";
    cin >> fltVelocity;
    
    while(!cin || fltVelocity < -1000.0f || fltVelocity > 1000.0f)
    {
        cout << "Please enter a valid float value\n"
        << "(greater than -1000.0 kg and less than 1000.0 kg):\n";
        cin.clear();
        cin.ignore();
        cin >> fltVelocity;
    }
    
    return fltVelocity;
}

void kineticEnergy(float fltObjectMass, float fltObjectVelocity)
{
    float fltObjectKineticEnergy;
    
    fltObjectKineticEnergy = 0.5 * fltObjectMass * pow(fltObjectVelocity, 2.0f);
    
    cout << "With a mass of " << fltObjectMass << " kg\n"
    << "and a velocity of " << fltObjectVelocity << " m/s\n"
    << "the kinetic energy is " << fltObjectKineticEnergy;
}

