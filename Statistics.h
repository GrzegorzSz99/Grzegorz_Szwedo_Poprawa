#define __STATISTICS_H__


class Statistics
{

    public:

    Statistics();


    Statistics(const Statistics& other);


    ~Statistics();

    static double tDistribution(double t, double v);

    static double tDistributionCumulative(double t, double v);

    static double tDistributionEntropy(double v);   
};