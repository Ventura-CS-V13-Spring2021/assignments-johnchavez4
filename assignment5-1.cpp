#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
  const int N = 10;
  int number[N], sum;
  float average;
  srand(time(0));

  for (int i = 0; i < N; i++)
  {
    number[i] = rand() % 100;
    sum += number[i];
  }

  average = static_cast<float> (sum)/N;

  std::cout << "Array contents: \n";
  for (int i = 0; i < N; i++)
  {
    std::cout << number[i] << "\t";
  }
  std::cout << std::endl;

  std::cout << "Sum: " << sum << std::endl;
  std::cout << "Average: " << average << std::endl;
}