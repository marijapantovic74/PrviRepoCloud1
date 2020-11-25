#include <iostream>
#include <string>

using namespace std;
typedef struct {
    string ime;
    int poeni;
}Takmicar;

bool Bolji(Takmicar t1,Takmicar t2)
{
    if(t1.poeni>t2.poeni)
        return true;
    else if(t1.poeni==t2.poeni)
        return t1.ime<t2.ime;
    else
        return false;
    }

int main()
{
  int n;
  cin>>n;
  string ime[50000];
  Takmicar t[50000];
  for(int i=0;i<n;i++)
  {
    cin>>t[i].ime>>t[i].poeni;
  }
  for(int i=0; i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(!Bolji(t[i],t[j]))
        {
         swap(t[i],t[j]);
        }
    }
   }
  for(int i=0;i<n;i++)
  {
    cout<<t[i].ime<<" "<<t[i].poeni<<endl;
  }
return 0;
}
