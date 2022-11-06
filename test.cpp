#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        if(n%k==0)
        {
            if((n/k)>=1&&n!=k)
            cout<<"YES\n";
            else if(n/k==(n/k)/k)
            {
                if(n==1)
                {
                     cout<<"YES\n";
                }
                cout<<"NO\n";
            }
           
        else
        {
            cout<<"NO\n";
        }
    }
}
	return 0;

}