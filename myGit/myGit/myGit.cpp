#include <iostream>
#include<vector>
#include <algorithm>   
using namespace std;
typedef struct Point
{
	float x;
	float y;
}myPoint;
void test01()
{
	int a= max({ 1,2,3 });
	int arr[] = { 1,2,3,4,5,6 };
	int c = *max_element(arr, arr + 6);

	std::cout << a << std::endl << c << std::endl;;
}

int main()
{
	test01();
	int abc;
	cin >> abc;

}
