#include <bits/stdc++.h>
using namespace std;

int getRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    int a[1000][1000];
    int i[1000][1000];
    int ai[1000][1000];

    ofstream outputA;
	outputA.open("a.txt");

    ofstream outputI;
    outputI.open("i.txt");

    ofstream outputAI;
    outputAI.open("ai.txt");

    for(int j=0; j<1000; j++) {
        for (int k=0; k<1000; k++) {
            a[j][k] = getRandomNumber(0, 1);

            outputA<<a[j][k]<<" ";

            if (j == k) {
                i[j][k] = 1;
            } else {
                i[j][k] = 0;
            }

            outputI<<i[j][k]<<" ";
        }

        outputA<<endl;
        outputI<<endl;
    }

    outputA.close();
    outputI.close();
    outputAI.close();

    return 0;
}