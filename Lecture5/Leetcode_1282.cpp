#include<iostream>
using namespace std;

int subtractProductAndSum(int n) 
{
        int prod=1,sum=0;
        while(n!=0)
        {
            int rem=n%10;
            prod=prod*rem;
            sum+=rem;
            n=n/10;
        }
        int ans=prod-sum;
        return ans;
}

int main()
{
  int n;
  cin>>n;
  cout<<subtractProductAndSum(n)<<endl;
}
  