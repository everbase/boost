//  (C) Copyright Gennadiy Rozental 2011-2015.
//  Distributed under the Boost Software License, Version 1.0.
//  (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/test for the library home page.

//[example_code
#define BOOST_TEST_MODULE example
#include <boost/test/included/unit_test.hpp>

void foo( int ) {}

BOOST_AUTO_TEST_CASE( test_case )
{
  int* p = 0;

  BOOST_TEST_PASSPOINT();
  ++p;

  BOOST_TEST_PASSPOINT();
  ++p;

  BOOST_TEST_PASSPOINT();
  foo( *p );
}
//]
