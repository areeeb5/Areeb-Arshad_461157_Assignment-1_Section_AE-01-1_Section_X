#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout<<"What's the Burnout Velocity? (In Km/s): ";
	double V;
	cin>>V;
	cout<<"What's the Height of the rocket? (in Km)?: ";
	double Height;
	cin>>Height;
	cout<<"What's the angle of burnout? (in Degress): ";
	double Angle;
	cin>>Angle;
	cout<<endl;
	
	
	double Re = 6.4 * pow(10,6);
	Height = Height * pow(10,3);
	double Rb = Re + Height;
	double k = sqrt(3.986 * pow(10,14));
	Angle = Angle * 3.14 / 180;
	V = V * pow(10,3);
	double h = Rb * V * cos(Angle);
	double KE = pow(V,2)/2;
	double PE = pow(k,2)/Rb;
	double H = KE - PE;

	double e = sqrt(1 + (2 * pow(h,2) * H)/pow(k,4));

	double Apogee = pow(h,2)/(pow(k,2) * (1 - e));
	double Perigee = pow(h,2)/(pow(k,2) * (1 + e));
	double a = pow(h,2)/(pow(k,2) * (1 - pow(e,2)));
	double b = a * sqrt(1 - pow(e,2));
	double AreaC= 3.14159 * Apogee;
	double AreaE = 3.14159 * a * b;
	double Ccircle = 2 * 3.14159 * a;
	double Cellipse = 2 * 3.14159 * a * sqrt(1 - pow(e,2));
	double TimeC = (2 * AreaC)/h;
	double TimeE = (2 * AreaE)/h;
	cout<<"The eccentricity is: "<<e<<endl<<endl;
	
	if (fabs(e -0.0) < 1e-6)
	{
		cout<<"The orbit is Circular."<<endl;
		cout<<"Area of the Corbit is: "<<AreaC<<" m^2"<<endl;
		cout<<"Radius of the orbit is: "<<a<<" m"<<endl;
		cout<<"Orbital Circumference is: "<<Ccircle<<" m"<<endl;
		cout<<"Time Period of orbit: "<<TimeC/3600<<" Hr(s)";
	}
	else if (e > 0 && e < 1)
	{
		cout<<"The orbit is eliptical."<<endl;
		cout<<"The area of the eliptical orbit is: "<<AreaE<<" m^2"<<endl;
		cout<<"Radius of the orbit is variable as it's an ellipse."<<endl;
		cout<<"Apogee is: "<<Apogee<<" m"<<endl;
		cout<<"Perigee is: "<<Perigee<<" m"<<endl;
		cout<<"Orbital Circumference is: "<<Cellipse<<" m"<<endl;
		cout<<"Time Period of Orbit: "<<TimeE/3600<<" Hr(s)";
	}
	else if ((int)round(e) == 1)
	{
		cout<<"The Spaceship would fy off into space as the orbit is a Parabola."<<endl;
		cout<<"Area, Radius, Time Period & Orbital Circumference can't be found as the orbit won't be completed."<<endl;
	}
	else if (e > 1)
	{
		cout<<"The Spaceship would fy off into space as the orbit is Hyperbolic"<<endl;
		cout<<"Area, Radius, Time Period and Orbital Circumference can't be found as the orbit won't be completed."<<endl;
	}
	
}