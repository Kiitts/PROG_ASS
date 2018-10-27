/*
Johndell S. Kitts
BSCOE 2-1D
Description: Daily Routine(From Waking up until going to school)
*/
#include <iostream>
#include<cmath>

using namespace std;

void menu();
void monday();
void tuesday();
void thursday();
void saturday();
string user;
int time;
int time2;
int hr;

int main()
{
    hr=6;
    time=30;
    time2=00;
    system("cls");
    cout<<"PROGRAMMING ASSIGNMENT 4"<<endl<<"[1]Proceed\t[2]Exit"<<endl;
    cin>>user;
    while((user!="1")&&(user!="2"))
    {
        cout<<"[1]Proceed\t[2]Exit"<<endl;
        cin>>user;
    }
    if (user=="1")
    {
        menu();
    }
    else if (user=="2")
    {
        system("cls");
        return 0;
    }
}

void menu()
{
    system("cls");
    cout<<"Select a day"<<endl<<"[1]Monday\t[2]Tuesday\t[3]Thursday\t[4]Saturday\t[5]Back"<<endl;
    cin>>user;
    while((user!="1")&&(user!="2")&&(user!="3")&&(user!="4")&&(user!="5"))
    {
        cout<<"[1]Monday\t[2]Tuesday\t[3]Thursday\t[4]Saturday\t[5]Back"<<endl;
        cin>>user;
    }
    if(user=="1")
    {
        monday();
    }
    else if(user=="2")
    {
        tuesday();
    }
    else if(user=="3")
    {
        thursday();
    }
    else if(user=="4")
    {
        saturday();
    }
    else if(user=="5")
    {
        main();
    }
}

void monday()
{
    system("cls");
    cout<<"MONDAY"<<endl;
    for(int a=0;a<1;a++)
    {
        cout<<"5:10 Wake up"<<endl;
        for(int b=0;b<1;b++)
        {
            cout<<"5:"<<time<<" Take a bath"<<endl;
            time=(time+10);
            for(int c=0;c<1;c++)
            {
                cout<<"5:"<<time<<" Mundane"<<endl;
            }
            cout<<"5:50 Bihis"<<endl;
        }
        for(int d=0;d<7;d++)
        {
            cout<<hr<<":"<<time2<<" Biyahe"<<endl;
            time2=time2+10;
            if(time2==60)
            {
                time2=0;
                hr++;
            }
        }
        for(int e=0;e<1;e++)
        {
            cout<<"7:00-7:09 Lakad pureza papuntang cea"<<endl;
        }
        for(int f=0;f<1;f++)
        {
            cout<<"7:10 Tambay muna hintay klase"<<endl;
        }
        for(int g=0;g<1;g++)
        {
            cout<<"7:30-10:30 Klase sa Physics"<<endl;
        }
        for(int h=0;h<1;h++)
        {
            cout<<"10:30-1:30 Klase sa Sosyo"<<endl;
        }
        cout<<"1:30 Uwi"<<endl;
    }
    cout<<"[1]Back\t[2]Exit"<<endl;
    cin>>user;
    while ((user!="1")&&(user!="2"))
    {
        cout<<"[1]Back\t[2]Exit"<<endl;
        cin>>user;
    }
    if (user=="1")
    {
        menu();
    }
    else if(user=="2")
    {
        system("cls");
        return;
    }
}

void tuesday()
{
    system("cls");
    hr=hr+6;
    cout<<"TUESDAY"<<endl;
    for(int a=0;a<1;a++)
    {
        cout<<"11:00 Gising"<<endl;
        for(int b=0;b<1;b++)
        {
            cout<<"11:"<<time<<" Ligo"<<endl;
            time=time+10;
            for(int c=0;c<1;c++)
            {
               cout<<"11:"<<time<<" Mundane"<<endl;
               time=time+10;
            }
            cout<<"11:"<<time<<" Bihis"<<endl;
        }
        for(int d=0;d<7;d++)
        {
            cout<<hr<<":"<<time2<<" Biyahe"<<endl;
            time2=time2+10;
            if(time2==60)
            {
                time2=0;
                hr=1;
            }
        }
        for(int e=0;e<1;e++)
        {
            cout<<"1:30 Klase sa History"<<endl;
            cout<<"4:30 Vacant"<<endl;
            cout<<"6:00 Klase sa Programming"<<endl;
        }
        cout<<"9:00 Uwi"<<endl;
    }
    cout<<"[1]Back\t[2]Exit"<<endl;
    cin>>user;
    while ((user!="1")&&(user!="2"))
    {
        cout<<"[1]Back\t[2]Exit"<<endl;
        cin>>user;
    }
    if (user=="1")
    {
        menu();
    }
    else if(user=="2")
    {
        system("cls");
        return;
    }
}

void thursday()
{
    system("cls");
    cout<<"THURSDAY"<<endl;
    for(int a=0;a<1;a++)
    {
        cout<<"5:10 Wake up"<<endl;
        for(int b=0;b<1;b++)
        {
            cout<<"5:"<<time<<" Take a bath"<<endl;
            time=(time+10);
            for(int c=0;c<1;c++)
            {
                cout<<"5:"<<time<<" Mundane"<<endl;
            }
            cout<<"5:50 Bihis"<<endl;
        }
        for(int d=0;d<7;d++)
        {
            cout<<hr<<":"<<time2<<" Biyahe"<<endl;
            time2=time2+10;
            if(time2==60)
            {
                time2=0;
                hr++;
            }
        }
        for(int e=0;e<1;e++)
        {
            cout<<"7:00-7:09 Lakad pureza papuntang cea"<<endl;
        }
        for(int f=0;f<1;f++)
        {
            cout<<"7:10 Tambay muna hintay klase"<<endl;
        }
        for(int g=0;g<1;g++)
        {
            cout<<"7:30-10:30 Klase sa Physics"<<endl;
        }
        for(int h=0;h<1;h++)
        {
            cout<<"10:30-1:30 Klase sa English"<<endl;
        }
        cout<<"1:30 Uwi"<<endl;
    }
    cout<<"[1]Back\t[2]Exit"<<endl;
    cin>>user;
    while ((user!="1")&&(user!="2"))
    {
        cout<<"[1]Back\t[2]Exit"<<endl;
        cin>>user;
    }
    if (user=="1")
    {
        menu();
    }
    else if(user=="2")
    {
        system("cls");
        return;
    }
}

void saturday()
{
    system("cls");
    for(int a=0;a<1;a++)
    {
        cout<<"5:10 Wake up"<<endl;
        for(int b=0;b<1;b++)
        {
            cout<<"5:"<<time<<" Take a bath"<<endl;
            time=(time+10);
            for(int c=0;c<1;c++)
            {
                cout<<"5:"<<time<<" Mundane"<<endl;
            }
            cout<<"5:50 Bihis"<<endl;
        }
        for(int d=0;d<7;d++)
        {
            cout<<hr<<":"<<time2<<" Biyahe"<<endl;
            time2=time2+10;
            if(time2==60)
            {
                time2=0;
                hr++;
            }
        }
        for(int e=0;e<1;e++)
        {
            cout<<"7:00-7:09 Lakad pureza papuntang cea"<<endl;
        }
        for(int f=0;f<1;f++)
        {
            cout<<"7:10 Tambay muna hintay klase"<<endl;
        }
        for(int g=0;g<1;g++)
        {
            cout<<"7:30-10:30 Klase sa Discrete Mathematics"<<endl;
        }
        for(int h=0;h<1;h++)
        {
            cout<<"10:30-11:00 Lakad Cea papuntang Main"<<endl;
            cout<<"11:00-01:00 Klase sa PE"<<endl;
            cout<<"01:00-02:00 Kain"<<endl;
            cout<<"02:00-05:45 Klase sa Differential Calculus"<<endl;
            cout<<"05:45-06:00 Lakad Main papuntang CEA"<<endl;
            cout<<"6:00-09:00 Klase sa Programming"<<endl;
        }
        cout<<"9:00 Uwi"<<endl;
    }
    cout<<"[1]Back\t[2]Exit"<<endl;
    cin>>user;
    while ((user!="1")&&(user!="2"))
    {
        cout<<"[1]Back\t[2]Exit"<<endl;
        cin>>user;
    }
    if (user=="1")
    {
        menu();
    }
    else if(user=="2")
    {
        system("cls");
        return;
    }
}
