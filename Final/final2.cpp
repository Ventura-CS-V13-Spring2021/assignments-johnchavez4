#include <iostream>
#include <vector>
#include <algorithm>

void count(int arr[], int length) 
{ 
  std::vector<bool> visited(length, false); 
  
  std::cout << "N" << " " << "Count" << std::endl;
  for (int i = 0; i < length; i++) 
  { 
    if (visited[i] == true)
    { 
      continue;
    }
    int count = 1; 
    for (int j = i + 1; j < length; j++) 
    { 
      if (arr[i] == arr[j]) 
      { 
        visited[j] = true; 
        count++; 
      } 
    }
    std::cout << arr[i] << " " << count << std::endl; 
  } 
}