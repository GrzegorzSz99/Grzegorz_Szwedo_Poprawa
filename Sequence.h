#define __SEQUENCE_H__


class Sequence
{

    public:

    Sequence();

    Sequence(const Sequence& other);

    ~Sequence();

    double FirstIntegral(const std::vector<double>& sequence);

    double SecondIntegral(const std::vector<double>& sequence);

    double getFirstIntegral() const;

    double getSecondIntegral() const;

    void setFirstIntegral(double firstIntegral);

    void setSecondIntegral(double secondIntegral);

    double Zintegral(double a, double b, int n, std::function<double(double)> f);
private:
    double m_firstIntegral;
    double m_secondIntegral;

};