#include <iostream>

void printTimesIfCorrect(int hoursTensStart, int hoursOnesStart,
                         int minutesTensStart, int minutesOnesStart,
                         int secondsTensStart, int secondsOnesStart,
                         // int hoursTensFinal, // is a *
                         int hoursOnesFinal, int minutesTensFinal,
                         // int minutesOnesFinal, // is a *
                         // int secondsTensFinal, // is a *
                         int secondsOnesFinal, int hoursDelta, int minutesDelta,
                         int secondsDelta) {
    int hoursTemp = hoursTensStart * 10 + hoursOnesStart;
    int minutesTemp = minutesTensStart * 10 + minutesOnesStart;
    int secondsTemp = secondsTensStart * 10 + secondsOnesStart;

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

    bool hoursOnesMatch = hoursTemp % 10 == hoursOnesFinal,
         minutesTensMatch = minutesTemp / 10 == minutesTensFinal,
         secondsOnesMatch = secondsTemp % 10 == secondsOnesFinal;

    if (hoursOnesMatch && minutesTensMatch && secondsOnesMatch) {
        int hoursTensFinal = hoursTemp / 10,
            minutesOnesFinal = minutesTemp % 10,
            secondsTensFinal = secondsTemp / 10;

        std::cout << hoursTensStart << hoursOnesStart << ':' << minutesTensStart
                  << minutesOnesStart << ':' << secondsTensStart
                  << secondsOnesStart << ' ' << hoursTensFinal << hoursOnesFinal
                  << ':' << minutesTensFinal << minutesOnesFinal << ':'
                  << secondsTensFinal << secondsOnesFinal << '\n';
    }
}

void solve(int hoursOnesStart, int minutesTensStart, int secondsOnesStart,
           int hoursOnesFinal, int minutesTensFinal, int secondsOnesFinal,
           int hoursDelta, int minutesDelta, int secondsDelta) {
    for (size_t hoursTensStart = 0; hoursTensStart <= 1; ++hoursTensStart) {
        for (size_t minutesOnesStart = 0; minutesOnesStart <= 9;
             ++minutesOnesStart) {
            for (size_t secondsTensStart = 0; secondsTensStart <= 5;
                 secondsTensStart++) {
                printTimesIfCorrect(
                    hoursTensStart, hoursOnesStart, minutesTensStart,
                    minutesOnesStart, secondsTensStart, secondsOnesStart,
                    hoursOnesFinal, minutesTensFinal, secondsOnesFinal,
                    hoursDelta, minutesDelta, secondsDelta);
            }
        }
    }
}

int main() {

    // по-нататък ще учим как се вкарват сложни данни, затова сега ще ги
    // hardcode-нем в main-а

    int hoursOnesStart = 2, minutesTensStart = 5, secondsOnesStart = 6;
    int hoursOnesFinal = 1, minutesTensFinal = 0, secondsOnesFinal = 2;
    int hoursDelta = 10, minutesDelta = 19, secondsDelta = 26;

    solve(hoursOnesStart, minutesTensStart, secondsOnesStart, hoursOnesFinal,
          minutesTensFinal, secondsOnesFinal, hoursDelta, minutesDelta,
          secondsDelta);
}
