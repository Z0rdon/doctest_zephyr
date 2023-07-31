# Copyright 2023 
#
# SPDX-License-Identifier: MIT

if(CONFIG_DOCTEST)
  zephyr_include_directories(${ZEPHYR_BASE}/../modules/lib/doctest/doctest)

  zephyr_library()
  zephyr_library_sources(
    src/doctest_zephyr.cpp
    )
endif()
