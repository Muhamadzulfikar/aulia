#include <bits/stdc++.h>
using namespace std;

int getRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    int **a = new int*[1000];
    int **i = new int*[1000];
    int **ai = new int*[1000];

    for (int k=0; k<1000; k++) {
        a[k] = new int[1000];
        i[k] = new int[1000];
        ai[k] = new int[1000];
    }

    ofstream outputA;
	outputA.open("a.txt");

    ofstream outputI;
    outputI.open("i.txt");

    ofstream outputAi;
    outputAi.open("ai.txt");

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

            int total = 0;
            for (int m = 0; m <j; m++) {
                total += a[j][k] * i[k][m];
            }

            ai[j][k] = total;

            outputAi<<a[j][k]<<" ";
        }

        outputA<<endl;
        outputI<<endl;
        outputAi<<endl;
    }

    outputA.close();
    outputI.close();
    outputAi.close();

    for (int k=0; k<1000; i++) {
        delete[] a[k];
        delete[] i[k];
        delete[] ai[k];
    }

    delete[] a;
    delete[] i;
    delete[] ai;
    

    return 0;
}