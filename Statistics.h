#define __STATISTICS_H__

/**
 * @class Statistics
 * @brief Klasa `Statistics` zawiera metody do obliczania poszczególnych wskaźników rozkładu Studenta.
 */
class Statistics
{
    
    public:
    /**
     * @brief Konstruktor domyślny        
     */
    Statistics();

    /**
     * @brief Konstruktor kopiujący
     *
     * Tworzy nową sekwencję, która jest kopią podanej sekwencji.
     *     
     */
    Statistics(const Statistics& other);

    /**
     * @brief Destruktor
     *
     * Usuwa sekwencję i zwalnia pamięć.
     */
    ~Statistics();
    
    /**
     * @brief Funkcja oblicza gęstość prawdopodobieństwa rozkładu studenta.
     */
    static double tDistribution(double t, double v);

    /**
     * @brief Funkcja oblicza dystrybuantę rozkładu studenta.
     */
    static double tDistributionCumulative(double t, double v);
     
    /**
     * @brief Funkcja oblicza entropię rozkładu studenta.
     */
    static double tDistributionEntropy(double v);   
};