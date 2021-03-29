//Binary Search can only be applied when the elements are sorted
/*
let the element to be found out be x , the start of array be called start and end be called end ie. index= 0 is start
and index= size-1 is end initially.
Algorithm
1.Sort the array
2.Find the middle element( let it be mid)
3.Check if x is greater than or less than mid
4.If x>mid we need to consider sub array to the right of mid
  for this now start= mid+1 and end remais same i.e size-1
  else
  if x<mid we need to consider sub array to the left of mid
  for this now start remains the same i.e 0 and end=mid-1
5.repeat from step 2.
*/
#include <iostream>

using namespace std;

int binary_search(int arr[],int x,int size)
{
  int mid{},start{0},end{size-1};
  mid=(start+end)/2;

  while(start<=end)
  {
    if(x==arr[mid])
      return mid;
    else if(x<arr[mid])
        end=mid-1;
    else if(x>arr[mid])
      start= mid+1;
    mid=(start+end)/2;
  }
  return -1;
}

int  main()
{
  cout<<"enter the size of the array : ";
  int size{};
  cin>>size;
  int arr[size];
  cout<<"\nenter the elements of the array : "<<endl;
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
  cout<<"enter the element to be searched : "<<endl;
  int x{};
  cin>>x;
  int result = binary_search(arr,x,size);
  if(result == -1)
    cout<<"element is not in the array "<<endl;
  else
    cout<<"the index of the required element is : "<<result;

  return 0;
}
