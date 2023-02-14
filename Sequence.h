#define __SEQUENCE_H__

/**
 * @class Sequence
 * @brief Klasa do obliczania ciągów.
 * 
 * Klasa `Sequence` zawiera metody do obliczania ciągów matematycznych.
 */
class Sequence
{
    
    public:
    /**
     * @brief Konstruktor domyślny        
     */
    Sequence();

    /**
     * @brief Konstruktor kopiujący
     *
     * Tworzy nową sekwencję, która jest kopią podanej sekwencji.
     *     
     */
    Sequence(const Sequence& other);

    /**
     * @brief Destruktor
     *
     * Usuwa sekwencję i zwalnia pamięć.
     */
    ~Sequence();
    /**
     * @brief Metoda wykorzystana do obliczenia pierwszej całki ciągu.
     */
    double FirstIntegral(const std::vector<double>& sequence);
    /**
     * @brief Metoda wykorzystana do obliczenia drugiej całki ciągu.
     */
    double SecondIntegral(const std::vector<double>& sequence);
    
     
    /**
     * @brief Funkcja zwraca wartość pierwszej całki.
     */
    double getFirstIntegral() const;
   
    /**
     * @brief Funkcja zwraca wartość drugiej całki.
     */
    double getSecondIntegral() const;

    /**
     * @brief Funkcja ustawia wartość pierwszej całki.
     */
    void setFirstIntegral(double firstIntegral);

    /**
     * @brief Funkcja ustawia wartość drugiej całki.
     */
    void setSecondIntegral(double secondIntegral);

    /**
     * @brief Funkcja oblicza skomplikowaną całkę.
     */
    double Zintegral(double a, double b, int n, std::function<double(double)> f);
private:
    double m_firstIntegral;
    double m_secondIntegral;
        
};