#include <iostream>
#include <string>
using namespace std;

class BMI{
	public:
		void Setheight(float h);
		float Getheight();
		void Setmass(float m);
		float Getmass();
		float BMIvalue();
		string Category(float value); 
		

	private:
		float height;
		float mass;
		float value;
};
