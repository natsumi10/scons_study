//mathLibrary.h

/* "#pragma once" is the Include guard.
* We use this to avoid compiler include this code many times.
*/


#ifndef MATHLIBRARY_H_
#define MATHLIBRARY_H_

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

#endif //MATHLIBRARY_H_