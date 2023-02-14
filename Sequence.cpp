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
    /**
     * 
     * Metoda `FirstIntegral` oblicza pierwszą całkę dla podanego ciągu i zwraca wynik. Wzór pierwszej całki to:
     * 
     * \f[
     * \int_{a}^{b} f(x) dx
     * \f]
     * 
     * @param sequence Ciąg do obliczenia pierwszej całki.
     * @return Wynik pierwszej całki dla podanego ciągu.
     */

    }
    
    
    Sequence::SecondIntegral(const std::vector<double>& sequence)
    {
    /**
     * @brief Oblicza drugą całkę dla ciągu.
     * 
     * Metoda `SecondIntegral` oblicza drugą całkę dla podanego ciągu i zwraca wynik. Wzór drugiej całki to:
     * 
     * \f[
     * \int_{a}^{b} \int_{c}^{d} f(x, y) dx dy
     * \f]
     * 
     * @param sequence Ciąg do obliczenia drugiej całki.
     * @return Wynik drugiej całki dla podanego ciągu.
     */
    }
    
    Sequence::getFirstIntegral() const
    {
    /**
     * @brief Zwraca wartość pierwszej całki.
     * 
     * Metoda `getFirstIntegral` zwraca wartość pierwszej całki obliczonej dla ciągu.
     * 
     * @return Wartość pierwszej całki.
     */
    }

    Sequence::getSecondIntegral() const
    {
    /**
     * @brief Zwraca wartość drugiej całki.
     * 
     * Metoda `getSecondIntegral` zwraca wartość drugiej całki obliczonej dla ciągu.
     * 
     * @return Wartość drugiej całki.
     */
    }

    Sequence::setFirstIntegral(double firstIntegral)
    {
    /**
     * @brief Ustawia wartość pierwszej całki.
     * 
     * Metoda `setFirstIntegral` ustawia wartość pierwszej całki dla danego ciągu.
     * 
     * @param firstIntegral Wartość pierwszej całki.
     */
    }

    Sequence::setSecondIntegral(double secondIntegral)
    {
     /**
     * @brief Ustawia wartość drugiej całki.
     * 
     * Metoda `setSecondIntegral` ustawia wartość drugiej całki dla danego ciągu.
     * 
     * @param secondIntegral Wartość drugiej całki.
     */
    }

    Sequence::Zintegral(double a, double b, int n, std::function<double(double)> f)
    {
    /**
     * Wzór na całkę jest następujący:
     * \f[
     *   \int_a^b f(x)\,dx \approx \frac{b-a}{n} \sum_{i=1}^n f\left(a + (b-a) \cdot \frac{i-1}{n}\right)
     * \f]
     */
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        double x = a + (b - a) * (i - 1) / n;
        sum += f(x);
    }
    return (b - a) / n * sum;
    }
};

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
