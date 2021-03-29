/*
Selection sort

Algorithm
1.Create a variable which will store the minimum value (lets call it min_index).
2.Start a loop that runs n times where n is the size of the array.
3.As the loop starts consider the i'th element/current element as the smallest
  element.
  ie. for first iteration the first element is smallest element
      for the second iteration the second element is considered the current
      minimum element and so on.
  so for each iteration we assign min_index=i

4.Now start another loop inside the current loop to check if there is any element
  smaller than the current min.
  if there is we store its index in min_index and continue to next iteration to
  check if there is any further lower value.
  as this loop ends we get the index of the smallest element

5.Now till now we were assuming the first element of this iteration to be the
  smallest element so now we swap the two elements and move to the next iteration
  of the outer loop
 process repeats till the array is sorted.

 Read code to undertsand better.

*/
#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
  int temp{};
  temp=x;
  x=y;
  y=temp;
}


void selection_sort(int arr[],int n)
{
  int min_index{};

  for(int i=0;i<n;i++)
  {
      min_index=i;
      for(int j=i+1;j<n;j++)
      {
        if(arr[j]<arr[min_index])
            min_index=j;
      }
      swap(arr[i],arr[min_index]);
    }
}

int main()
{
  cout<<"Enter the number of elements : ";
  int n{};
  cin>>n;
  int arr[n];
  cout<<"Enter the elements : ";
  ///////////////////////////////////////
  for(int i=0;i<n;i++)
  {
  cin>>arr[i];
  }

  selection_sort(arr,n);

  cout<<"The sorted array is : "<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }

  return 0;
}
