#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE "baseTestModule"
#include <boost/test/unit_test.hpp>
#include <my_class.hpp>

BOOST_AUTO_TEST_CASE( test_constructors )
{
  my_class mycl0(3);
  BOOST_CHECK_EQUAL(mycl0.getNum(),3);
}
