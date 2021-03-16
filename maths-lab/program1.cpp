#include <bits/stdc++.h>
using namespace std;
#define N 3 
 

void add(int A[][N], int B[][N], int C[][N]) 
{ 
    int i, j; 
    for (i = 0; i < N; i++) 
        for (j = 0; j < N; j++) 
            C[i][j] = A[i][j] + B[i][j]; 

}

void sub(int A[][N], int B[][N], int D[][N]) 
{ 
    int i, j; 
    for (i = 0; i < N; i++) 
        for (j = 0; j < N; j++) 
            D[i][j] = A[i][j] -  B[i][j]; 

}

void mul(int A[][N], int B[][N], int E[][N]) 
{ 
    int i, j, k; 
    for (i = 0; i < N; i++) 
        for (j = 0; j < N; j++){
            E[i][j] = 0;
            for(k = 0; k < N; k++){
                E[i][j] += A[i][k] * B[k][j];
            } 
        } 
} 


int main() 
{ 
    int A[N][N] = { {102, 25, 99}, 
                    {53, 76, 49}, 
                    {259, 321, 72}}; 
 
    int B[N][N] = { {44, 765, 123}, 
                    {89, 66, 12}, 
                    {126, 259, 29}}; 
 
    int C[N][N];
    int D[N][N];
    int E[N][N];
    int i, j; 
    add(A, B, C); 
    sub(A, B, D); 
    mul(A, B, E); 
 
    cout << "Addition matrix is " << endl; 
    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
        cout << C[i][j] << " "; 
        cout << endl;
    } 

    cout << "Subtraction matrix is " << endl; 
    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
        cout << D[i][j] << " "; 
        cout << endl;
    } 
    
    cout << "Multiplication matrix is " << endl; 
    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
        cout << E[i][j] << " "; 
        cout << endl;
    } 

 
    return 0; 
} 