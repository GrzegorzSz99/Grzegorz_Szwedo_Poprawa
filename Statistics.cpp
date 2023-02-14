#include <iostream>
#ifndef STATISTICS_H
#define STATISTICS_H
#include "Statistics.h"
#include <cmath>



    
    Statistics::tDistribution(double t, double v) {
    /**
     * @brief Funkcja oblicza gęstość prawdopodobieństwa rozkładu Studenta.
     * @param t Zmienna t.
     * @param v Liczba stopni swobody.
     * @return Wartość gęstości prawdopodobieństwa.
     *
     * Wzór na gęstość prawdopodobieństwa rozkładu Studenta:
     * \f[
     * f(t) = \frac{\Gamma(\frac{v + 1}{2})}{\sqrt{v\pi}\Gamma(\frac{v}{2})} \left(1 + \frac{t^2}{v}\right)^{-\frac{v + 1}{2}}
     * \f]
     * gdzie \f$\Gamma\f$ oznacza funkcję gamma.
     */
    
        double num = std::tgamma((v + 1) / 2);
        double den = std::sqrt(v * M_PI) * std::tgamma(v / 2);
        return num / den * std::pow(1 + t * t / v, -(v + 1) / 2);
    
    }

    Statistics::tDistributionCumulative(double t, double v) {
    /**
     * @brief Funkcja oblicza dystrybuantę rozkładu Studenta.
     * @param t Zmienna t.
     * @param v Liczba stopni swobody.
     * @return Wartość dystrybuanty.
     *
     * Wzór na dystrybuantę rozkładu Studenta:
     * \f[
     * F(t) = \int_{-\infty}^{t} f(x) dx = \frac{\beta(\frac{v}{2},\frac{1}{2})}{2}
     * \f]
     * gdzie \f$\beta\f$ oznacza funkcję beta.
     * Formuła na entropię rozkładu studenta:
     c*/
        return 0.5 * std::betainc(0.5, v / 2, v / (v + t * t));
    }

    Statistics::tDistributionEntropy(double v)
    {
    /**
     * @brief Funkcja oblicza entropię rozkładu studenta.
     * @param v Liczba stopni swobody.
     * @return Wartość entropii.
     *
     * Wzór na entropię rozkładu studenta:
     * \f[
     * H(X) = \frac{v + 1}{2} + \ln(\sqrt{v\pi}) + \ln(\Gamma(\frac{v}{2}))
     * \f]
     */
    return (v + 1) / 2 + std::log(std::sqrt(v * M_PI)) + std::log(std::tgamma(v / 2));
    }
    }


#endif // STATISTICS_H