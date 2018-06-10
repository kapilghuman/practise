#include<iostream>
using namespace std;
int sequenceSum(int start, int end, int step)
{
  if(start>end)
  {
      return 0;
  }
  else
  {
      long sum=0;
      long k=start;
        while(k<=end)
        {
            sum=sum+k;
            k=k+step;
            
           //cout<<"value of k"<<k<<"value of sum"<<sum<<endl;
        }
        return sum;
  }
}
int main()
{
    int start,end,step;
    cin>>start>>end>>step;
    cout<<sequenceSum(start, end, step);
}
