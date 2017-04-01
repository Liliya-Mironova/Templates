#include "statistic.hpp"

using namespace Statistic;

bool Statistic::Box::operator= (const Box& other) {
	a = other.a;
	b = other.b;
}

bool Statistic::operator< (const Box& lhs, const Box& rhs) {
	return lhs.a < rhs.a;
}

bool Statistic::operator> (const Box& lhs, const Box& rhs) {
	return lhs.a > rhs.a;
}

bool Statistic::operator<= (const Box& lhs, const Box& rhs) {
	return !(lhs > rhs);
}

bool Statistic::operator>= (const Box& lhs, const Box& rhs) {
	return !(lhs < rhs);
}

bool Statistic::operator== (const Box& lhs, const Box& rhs) {
	return (lhs.a == rhs.a) && (lhs.b == rhs.b);
}