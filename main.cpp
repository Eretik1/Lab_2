#include <iostream>
#include <vector>

int main(int, char**){
    int input_1;
    std::vector <int> output_1(10);
    output_1.push_back(1);
    std::cin >> input_1; 
    for(int i = 1; i <= input_1; i++){ 
        output_1[0] *= i;
    }
    int res = output_1.capacity();
    std::cout << res << std::endl;
    std::cout << "";
    return 0;
}
