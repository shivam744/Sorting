//Merge Sort
#include <iostream>
#define Max 100
using namespace std; 
void PrintArray(int *array, int n) {
  for (int i = 0; i < n; ++i)
    cout<<array[i]<<" "<<endl;
}
 
void Merger(int arr[], int lo, int  mi, int hi){
    int *temp = new int[hi-lo+1];//temporary merger array
    int i = lo, j = mi + 1;//i is for left-hand,j is for right-hand
    int k = 0;//k is for the temporary array
    while(i <= mi && j <=hi){
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    //rest elements of left-half
    while(i <= mi)
        temp[k++] = arr[i++];
    //rest elements of right-half
    while(j <= hi)
        temp[k++] = arr[j++];
    //copy the mergered temporary array to the original array
    for(k = 0, i = lo; i <= hi; ++i, ++k)
        arr[i] = temp[k];
 
    delete []temp;
}
void MergeSort(int arr[], int lo, int hi){
    int mid;
    if(lo < hi){
        mid = (lo + hi)/2;
        MergeSort(arr, lo, mid);
        MergeSort(arr, mid+1, hi);
        Merger(arr, lo, mid, hi);
    }
}
 
int main() {
  int n;
  int array[Max];
  cout<<"Enter the no of elements:";
  cin>>n;
  cout<<"\nEnter the values of the elements:-\n";
  for(int i = 0;i<n;i++){
  	cin>>array[i];
  }
  cout<<"Before Merge Sort :"<<endl;
  PrintArray(array, n);
  MergeSort(array,0,n-1);
  cout <<"After Merge Sort :"<<endl;
  PrintArray(array, n);
  return (0);
}
