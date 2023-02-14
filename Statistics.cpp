#include <iostream>
#ifndef STATISTICS_H
#define STATISTICS_H
#include "Statistics.h"
#include <cmath>




    Statistics::tDistribution(double t, double v) {


        double num = std::tgamma((v + 1) / 2);
        double den = std::sqrt(v * M_PI) * std::tgamma(v / 2);
        return num / den * std::pow(1 + t * t / v, -(v + 1) / 2);

    }

    Statistics::tDistributionCumulative(double t, double v) {

        return 0.5 * std::betainc(0.5, v / 2, v / (v + t * t));
    }

    Statistics::tDistributionEntropy(double v)
    {

    	return (v + 1) / 2 + std::log(std::sqrt(v * M_PI)) + std::log(std::tgamma(v / 2));
    }
    }


#endif // STATISTICS_H