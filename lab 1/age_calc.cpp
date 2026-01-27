#include <iostream>
using namespace std;
int main()
{
   int d1,d2,m1,m2,y1,y2,rd,rm,ry;
   cout<<"enter 1 birthday:";
   cin>>d1>>m1>>y1;
   cout<<"enter 2 birthday:";
   cin>>d2>>m2>>y2;
   if(y1>y2)
   ry=y1-y2;
   else
   ry=y2-y1;
   if(d1>d2)
   rd=d1-d2;
   else
   rd=d2-d1;
   if(m1>m2)
   rm=m1-m2;
   else
   rm=m2-m1;
   cout<<rd<<"days "<<rm<<"months "<<ry<<"years";
}