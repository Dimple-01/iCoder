#include<iostream>
using namespace std;
float area(float r);
int area(int a);
int area(int l,int m,int n);




main()
{
    float r;
    cout<<"enter radius of circle ";
    cin>>r;
    cout<<"area of circle is "<<area(r);
    int a;
     cout<<"\nenter side of square ";
     cin>>a;
cout<<"area of square is "<<area(a);
int l,m,n;
cout<<"\nenter sides of cuboid ";
cin>>l>>m>>n;
cout<<"vol of cuboid is "<<area(l,m,n);
}
float area(float r)
{
    return(r*r*3.14);
}
int area(int a)
{
    return(a*a);
}
int area(int l,int m,int n)
{
    return(l*m*n);
}

