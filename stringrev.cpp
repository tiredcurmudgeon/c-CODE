#include<iostream>
using namespace std;

int strlen(char a[])
{
  int count=0;
  for(int i=0; a[i] !=NULL; i++)
  {
    count++;
  }
  return count;
}
int main()
{
  char str[20],a[20];
  int n;
  cout<<"enter string"<<endl;
  cin.getline(str,20);

  n=strlen(str);
  cout<<n;
  for(int i=0; str[i] != NULL; i++)
  {
    a[n-i]=str[i];
  }
  cout<<a;
  return 0;
}
