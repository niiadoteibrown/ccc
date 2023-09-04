#include <iostream>
#include <cmath>
#include <limits>
#include <cctype>

using biggies = unsigned long long;

// typedef unsigned long long biggies;


enum class Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};


int main(int argc, char **argv) {
    unsigned long age {99UL};
    unsigned short price {10u};

    long long distance {15'000'000LL};

    Day today {Day::Tuesday};

    biggies big_one {};

    unsigned int color {0x0f0d0e};
    int mask {0xFF00FF00};
    unsigned long value {0xDEAD1u};

    long width {4};
    long length {5};
    long area {width * length};

    std::clog << "Logging: " << std::endl;
    std::cerr << "Error: " << std::endl;

    switch(int count = 4; count) {
        case 0:
            std::cerr << "cannot be 0";
            [[fallthrough]];
        case 1:
            break;
        default:
            std::clog << "Log";
            break;
    }

    std::cout << "Hello" << std::endl;

    std::string name {};
    std::cout << "What is your name: ";
    //std::cin >> name;
    //std::getline(std::cin, name);

    double angle {1.5};
    double cosine_value {std::cos(angle)};

    double value1 {10.9};
    double value2 {15.9};

    int whole_number {static_cast<int>(value1) + static_cast<int>(value2)};

    // std::cout << "Maximum double value: " << std::numeric_limits<double>::max() << std::endl;

    char yes {'Y'};
    wchar_t wch {L'Z'};
    char16_t letter {u'B'};
    char32_t letter32 {U'B'};

    if (std::isupper(yes)) {}

    if (age % 2) {

    } else {

    }

    auto m {10};

    for (size_t i {}; i < 5; ++i) {}

    float angle {60.0f};
    const float pi {3.14f};
    const float pi_deg {180.0f};

    float tangent {std::tan(pi * angle / pi_deg)};

    int first_number {12};
    int second_number {9};

    int sum {first_number + second_number};

    std::cout << sum << std::endl;

    bool is_valid {true};

    char no = is_valid ? 'N' : 'Y';

    std::cout << std::boolalpha << is_valid;

    // arrays
    double temperatures[366];
    temperatures[3] = 99.0;

    unsigned int height[6] {26, 37, 42, 50, 15, 23};
    int values[] {2, 5, 4};

    for (size_t i {}; i < std::size(height); ++i) {}

    for (auto x : values) {}

    // pointers
    int int_var {43};
    int* p_number {};
    int* p_int {&int_var};

    return 0;
}

int add_numbers(int first_number, int second_number) {
    return first_number + second_number;
}