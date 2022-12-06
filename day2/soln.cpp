/*
 * A very unorthodox way of solving this problem
*/

#include <map>
#include <string>
#include <fstream>
#include <iostream>


enum StringValue {
    AX,
    AY,
    AZ,
    BX,
    BY,
    BZ,
    CX,
    CY,
    CZ
};

static std::map<std::string, StringValue> mapVal;

void Initialize() {
    mapVal["A X"] = AX;
    mapVal["A Y"] = AY;
    mapVal["A Z"] = AZ;
    mapVal["B X"] = BX;
    mapVal["B Y"] = BY;
    mapVal["B Z"] = BZ;
    mapVal["C X"] = CX;
    mapVal["C Y"] = CY;
    mapVal["C Z"] = CZ;
}

int main(void) {
    Initialize();

	std :: ifstream file("input.txt");
    std :: string line;
	int score1 = 0, score2 = 0;
	while (std::getline(file, line)) {
        switch (mapVal[line])
        {
        case AX:
            score1 += 4; // 1 + 3
            score2 += 3; // 3 + 0
            break;
        case AY:
            score1 += 8; // 2 + 6
            score2 += 4; // 1 + 3 
            break;
        case AZ:
            score1 += 3; // 3 + 0
            score2 += 8; // 2 + 6
            break;
        case BX:
            score1 += 1; // 1 + 0
            score2 += 1; // 1 + 0 
            break;
        case BY:
            score1 += 5; // 2 + 3
            score2 += 5; // 2 + 3
            break;
        case BZ:
            score1 += 9; // 3 + 6
            score2 += 9; // 3 + 6 
            break;
        case CX:
            score1 += 7; // 1 + 6
            score2 += 2; // 2 + 0
            break;
        case CY:
            score1 += 2; // 2 + 0
            score2 += 6; // 3 + 3
            break;
        case CZ:
            score1 += 6; // 3 + 3
            score2 += 7; // 1 + 6
            break;
        default:
            break;
        }
    }
    std :: cout << "Part1: " << score1 << std :: endl;
    std :: cout << "Part2: " << score2;
	file.close();
}