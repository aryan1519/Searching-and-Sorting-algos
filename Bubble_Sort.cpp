/*
Algorithm

1.In bubble sort we consider two elements at a time at indices say j and j+1
2.If element at j is greater than j+1 then we swap the elements and move to the
next value of j
else we move on to the next value of j
3.On going through the entire loop we are able to make the largest element reach
the last position
Now we have to repeat the process till index 0 to just before the last element.
Hence after each loop we repeat the process for one one less iteration
So we need to have an outer loop too to repeat the process.

So the outer loop needs to run n-1 times where n is the size of the array and the
inner loop runs accordingly one iteration less after every cycle.

See code for better understanding.
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


void bubble_sort(int arr[],int n)
{
  for(int i=0;i<=n-1;i++)
  {
    for(int j=0;j<n-1-i;j++)
    {
      if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    }
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

  bubble_sort(arr,n);

  cout<<"The sorted array is : "<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }

  return 0;
}
