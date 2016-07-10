#include <iostream>
#include <boost/mpl/apply.hpp>
#include <boost/mpl/placeholders.hpp>
#include <boost/mpl/vector.hpp>
#include <boost/mpl/vector_c.hpp>
#include <boost/mpl/inserter.hpp>
#include <boost/mpl/transform.hpp>
#include <boost/mpl/front.hpp>
#include <boost/mpl/plus.hpp>

using namespace std;
using namespace boost::mpl::placeholders;
namespace mpl = boost::mpl;

int main()
{
    typedef mpl::vector<
                mpl::vector_c<int, 1, 2, 3>,
                mpl::vector_c<int, 4, 5, 6>,
                mpl::vector_c<int, 7, 8, 9>
            > s;
    typedef mpl::transform<
                s,
                mpl::front<_>,
                mpl::inserter<
                    mpl::int_<0>,
                    mpl::plus<_,_>
                >
            >::type sum;
    cout << sum::value << endl;
    return 0;
}

