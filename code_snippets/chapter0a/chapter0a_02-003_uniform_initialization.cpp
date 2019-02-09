///////////////////////////////////////////////////////////////////////////////
//  Copyright Christopher Kormanyos 2019.
//  Distributed under the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt
//  or copy at http://www.boost.org/LICENSE_1_0.txt)
//

// chapter0a_02-001_uniform_initialization.cpp

#include <iostream>

int n { 123 };

float f { 3.1415926535'8979323846F };

int main()
{
  std::cout << "n: " << n << std::endl;
  std::cout << "f: " << f << std::endl;
}
