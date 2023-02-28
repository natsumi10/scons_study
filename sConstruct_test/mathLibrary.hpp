//mathLibrary.hpp

/* "#pragma once" is the Include guard.
* We use this to avoid compiler include this code many times.
* If you don't use "pragma once", you can use #ifndef as follows.
* (Note that #ifndef way is not the same way.)
*/


#ifndef MATHLIBRARY_HPP_
#define MATHLIBRARY_HPP_

namespace mathLibrary
{
	class mathTest
	{
		public:
		mathTest(double a, double b);

		double Add();

		private :
		double a;
		double b;
	};
}

#endif //MATHLIBRARY_HPP_