#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <stdbool.h>
#include <stdio.h>
#include <cblas.h>
#include <math.h>
#include "test.h"
#include <cstring>


using namespace std;

int main(){

    int nelements;
    int stat;

    nelements = 3;
    stat=222;

    char* elements[nelements-1][10] = {"Li", "P", "S"};
    cout<<*elements[0];


    char p1[50]; strcpy(p1, "Li.35twist-35twist.nn-02900");
    char p2[50]; strcpy(p2, "P.35twist-35twist.nn-02900");
    char p3[50]; strcpy(p3, "S.35twist-35twist.nn-02900");


    cout<<stat;
    aenet_init(nelements, *elements, &stat);
    cout<<stat;
    aenet_load_potential(1, p1, &stat);
    cout<<stat;    
    aenet_load_potential(2, p2, &stat);
    cout<<stat;
    aenet_load_potential(3, p3, &stat);
    cout<<stat;
    aenet_print_info();

    cout<<stat;      
    cout<<"\n";      

    
    aenet_final(&stat);
    
    //cout<<stat;      
    //cout<<"\n";      
}