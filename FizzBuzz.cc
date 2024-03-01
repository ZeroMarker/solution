#include <iostream>
<<<<<<< HEAD
#include <string>
=======
>>>>>>> d8a1399c2416c72b2ff2938d4f814f82828a9189

auto fizz_buzz(int a) -> std::string {
    if(a % 15 == 0) {
        return "FizzBuzz";
    }
    else if(a % 3 == 0) {
        return "Fizz";
    }
    else if(a % 5 == 0) {
        return "Buzz";
    }
    return std::to_string(a);
}

int main(void) {
    int num;
    std::cin >> num;
    num = 16;
    std::cout << fizz_buzz(num) << std::endl;
    return 0;
}