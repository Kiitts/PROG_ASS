#include <iostream>
using namespace std;


int main()
{

    bool fact;
    char trulse;

    cout <<"Is world wide web is shorter and easier to pronounce than www?"<<endl<<"(type y = yes or type n = no)"<<endl;
    cin>>trulse;
    cout << endl;


    string fname, lname, mi;
	cout<<"Enter your first name then press enter"<<endl;
	cin>>fname;
	cout<<"Enter your middle initial then press enter"<<endl;
	cin>>mi;
	cout<<"And enter your last name press enter."<<endl;
	cin>>lname;
	cout << endl;

	float area, radius, pi;
	cout<<"Enter a radius of a circle to get the area."<<endl;
	cin>>radius;
	pi = 3.1415926;
	area = pi*(radius*radius);
	cout<< endl;

	char favletter;
	cout<<"Enter your favorite letter!"<<endl;
	cin>>favletter;
	cout<<endl;

	if (trulse == 'y')
    {
        fact = true;
    }
    else
    {
        fact = false;
    }


	cout<<"RESULTS!"<<endl;
	cout<<"Your name is: "<<lname<<", "<<fname<<" "<<mi<<endl;
	cout<<"If the number showed below is 1 = true if 0 = false"<<endl<<"This is the result in the 1st question."<<endl<< fact<<endl;
	cout<<"The radius you have given is " <<radius<<endl<<"And the area of the circle is: "<<area<<endl;
	cout<<"Your favorite letter is: "<<favletter<<endl;



	return 0;

}
