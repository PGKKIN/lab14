

#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double a[],int N,double b[]){

    for(int i=0;i<N;i++){
        b[0] += a[i];
    }
    b[0] = b[0]/N ;
    double mean = b[0] ;
    for(int j = 0; j < N ; j++){
    b[1] += pow((a[j]-mean),2);
    }
    b[1] = sqrt(b[1]/(N));
    for(int k=0;k<N;k++){
        b[2] +=log10 (a[k]);
    }
    b[2] = b[2]/N ;
    b[2]= pow(10,b[2]);
    for(int m=0;m<N;m++){
        b[3] += (1/a[m]) ;
    }
    b[3] = N/b[3] ;
    b[4]=a[0];
    b[5]=a[0];
    for(int n=0;n<N;n++){
        if(a[n]>b[4])b[4]=a[n];
        
        if(a[n]<b[5])b[5]=a[n];
        
    }
}
