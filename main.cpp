#include <iostream>
#include <cmath>
#include <limits>
#include <cctype>

using biggies = unsigned long long;

// typedef unsigned long long biggies;


enum class Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};


int main(int argc, char **argv) {
    
    

    return 0;
}

int add_numbers(int first_number, int second_number) {
    return first_number + second_number;
}

void try_data() {
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

    if (age % 2) {

    } else {

    }

    std::clog << "Logging: " << std::endl;
    std::cerr << "Error: " << std::endl;
}

void try_operation() {
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
}

void try_array() {
    double temperatures[366];
    temperatures[3] = 99.0;

    unsigned int height[6] {26, 37, 42, 50, 15, 23};
    int values[] {2, 5, 4};

    for (size_t i {}; i < std::size(height); ++i) {}

    for (auto x : values) {}
}

void try_pointer() {
    int* p_number {new int {83}};

    int int_var {43};
    int* p_number {};
    int* p_int {&int_var};

    std::cout << *p_number << std::endl;

    delete p_number;
    p_number = nullptr;

    for (size_t i {}; i < 1000000; ++i) {
        try {
            int* lots_of_ints {new int[1000000]};
        } catch(std::exception& ex) {
            std::cout << "caught exception: " << ex.what() << std::endl;
        }
    }

    for (size_t i {}; i < 1000000; ++i) {
        int* data = new(std::nothrow) int[1000000];

        if (data != nullptr) {
            std::cout << "data allocated" << std::endl;
        } else {
            std::cout << "data allocation failed" << std::endl;
        }
    }
}

void max_str(const std::string& input1, const std::string input2, std::string& output) {
    if (input1 > input2) {
        output = input1;
    } else {
        output = input2;
    }
}

void try_lambda() {
    auto func = []() {
        std::cout << "Hello" << std::endl;
    };

    func();

    // directly calling
    []() {
        std::cout << "Calling directly" << std::endl;
    }();

    [](double a, double b) {
        std::cout << a + b << std::endl;
    }(12.8, 1.5);

    auto result = [](double a, double b) -> double {
        return a + b;
    }(12.1, 4.4);

    std::cout << "result is " << [](double a, double b) { return a + b; } (4.5, 1.2) << std::endl;

    // capture by value
    int c {45};

    auto func1 = [c]() {
        std::cout << c << std::endl;
    };

    // capture by reference
    auto func2 = [&c]() {
        std::cout << c << std::endl;
    };

    // capture all by value
    auto func3 = [=]() {};

    // capture all by reference
    auto func4 = [&]() {};
}