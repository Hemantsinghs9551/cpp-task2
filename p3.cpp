#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age of voter:\n";
    cin>>age;
    if (age>=18)
    {
        cout<<"voter are eligible for voting.\n";
    }
    else
    {
        cout<<"voter is not eligible for voting.\n";
    }
    
}