// SPDX-License-Identifier: MIT
// Copyright (c) 2023 

// Doctest configuration --------------------
#define DOCTEST_CONFIG_IMPLEMENT
#define DOCTEST_THREAD_LOCAL

#ifdef CONFIG_DOCTEST_USE_EXCEPTIONS
#else // CONFIG_DOCTEST_USE_EXCEPTIONS
#define DOCTEST_CONFIG_NO_EXCEPTIONS
#endif // CONFIG_DOCTEST_USE_EXCEPTIONS

// Includes --------------------
#include "doctest.h"

// Implementations --------------------
extern "C"
#ifdef CONFIG_DOCTEST_MAIN_VOID_RETURN
void main(void)
#else // CONFIG_DOCTEST_MAIN_VOID_RETURN
  int main(void)
#endif // CONFIG_DOCTEST_MAIN_VOID_RETURN
{
  const int argc_ = 3;
  const char *argv_[] = {
    "exe",
    "-d",
    "-s"};
  (void)doctest::Context(argc_, argv_).run();

#ifndef CONFIG_DOCTEST_MAIN_VOID_RETURN
  return 0;
#endif //; CONFIG_DOCTEST_MAIN_VOID_RETURN
}
