#include <iostream>
using namespace std;
#include<math.h>
#include<string.h>
int main() 
{int c,k,i,f;
char a[40],b[40],d[40];
cin>>a>>k;
d=strrev(a);
f=strlen(d);
for(i=k;i>0;i--)
{
cout<<a[i];
}
return 0;
}
