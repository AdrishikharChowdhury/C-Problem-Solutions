/*   Convert this program to C++

*   change to C++ io

*   change to one line comments

*   change defines of constants to const

*   change array to vector<>

*   inline any short function

*/
#include <iostream>
#include <vector>

const int N = 40;

inline void sum(int& p, const std::vector<int>& d)
{
  p = 0;
  for (int i = 0; i < d.size(); ++i)
    p += d[i];
}

int main()
{
  int accum = 0;
  std::vector<int> data(N);

  for (int i = 0; i < N; ++i)
    data[i] = i;

  sum(accum, data);

  std::cout << "sum is " << accum << std::endl;

  return 0;
}

