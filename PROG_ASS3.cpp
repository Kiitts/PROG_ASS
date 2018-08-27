#include <iostream>
using namespace std;
int main()
{
    float a, b, r;
    char ID, ag;
    bool agn;
    agn=1;
    while(agn=1)
    {
        cout<<"Here where you can calculate the increase percentage or decrease percentage."<<endl<<endl;
        cout<<"What do you want to use? I/D/B/P/A (Type I for increase percentage or D for decrease percentage or"<<endl<<"B for discount percentage calculator (new price after discount). or P for percentage difference/error."<<endl<<"or A for adding a percentage value to a real value)"<<endl;
        cin>>ID;
        while ((ID!='I')&&(ID!='i')&&(ID!='D')&&(ID!='d')&&(ID!='A')&&(ID!='a')&&(ID!='P')&&(ID!='p')&&(ID!='D')&&(ID!='d'))
        {
            cout<<"I/D/B/P/A"<<endl;
            cin>>ID;
        }
        if((ID=='I')||(ID=='i'))
        {
            cout<<"Type the original number"<<endl;
            cin>>a;
            cout<<"Type the new number"<<endl;
            cin>>b;
            r=((b-a)/a)*100;
            cout<<"The result is: "<<r<<"%";
        }
        else if((ID=='B')||(ID=='b'))
        {
            cout<<"Type the percent discount"<<endl;
            cin>>a;
            cout<<"Type the prize"<<endl;
            cin>>b;
            r=b-((a*0.01)*b);
            cout<<"The new prize is: "<<r<<"$";
        }
        else if ((ID=='P')||(ID=='p'))
        {
            cout<<"Type the experimental value"<<endl;
            cin>>a;
            cout<<"Type the Accepted value"<<endl;
            cin>>b;
            r=((a-b)/b)*100;
            cout<<"The percentage error/difference is: "<<r<<"%";
        }
        else if((ID=='A')||(ID=='a'))
        {
            cout<<"Type the value"<<endl;
            cin>>a;
            cout<<"Type the percentage value you want to add"<<endl;
            cin>>b;
            r=((b*0.01)*a)+a;
            cout<<"The new value is: "<<r;
        }
        else
        {
            cout<<"Type the original number"<<endl;
            cin>>a;
            cout<<"Type the new number"<<endl;
            cin>>b;
            r=((a-b)/a)*100;
            cout<<"The result is: "<<r<<"%";
        }
        cout<<endl<<"Do you want to use again?(Y/N)"<<endl;
        cin>>ag;
        while(ag!='Y'&&(ag!='y')&&(ag!='N')&&(ag!='n'))
        {
            cout<<"(Y/N)"<<endl;
            cin>>ag;
        }
        switch(ag)
        {
        case 'Y':
        case 'y':
            continue;
            break;
        case 'N':
        case 'n':
            agn=0;
            return 0;
            cout<<endl;
        }

    }
return 0;
}
