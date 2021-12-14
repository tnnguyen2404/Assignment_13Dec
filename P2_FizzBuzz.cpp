#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;



int main()
{
    for (int i = 1; i <= 100; i++) {
        std::string ans;

        ans += (i % 3 == 0) ? "Fizz" : "";
        ans += (i % 5 == 0) ? "Buzz" : "";
        ans += (ans.empty()) ? std::to_string(i) : "";

        cout << ans << endl;

    }
    return 0;

}