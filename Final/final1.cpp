#include <iostream>

int getNumDiv(int arr[],int N, int length)
{
    int count = 0;

    for(int i = 0; i < length; i++)
    {
        if(N % arr[i] == 0)
        { 
            count++;
        }
    }
    return count -1;
}

int main()
{
  int arr[] = {1, 2, 4, 6, 10, 24};       
  int length = sizeof(arr)/sizeof(arr[0]);

  std::cout << "Array Contents:\n";
  for(int i = 0; i < length; i++)
  {
    std::cout << arr[i] << "\t";
  }
  std::cout << std::endl;

  int max = 0;
  int index, num;

  for(int i = 0; i < length; i++)
  {
    num = getNumDiv(arr, arr[i], length);

    if(i == 0)
    {
      max = num;
      index = i;
    }
    else if(max < num)
    {
      max = num;
      index = i ;
    }
  }
  std::cout << "Element with greatest number of divisible elements: " << arr[index] << std::endl;
  std::cout << "Number of divisible elements: " << max << std::endl;
}