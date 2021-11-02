#include<iostream>
int main(){
  //declare and initialise an array of five integers
  int arr[]={77, 9, 23, 98, 22};
  float res;
  //res=(float)(arr[0]+arr[1]+arr[2]+arr[3]+arr[4])/5;
  res=(arr[0]+arr[1]+arr[2]+arr[3]+arr[4]);
  res/=5;
  std::cout<<"Array is "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<std::endl;
  std::cout<<"Average of all the elements of the array is :"<<res<<std::endl;
  return(0);
}
