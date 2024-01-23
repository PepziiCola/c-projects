#include <stdio.h>

int main() {
    unsigned long long youtubeViews = 4939239;
    double money = 4.52;
    double altitudeInMeters = 11582.4;
    signed char temperature = 44;
    unsigned char cliffordsAge = 12;

    printf("The YouTube video has %llu views.\n", youtubeViews);
    printf("I have a measly $%.2lf left to m yname in my bank account.\n", money);
    printf("The SouthWest plane is currently %.2lf meters above sea level.\n", altitudeInMeters);
    printf("In Stephenville, the current temperature is %c degrees in Fahrenheit.\n", temperature);
    printf("Clifford, the big red dog, is %c years old.\n", cliffordsAge);

    return 0; 
}
