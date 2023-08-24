// stonewt.h -- definicja klasy Stonewt
#ifndef STONEWT_H_
#define STONEWT_H_
namespace STONEWT
{
    class Stonewt
    {
        public:
        enum Mode {
            STONE = 0,
            POUNDS_IN_INT,
            POUNDS_IN_DOUBLE,
            STONES_AND_LEFT_LBS_IN_INT,
            STONES_AND_LEFT_LBS_IN_DOUBLE 
            };
        private:
            enum {Lbs_per_stn = 14}; // liczba funtów na kamień
            int stone;               // masa w całych kamieniach
            double pds_left;         // reszta w funtach
            double pounds;           // masa w funtach
            Mode mode; 
        public:
            Stonewt(double lbs);          // konstruktor dla funtów
            Stonewt(int stn, double lbs); // konstruktor dla kamieni i funtów
            Stonewt();                    // konstruktor domyślny
            ~Stonewt();
            friend Stonewt operator+(const Stonewt & s1, const Stonewt & s2); 
            friend Stonewt operator-(const Stonewt & s1, const Stonewt & s2);
            friend Stonewt operator*(const Stonewt & s1, int n); 
            friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
            explicit operator int() const; 
            int Stone_to_Int() const {return int (pounds + 0.5);}; 
            int PoundsLeft_to_Int() const {return int (pds_left + 0.5);};
            void vStoneInIntMode();
            void vPoundsInIntMode();
            void vPoundsInDoubleMode();
            void vStonesInIntAndPoundsInDoubleMode();
            void vStonesAndPoundsInDoubleMode();
    };
} // namespace STONEWT


#endif

