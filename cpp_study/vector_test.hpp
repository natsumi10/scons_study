#ifndef VECTOR_TEST_HPP_
#define VECTOR_TEST_HPP_

#include <iostream>
#include <vector>

using namespace std;



void vector_test(){
	vector<int> v2(5);
	vector<int> v3(5,0); // 0,0,0,0,0
	vector<int> v4{1,2,3,4,5}; // 1,2,3,4,5
	vector<int> v5 = {1,2,3,4,5}; // 1,2,3,4,5

	for(auto i=0; i<v5.size(); i++)
	{
		cout << "v5[" << i << "] = " << v5[i] << endl; 
	}
}

#endif // VECTOR_TEST_HPP_