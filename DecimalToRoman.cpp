// Can you see my changes now ???

#include<iostream>
using namespace std;
int value(char c)
{
    
    char alpha[]={'I','V','X','L','C','D','M'};
    int arr[]={1,5,10,50,100,500,1000};
    int val;
    for(int i=0;i<7;i++)
    {
        if(alpha[i]==c)
        {
            val=arr[i];
            break;
        }
    }
    return val;
}
int main()
{
    string t;
    cin>>t;
    long p,sum=0;
    int arr[t.size()];
    for(int i=0;i<t.size();i++)
    {
        arr[i]=value(t[i]);
    }
    for(int i=0;i<t.size()-1;i++)
    {
        if(arr[i]>=arr[i+1])
        {
            p=arr[i];
        }
        else
        {
            p=-arr[i];
        }
        sum=sum+p;
    }
    //Kapil
    //weird comment added
    sum=sum+arr[t.size()-1];
    cout<<sum;
}
