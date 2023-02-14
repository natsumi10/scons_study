#include <iostream>

class Line
{
	public:
	float GetLength()
	{
		return end - begin;
	};

	private:
	float begin;
	float end;
};

int main()
{
	std::cout << "This is main function!" << std::endl;
	return 0;
}