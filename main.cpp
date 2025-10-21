#include <iostream>
#include <string>

bool IsKPeriodic ( const std::string &str, int K ) {
    if ( K <= 0 || str.length ( ) % K != 0 ) {
        return false;
    }

    std::string pattern = str.substr ( 0, K );
    for ( int i = K; i < str.length ( ); i += K ) {
        if ( str.substr ( i, K ) != pattern ) {
            return false;
        }
    }

    return true;
}

int main ( ) {
    setlocale ( LC_ALL, "RUS" );

    std::cout << ((IsKPeriodic ( "abcabcabcabc", 3 )) ? "Строка переодична" : "Строка хаотична") << std::endl;
    std::cout << ((IsKPeriodic ( "kvdhahuvfga", 3 )) ? "Строка переодична" : "Строка хаотична") << std::endl;

    return 0;
}
