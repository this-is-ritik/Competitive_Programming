#include <iostream>
using namespace std;
long long int sumofdigits(long long int n)
{
    long long int res=0;
    while(n!=0)
    {
        res+=(n%10);
        n=n/10;
    }
    return res;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long int chef=0,morty=0;
	    while(n--)
	    {
	        long long int a,b;
	        cin>>a>>b;
	        long long int c=sumofdigits(a);
	        long long int m=sumofdigits(b);
	        if(c>m)
	            chef++;
	       else if(m>c)
	            morty++;
	       else
	       {
	           chef++,morty++;
	       }
	    }
	    if(chef>morty)
	        cout<<0<<" "<<chef<<endl;
	   else if(chef<morty)
	    cout<<1<<" "<<morty<<endl;
	   else
	    cout<<2<<" "<<chef<<endl;
	}
	return 0;
}
