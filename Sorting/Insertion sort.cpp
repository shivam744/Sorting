#include<iostream>
using namespace std;
#define MAX 100
 int main()
{
    int i,j,n,temp,a[MAX];
    cout<<"Enter the number of elements (not more than 100):";
    cin>>n;
    cout<<"\nEnter the values of elements :-\n";
 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
 
        while((temp<a[j])&&(j>=0))
        {
            a[j+1]=a[j];    
            j=j-1;
        }
 
        a[j+1]=temp;    
    }
 
    cout<<"\nAfter Sorting:-\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
 
    return 0;
}
