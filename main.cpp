#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include "BMI.h"
using namespace std;
int main(){
	float height,mass,value;
	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr<<"Error!!!"<<endl;
		exit(1);
	}
	ofstream outFile("file.out",ios::out);
	if(!outFile){
		cerr<<"Error!!!"<<endl;
		exit(1);
	}

	BMI bmi;
	while(inFile>>height>>mass){
      	bmi.Setheight(height);
	bmi.Setmass(mass);
	value=bmi.BMIvalue();
	outFile<<fixed<<setprecision(2)<<bmi.BMIvalue()<<"\t"<<bmi.Category(value)<<endl;
	}
inFile.close();
outFile.close();
return 0;
}
