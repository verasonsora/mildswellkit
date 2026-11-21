#include <string>
#include <vector>

void swap_values() {
    int a = 5, b = 11;
    int tmp = a;
    a = b;
    b = tmp;
    (void)a;
    (void)b;
}

void count_spaces() {
    std::string text = "a b  c   d";
    int spaces = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') spaces += 1;
    }
    (void)spaces;
}

void product_range() {
    int acc = 1;
    for (int i = 1; i <= 5; ++i) acc *= i;
    (void)acc;
}

void square_value() {
    int x = 12;
    int square = x * x;
    (void)square;
}

extern "C" int quiet_canyon();
extern "C" void cedar_ripple();
extern "C" void still_haven();

int main() {
    swap_values();
    count_spaces();
    product_range();
    square_value();
    cedar_ripple();
    still_haven();
    return quiet_canyon();
}
