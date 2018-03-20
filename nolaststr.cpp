#include <iostream>
using namespace std;
#include<math.h>
#include<string.h>
int main() 
{int c,k,i;
char a[40];
cin>>a>>k;
c=strlen(a);
while(k<=c)
{
cout<<a[k];
k++;
}
return 0;
}
