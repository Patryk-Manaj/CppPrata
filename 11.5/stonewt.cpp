// stonewt.cpp -- implementacje metod klasy Stonewt
#include <iostream>
using std::cout;
#include "stonewt.h"

namespace STONEWT
{
// konstruuje obiekt Stonewt z wartości typu double
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn; // dzielenie całkowite
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// konstruuje obiekt Stonewt z liczby kamieni i funtów
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn +lbs;
}

Stonewt::Stonewt() // konstruktor domyślny, zeruje obiekt
{
    stone = pounds = pds_left = 0;
}
Stonewt::~Stonewt() // destruktor
{
}

Stonewt operator+(const Stonewt & s1, const Stonewt & s2)
{
    Stonewt sum; 
    sum.pounds = s1.pounds + s2.pounds;
    sum.stone = sum.pounds / sum.Lbs_per_stn;
    sum.pds_left = sum.pounds - sum.stone * sum.Lbs_per_stn;
    return sum;
} 

Stonewt operator-(const Stonewt & s1, const Stonewt & s2)
{
    Stonewt diff;
    diff.pounds = s1.pounds - s2.pounds;
    diff.stone = int (diff.pounds / diff.Lbs_per_stn);
    diff.pds_left = diff.pounds - diff.stone * diff.Lbs_per_stn; 
    return diff;
}

Stonewt operator*(const Stonewt & s1, int n)
{
    Stonewt multip;
    multip.pounds = s1.pounds * n;
    multip.stone = multip.pounds / multip.Lbs_per_stn;
    multip.pds_left = multip.pounds - multip.stone * multip.Lbs_per_stn;
    return multip; 
    
}

std::ostream & operator<<(std::ostream & os, const Stonewt & s)
{
    if (s.mode == Stonewt::STONE)
    {
        os << "Number of stones: " << s.stone << std::endl;
    }
    else if (s.mode == Stonewt::POUNDS_IN_INT)
    {
        os << "Number of pounds in integer: " << s.Stone_to_Int() << std::endl;
    }
    else if (s.mode == Stonewt::POUNDS_IN_DOUBLE)
    {
        os << "Number of pounds in double: " << s.pounds << std::endl;
    }
    else if (s.mode == Stonewt::STONES_AND_LEFT_LBS_IN_INT)
    {
        os << "Stones: " << s.stone << " and lbs: " << s.PoundsLeft_to_Int() << std::endl; 
    }
    else if(s.mode == Stonewt::STONES_AND_LEFT_LBS_IN_DOUBLE)
    {
        os << "Stones: " << s.stone << " and lbs: " << s.pds_left << std::endl;
    }
    else 
        os << "Unknown mode"; 

    return os; 
}
Stonewt::operator int () const
{
    return int (pounds + 0.5);
}
void Stonewt::vStoneInIntMode()
{
    mode = STONE;
}

void Stonewt::vPoundsInIntMode()
{
    mode = POUNDS_IN_INT;
}

void Stonewt::vPoundsInDoubleMode()
{
    mode = POUNDS_IN_DOUBLE; 
}

void Stonewt::vStonesInIntAndPoundsInDoubleMode()
{
    mode = STONES_AND_LEFT_LBS_IN_INT; 
}

void Stonewt::vStonesAndPoundsInDoubleMode()
{
    mode = STONES_AND_LEFT_LBS_IN_DOUBLE; 
}

}

