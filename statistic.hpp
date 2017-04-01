#include <cassert>
#include <cstdio>
#include <iostream>
#include <cstdbool>
#include <cmath>

using namespace std;

namespace Statistic {
	struct Box {
		int a, b;
		Box (int a_, int b_) : a(a_), b(b_) {}
		Box () {}
		bool operator= (const Box&);
	};

	bool operator< (const Box&, const Box&);
	bool operator> (const Box&, const Box&);
	bool operator<= (const Box&, const Box&);
	bool operator>= (const Box&, const Box&);
	bool operator== (const Box&, const Box&);

	template <typename T> 
	const T& max (const T &lhs, const T &rhs) {
		return ((lhs > rhs) ? lhs : rhs);
	}

	template <typename T> 
	const T& min (const T &lhs, const T &rhs) {
		return ((lhs <= rhs) ? lhs : rhs);
	}

	template <typename T>
	T statistic (T* arr, size_t n, size_t k) {
		T tmp;
		for (int i = 0; i < n - 1; i++)
	        for (int j = 0; j < n - i - 1; j++) {
	            tmp = max(arr[j], arr[j + 1]);
	            if (tmp == arr[j]) {
	           		tmp = arr[j];
	            	arr[j] = arr[j + 1];
	            	arr[j + 1] = tmp;
	           	}
	        }
	    return arr[k];
	}
}