// SPDX-License-Identifier: MIT
// Copyright (c) 2023 

//#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define DOCTEST_CONFIG_IMPLEMENT
#define DOCTEST_THREAD_LOCAL
#include "doctest.h"

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
