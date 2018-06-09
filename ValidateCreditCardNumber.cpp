#include <string> 
#include<iostream>
using namespace std;
class Kata {
  public:
  static bool validate(long long int n) {
      
      string str1=to_string(n);
      long sum=0;
      
      long nDigits = str1.size();
      int modu=nDigits % 2;
      cout<<" value of modu is "<<modu<<" ";
      if(modu == 0)
      {
       for(long i=0;i<nDigits;i++)
          {
              int p;
              if(i%2 == 1)
              {
               p=(str1[i]-'0')*2;
                
                  if(p>9)
                  {
                    p=p-9;
                  }
                //  cout<<"value at "<<i<<"is"<<p;
                  sum=sum+p;
              //cout<<"value of sum is "<<sum<<endl;
              }
              else
              {
                  p=str1[i]-'0';
                //  cout<<"value at "<<i<<"is"<<p;
                  sum=sum+p;
              //cout<<"value of sum is "<<sum<<endl;
              }
          }
          
           bool ans=(sum%10);
          if(ans==0)
          {
              cout<<"true";
          }
          else
          {
              cout<<"false";
          }
      }
      else
      {
         for(long i=0;i<nDigits;i++)
          {
              int p;
              if(i%2 == 1)
              {
               p=(str1[i]-'0')*2;
                
                  if(p>9)
                  {
                    p=p-9;
                  }
                  //cout<<"value at "<<i<<"is"<<p;
                  sum=sum+p;
              //cout<<"value of sum is "<<sum<<endl;
              }
              else
              {
                  p=str1[i]-'0';
                //  cout<<"value at "<<i<<"is"<<p;
                  sum=sum+p;
              //cout<<"value of sum is "<<sum<<endl;
              }
          }
          
           bool ans=(sum%10);
          if(ans==0)
          {
              cout<<"true";
          }
          else
          {
              cout<<"false";
          }
      }
      
  }
};
int main()
{
    Kata a;
    long long n;
    cin>>n;
    a.validate(n);
}
