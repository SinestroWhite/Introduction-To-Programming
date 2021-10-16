#include <iostream>

void printTimesIfCorrect(unsigned short hoursTensStart,
                         unsigned short hoursOnesStart,
                         unsigned short minutesTensStart,
                         unsigned short minutesOnesStart,
                         unsigned short secondsTensStart,
                         unsigned short secondsOnesStart,
                         // unsigned short hoursTensFinal, // is a *
                         unsigned short hoursOnesFinal,
                         unsigned short minutesTensFinal,
                         // unsigned short minutesOnesFinal, // is a *
                         // unsigned short secondsTensFinal, // is a *
                         unsigned short secondsOnesFinal,
                         unsigned short hoursDelta,
                         unsigned short minutesDelta,
                         unsigned short secondsDelta) {
    unsigned short hoursTemp   = hoursTensStart * 10 + hoursOnesStart;
    unsigned short minutesTemp = minutesTensStart * 10 + minutesOnesStart;
    unsigned short secondsTemp = secondsTensStart * 10 + secondsOnesStart;

    secondsTemp += secondsDelta;
    if (secondsTemp >= 60) {
        minutesTemp += secondsTemp / 60;
        secondsTemp %= 60;
    }

    minutesTemp += minutesDelta;
    if (minutesTemp >= 60) {
        hoursTemp += minutesTemp / 60;
        minutesTemp %= 60;
    }

    hoursTemp += hoursDelta;
    if (hoursTemp > 12) {
        hoursTemp %= 12;
    }

    bool hoursOnesMatch   = hoursTemp % 10 == hoursOnesFinal,
         minutesTensMatch = minutesTemp / 10 == minutesTensFinal,
         secondsOnesMatch = secondsTemp % 10 == secondsOnesFinal;

    if (hoursOnesMatch && minutesTensMatch && secondsOnesMatch) {
        unsigned short hoursTensFinal   = hoursTemp / 10,
                       minutesOnesFinal = minutesTemp % 10,
                       secondsTensFinal = secondsTemp / 10;

        std::cout << hoursTensStart   << hoursOnesStart   << ':'
                  << minutesTensStart << minutesOnesStart << ':'
                  << secondsTensStart << secondsOnesStart << ' '
                  << hoursTensFinal   << hoursOnesFinal   << ':'
                  << minutesTensFinal << minutesOnesFinal << ':'
                  << secondsTensFinal << secondsOnesFinal << '\n';
    }
}

void solve(unsigned short hoursOnesStart,
           unsigned short minutesTensStart,
           unsigned short secondsOnesStart,
           unsigned short hoursOnesFinal,
           unsigned short minutesTensFinal,
           unsigned short secondsOnesFinal,
           unsigned short hoursDelta,
           unsigned short minutesDelta,
           unsigned short secondsDelta) {
    for (size_t hoursTensStart = 0; hoursTensStart <= 1; ++hoursTensStart) {
        for (size_t minutesOnesStart = 0; minutesOnesStart <= 9; ++minutesOnesStart) {
            for (size_t secondsTensStart = 0; secondsTensStart <= 5; secondsTensStart++) {
                printTimesIfCorrect(
                    hoursTensStart,   hoursOnesStart,   minutesTensStart,
                    minutesOnesStart, secondsTensStart, secondsOnesStart,
                    hoursOnesFinal,   minutesTensFinal, secondsOnesFinal,
                    hoursDelta,       minutesDelta,     secondsDelta);
            }
        }
    }
}

int main() {

    // по-нататък ще учим как се вкарват сложни данни, затова сега ще ги hardcode-нем в main-а

    unsigned short hoursOnesStart = 2, minutesTensStart = 5, secondsOnesStart = 6;
    unsigned short hoursOnesFinal = 1, minutesTensFinal = 0, secondsOnesFinal = 2;
    unsigned short hoursDelta = 10,    minutesDelta = 19,    secondsDelta = 26;

    solve(hoursOnesStart, minutesTensStart, secondsOnesStart,
          hoursOnesFinal, minutesTensFinal, secondsOnesFinal,
          hoursDelta,     minutesDelta,     secondsDelta);
}
