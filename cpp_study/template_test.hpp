#ifndef TEMPLATE_TEST_HPP_
#define TEMPLATE_TEST_HPP_

using namespace std;

template <typename T1, typename T2>
T2 sum_2( T1 a, T2 b)
{
	return (a+b);
}

int template_test()
{
	cout << "\nTemplate_test called." << endl;

	double result_1 = sum_2<int, double>(5, 6.5);
	double result_2 = sum_2<int, int>(3, 3);

	cout << "result_1 :" << result_1 << endl;
	cout << "result_2 :" << result_2 << endl;
	return 0;
}

#endif //TEMPLATE_TEST_HPP_