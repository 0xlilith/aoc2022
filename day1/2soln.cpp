#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>

int main(void) {
	std :: ifstream file("input.txt");
    std :: string line;
	int sum = 0, total = 0, vsum = 0;
    std::vector< int > arr;
	while (std::getline(file, line)) {
        if ( !line.empty() ) {
            int value = stoi(line);
            sum += value;
        } else {
            arr.push_back(sum);
            if ( sum > total )
                total = sum;
            sum = 0;
        }
    }
    std :: sort(arr.begin(), arr.end(), std :: greater<int>());
    for(int i=0; i<3;i++){
       vsum+=arr[i];
    }
    std :: cout << vsum;
	file.close();
}