#include <iostream>
#include <fstream>

int main(void) {
	std :: ifstream file("input.txt");
    std :: string line;
	int sum = 0, total = 0;
	while (std::getline(file, line)) {
        if ( !line.empty() ) {
            int value = stoi(line);
            sum += value;
        } else {
            if ( sum > total )
                total = sum;
            sum = 0;
        }
    }
    std :: cout << total << "\n";
	file.close();
}