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
}