#include<iostream>
#include <string>
#include <cstdlib>
#include "BMI.h"
using namespace std;
void BMI::Setheight(float h){
    height=h/100;
}
float BMI::Getheight(){
    return height;
}
void BMI::Setmass(float m){
    mass=(m>0)?m:0;
}
float BMI::Getmass(){
    return mass;
}
float BMI::BMIvalue(){
   if(mass==0){
	exit(0);
}
    value=mass/height/height;
    return value;
}
string BMI::Category(float value){
	string a;
	if(value<15.0)
	{
		a="Very severely underweight";
		return a;
	}
	else if(value<16.0)
	{
		a="Severely underweight";
		return a;
	}
	else if(value<18.5)
	{
		a="Underweight";
		return a;
	}
	else if(value<25.0)
        {
                a="Normal";
		return a;
        }
	else if(value<30.0)
        {
                a="Overweight";
		return a;
        }
	else if(value<35.0)
        {
                a="Obese Class I (Moderately obese)";
		return a;
        }
	else if(value<40.0)
        {
                a="Obese Class II (Severely obese)";
		return a;
        }
	else
        {
                a="Obese Class III (Very severely obese)";
		return a;
        }
}
