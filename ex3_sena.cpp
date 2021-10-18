#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstdio>
#include <ostream>

void imprimir (std::vector<int> vetor) {
    std::cout << "[ ";
    for (int i = 0; i < vetor.size(); i++){
        if (i == vetor.size() - 1){
            std::cout << vetor[i] << "]" << "\n";
            break;
        }std::cout << vetor[i] << " ";
    }
}

std::vector<int> sozinhos (std::vector<int>& vetor){
    std::vector<int> sozinhos {};
    for (int i = 0; i < vetor.size(); i++) {
        for (int j = 0; j < vetor.size(); j++){
            if(abs(vetor[j]) == abs(vetor[i]))
                sozinhos.push_back(vetor[j]);
        }
    }return sozinhos;
}


int main () {

    std::vector<int> vetor {1, 3, 4, 2, 4, -1, 3};
    imprimir(sozinhos(vetor));

    return 0;
}