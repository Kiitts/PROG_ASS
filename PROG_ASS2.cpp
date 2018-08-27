#include<iostream> // supports input and output function
#include<conio.h> // stands for Console Input Output which has some function like getch() the function i used in the last
#include<cmath> // declares a set of functions to compute common mathematical operations and transformations
#include<string> // In order to use the string data type
using namespace std;

int main()
{
    bool trulse; //this will be the answer of my last question
    char yn; // this is the thing i'll use to be the answer of a person using this program in my last question
    int hn;
    string fn, ln, mi, choose;
    float x, y, r;
    cout<<"Please type any number 1-11"<<endl;
    cin>>hn;
    cout<<endl;
    /*while (cin.fail())
    {
        cout<<"Not a real number, please input 1-11."<<endl;
        cin.clear();
        cin.ignore();
        cin>>hn;
    }*/
    while ((hn<1) || (hn>11) || (cin.fail())) // this will loop the question if the answer given is lower than 1
    {
        cout<<"Sorry please type only number 1-11."<<endl;
        cin.clear();
        cin.ignore();
        cin>>hn;
        cout<<endl;
    }
    cin.clear();
    cout<<"Thank you for registering your number! This program will help you to calculate the base and the power of a number or to get the square root of the number!\n(Press enter to continue)...";
    cin.ignore();
    cin.get();
    cout<<endl;

    cout<<"Type your 'FULLNAME' first."<<endl;
    cin>>fn>>mi>>ln;
    cout<<endl;

    cout<<"Now what do you want to use? To get the product of the base and power(type pow)? "<<endl<<"or a squareroot of a number(type sqr)?"<<endl;
    cin>>choose;
    cout<<endl;

    while ((choose != "pow")&&(choose != "sqr")) // this will loop the question if the user type other word than pow and sqr
    {
        cout<<"Please type only pow or sqr."<<endl;
        cin>>choose;
        cout<<endl;
    }
    if (choose=="pow") // if they put pow the program for getting the value of base and exponent.
    {
        cout<<"Please type the base number (x) because x^y"<<endl;
        cin>>x;
        cout<<endl;
        while (cin.fail())
        {
            cout<<"Please type a number."<<endl;
            cin.clear();
            cin.ignore();
            cin>>x;
            cout<<endl;
        }
        cout<<"Please type the exponent (y) because x^y"<<endl;
        cin>>y;
        cout<<endl;
        while (cin.fail())
        {
            cout<<"Please type a number."<<endl;
            cin.clear();
            cin.ignore();
            cin>>y;
            cout<<endl;
        }
        r=pow(x,y);
        cout<<x<<"^"<<y<<"="<<r;
    }
    else // this will happen if they put sqr in the question for getting the value of the squareroot of the number
    {
        cout<<"Please type the number you want to get the squareroot"<<endl;
        cin>>x;
        while (cin.fail())
        {
            cout<<"Please type a number."<<endl;
            cin.clear();
            cin.ignore();
            cin>>x;
            cout<<endl;
        }
        r=sqrt(x);
        if(x<0)
        {
            cout<<"The square root of "<<x<<" = Imaginary number"<<endl;
        }
        else
        {
            cout<<"The square root of "<<x<<"="<<r;
        }
    }
    cout<<endl;
    cout<<"Thank you for using this program. ";
    cout<<ln<<", "<<fn<<" "<<mi<<endl<<"And your registered number is: "<<hn<<endl<<endl;
    cout<<"Is this program is useful? (Y=Yes / N=No)"<<endl;
    cin>>yn;
    cout<<endl;
    while ((yn != 'Y')&&(yn != 'N'))
    {
        cout<<"Please type only (Y/N)."<<endl;
        cin>>yn;
    }
    if(yn == 'Y')
    {
        trulse= true;
    }
    else
    {
        trulse=false;
    }
            cout<<endl<<"You rate if the program is useful as "<<boolalpha<<trulse; //boolalpha helps bool to be inserted by their textual representation
            cout<<endl<<"Thank you.";
    getch();// is a function that is used to hold the output screen for a while in the sense till any key is pressed
    return 0;

}
