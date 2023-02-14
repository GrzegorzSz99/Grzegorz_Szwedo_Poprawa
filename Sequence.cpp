#include <iostream>
#include "sequence.h"
#include <cmath>
using namespace std;

#include <vector>

    Sequence::Sequence()
    {

    }

    Sequence::Sequence(const Sequence& other)
    {

    }

    Sequence::~Sequence()
    {

    }

    Sequence::FirstIntegral()
    {


    }


    Sequence::SecondIntegral(const std::vector<double>& sequence)
    {

    }

    Sequence::getFirstIntegral() const
    {

    }

    Sequence::getSecondIntegral() const
    {

    }

    Sequence::setFirstIntegral(double firstIntegral)
    {

    }

    Sequence::setSecondIntegral(double secondIntegral)
    {

    }

    Sequence::Zintegral(double a, double b, int n, std::function<double(double)> f)
    {

    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        double x = a + (b - a) * (i - 1) / n;
        sum += f(x);
    }
    return (b - a) / n * sum;
    }
