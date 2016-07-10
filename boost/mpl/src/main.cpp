#include <iostream>
#include <boost/mpl/transform.hpp>
#include <boost/mpl/apply.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/vector.hpp>
#include <boost/mpl/placeholders.hpp>

using namespace std;
using namespace boost::mpl::placeholders;
namespace mpl = boost::mpl;

int
main (int argc, char *args[])
{
	cout << mpl::apply<mpl::plus<_1,_2>, 
					mpl::int_<6>,
					mpl::int_<7>
			>::type::value << endl;	
	return 0;
}