#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void initialisation_tavli(int tavli[4][13]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 13; j++){
            tavli[i][j] = 0; 
        }
    }
    // 1 pour blanc
    // 2 pour rouge
    //Première ligne
    tavli[0][0] = 1; 
    tavli[1][0] = 5; 
    tavli[0][4] = 2; 
    tavli[1][4] = 3; 
    tavli[0][6] = 2; 
    tavli[1][6] = 5; 
    tavli[0][11] = 1; 
    tavli[1][11] = 2; 
    //deuxième ligne
    tavli[2][0] = 2;
    tavli[3][0] = 5;
    tavli[2][4] = 1;
    tavli[3][4] = 3;
    tavli[2][6] = 1;
    tavli[3][6] = 5;
    tavli[2][11] = 2;
    tavli[3][11] = 2;
}

int generator_dice(int lower, int upper){
    int num = (rand() % (upper - lower + 1)) + lower;  
    return num; 
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

void picture_generator(int tavli[4][13]){
    int a = tavli[1][0]; 
    int b = tavli[1][1]; 
    int c = tavli[1][2]; 
    int d = tavli[1][3]; 
    int e = tavli[1][4]; 
    int f = tavli[1][5]; 
    int g = tavli[1][6]; 
    int h = tavli[1][7]; 
    int i = tavli[1][8]; 
    int j = tavli[1][9]; 
    int k = tavli[1][10]; 
    int l = tavli[1][11]; 
    int m = tavli[1][12];

    int a2 = 0; 
    int b2 = 0; 
    int c2 = 0; 
    int d2 = 0; 
    int e2 = 0; 
    int f2 = 0; 
    int g2 = 0; 
    int h2 = 0; 
    int i2 = 0; 
    int j2 = 0; 
    int k2 = 0; 
    int l2 = 0; 
    int m2 = 0; 

    int maximum = max(max(max(max(max(max(max(max(max(max(max(max(a, b), c), d), e), f), g), h), i), j), k), l), m);

    for (int w = 0; w < maximum; w++){
        if((a2 < a) && (tavli[0][0] == 1) ){
            printf("O"); 
        }
        if((a2 < a) && (tavli[0][0] == 2) ){
            printf("X"); 
        }
        if(tavli[0][0] == 0){
            printf("|"); 
        }
        if((a2 >= a)&&(tavli[0][0] == 2)){
            printf("|"); 
        }
        if((a2 >= a)&&(tavli[0][0] == 1)){
            printf("|"); 
        }
        a2++; 

        if((b2 < b) && (tavli[0][1] == 1) ){
            printf("O"); 
        }
        if((b2 < b) && (tavli[0][1] == 2) ){
            printf("X"); 
        }
        if(tavli[0][1] == 0){
            printf("|"); 
        }
        if((b2 >= b)&&(tavli[0][1] == 2)){
            printf("|"); 
        }
        if((b2 >= b)&&(tavli[0][1] == 1)){
            printf("|"); 
        }
        b2++;

        if((c2 < c) && (tavli[0][2] == 1) ){
            printf("O"); 
        }
        if((c2 < c) && (tavli[0][2] == 2) ){
            printf("X"); 
        }
        if(tavli[0][2] == 0){
            printf("|"); 
        }
        if((c2 >= c)&&(tavli[0][2] == 2)){
            printf("|"); 
        }
        if((c2 >= c)&&(tavli[0][2] == 1)){
            printf("|"); 
        }
        c2++;

        if((d2 < d) && (tavli[0][3] == 1) ){
            printf("O"); 
        }
        if((d2 < d) && (tavli[0][3] == 2) ){
            printf("X"); 
        }
        if(tavli[0][3] == 0){
            printf("|"); 
        }
        if((d2 >= d)&&(tavli[0][3] == 2)){
            printf("|"); 
        }
        if((d2 >= d)&&(tavli[0][3] == 1)){
            printf("|"); 
        }
        d2++;

        if((e2 < e) && (tavli[0][4] == 1) ){
            printf("O"); 
        }
        if((e2 < e) && (tavli[0][4] == 2) ){
            printf("X"); 
        }
        if(tavli[0][4] == 0){
            printf("|"); 
        }
        if((e2 >= e)&&(tavli[0][4] == 2)){
            printf("|"); 
        }
        if((e2 >= e)&&(tavli[0][4] == 1)){
            printf("|"); 
        }
        e2++;

        if((f2 < f) && (tavli[0][5] == 1) ){
            printf("O"); 
        }
        if((f2 < f) && (tavli[0][5] == 2) ){
            printf("X"); 
        }
        if(tavli[0][5] == 0){
            printf("|"); 
        }
        if((f2 >= f)&&(tavli[0][5] == 2)){
            printf("|"); 
        }
        if((f2 >= f)&&(tavli[0][5] == 1)){
            printf("|"); 
        }
        f2++;

        if((g2 < g) && (tavli[0][6] == 1) ){
            printf("O"); 
        }
        if((g2 < g) && (tavli[0][6] == 2) ){
            printf("X"); 
        }
        if(tavli[0][6] == 0){
            printf("|"); 
        }
        if((g2 >= g)&&(tavli[0][6] == 2)){
            printf("|"); 
        }
        if((g2 >= g)&&(tavli[0][6] == 1)){
            printf("|"); 
        }
        g2++;

        if((h2 < h) && (tavli[0][7] == 1) ){
            printf("O"); 
        }
        if((h2 < h) && (tavli[0][7] == 2) ){
            printf("X"); 
        }
        if(tavli[0][7] == 0){
            printf("|"); 
        }
        if((h2 >= h)&&(tavli[0][7] == 2)){
            printf("|"); 
        }
        if((h2 >= h)&&(tavli[0][7] == 1)){
            printf("|"); 
        }
        h2++;

        if((i2 < i) && (tavli[0][8] == 1) ){
            printf("O"); 
        }
        if((i2 < i) && (tavli[0][8] == 2) ){
            printf("X"); 
        }
        if(tavli[0][8] == 0){
            printf("|"); 
        }
        if((i2 >= i)&&(tavli[0][8] == 2)){
            printf("|"); 
        }
        if((i2 >= i)&&(tavli[0][8] == 1)){
            printf("|"); 
        }
        i2++;

        if((j2 < j) && (tavli[0][9] == 1) ){
            printf("O"); 
        }
        if((j2 < j) && (tavli[0][9] == 2) ){
            printf("X"); 
        }
        if(tavli[0][9] == 0){
            printf("|"); 
        }
        if((j2 >= j)&&(tavli[0][9] == 2)){
            printf("|"); 
        }
        if((j2 >= j)&&(tavli[0][9] == 1)){
            printf("|"); 
        }
        j2++;

        if((k2 < k) && (tavli[0][10] == 1) ){
            printf("O"); 
        }
        if((k2 < k) && (tavli[0][10] == 2) ){
            printf("X"); 
        }
        if(tavli[0][10] == 0){
            printf("|"); 
        }
        if((k2 >= k)&&(tavli[0][10] == 2)){
            printf("|"); 
        }
        if((k2 >= k)&&(tavli[0][10] == 1)){
            printf("|"); 
        }
        k2++;

        if((l2 < l) && (tavli[0][11] == 1) ){
            printf("O"); 
        }
        if((l2 < l) && (tavli[0][11] == 2) ){
            printf("X"); 
            }
        if(tavli[0][11] == 0){
            printf("|"); 
        }
        if((l2 >= l)&&(tavli[0][11] == 2)){
            printf("|"); 
        }
        if((l2 >= l)&&(tavli[0][11] == 1)){
            printf("|"); 
        }
        l2++;

        if((m2 < m) && (tavli[0][12] == 1) ){
            printf("O"); 
        }
        if((m2 < m) && (tavli[0][12] == 2) ){
            printf("X"); 
        }
        if(tavli[0][12] == 0){
            printf("|"); 
        }
        if((m2 >= m)&&(tavli[0][12] == 2)){
            printf("|"); 
        }
        if((m2 >= m)&&(tavli[0][12] == 1)){
            printf("|"); 
        }
        m2++;

        printf("\n"); 

    }
    printf("_____________\n"); 
    printf("\n"); 


    a = tavli[3][0]; 
    b = tavli[3][1]; 
    c = tavli[3][2]; 
    d = tavli[3][3]; 
    e = tavli[3][4]; 
    f = tavli[3][5]; 
    g = tavli[3][6]; 
    h = tavli[3][7]; 
    i = tavli[3][8]; 
    j = tavli[3][9]; 
    k = tavli[3][10]; 
    l = tavli[3][11]; 
    m = tavli[3][12];

    a2 = 0; 
    b2 = 0; 
    c2 = 0; 
    d2 = 0; 
    e2 = 0; 
    f2 = 0; 
    g2 = 0; 
    h2 = 0; 
    i2 = 0; 
    j2 = 0; 
    k2 = 0; 
    l2 = 0; 
    m2 = 0; 

    maximum = max(max(max(max(max(max(max(max(max(max(max(max(a, b), c), d), e), f), g), h), i), j), k), l), m);


    for (int w = 0; w < maximum; w++){
        if((a2 < a) && (tavli[2][0] == 1) ){
            printf("O"); 
        }
        if((a2 < a) && (tavli[2][0] == 2) ){
            printf("X"); 
        }
        if(tavli[2][0] == 0){
            printf("|"); 
        }
        if((a2 >= a)&&(tavli[2][0] == 2)){
            printf("|"); 
        }
        if((a2 >= a)&&(tavli[2][0] == 1)){
            printf("|"); 
        }
        a2++; 

        if((b2 < b) && (tavli[2][1] == 1) ){
            printf("O"); 
        }
        if((b2 < b) && (tavli[2][1] == 2) ){
            printf("X"); 
        }
        if(tavli[2][1] == 0){
            printf("|"); 
        }
        if((b2 >= b)&&(tavli[2][1] == 2)){
            printf("|"); 
        }
        if((b2 >= b)&&(tavli[2][1] == 1)){
            printf("|"); 
        }
        b2++;

        if((c2 < c) && (tavli[2][2] == 1) ){
            printf("O"); 
        }
        if((c2 < c) && (tavli[2][2] == 2) ){
            printf("X"); 
        }
        if(tavli[2][2] == 0){
            printf("|"); 
        }
        if((c2 >= c)&&(tavli[2][2] == 2)){
            printf("|"); 
        }
        if((c2 >= c)&&(tavli[2][2] == 1)){
            printf("|"); 
        }
        c2++;

        if((d2 < d) && (tavli[2][3] == 1) ){
            printf("O"); 
        }
        if((d2 < d) && (tavli[2][3] == 2) ){
            printf("X"); 
        }
        if(tavli[2][3] == 0){
            printf("|"); 
        }
        if((d2 >= d)&&(tavli[2][3] == 2)){
            printf("|"); 
        }
        if((d2 >= d)&&(tavli[2][3] == 1)){
            printf("|"); 
        }
        d2++;

        if((e2 < e) && (tavli[2][4] == 1) ){
            printf("O"); 
        }
        if((e2 < e) && (tavli[2][4] == 2) ){
            printf("X"); 
        }
        if(tavli[2][4] == 0){
            printf("|"); 
        }
        if((e2 >= e)&&(tavli[2][4] == 2)){
            printf("|"); 
        }
        if((e2 >= e)&&(tavli[2][4] == 1)){
            printf("|"); 
        }
        e2++;

        if((f2 < f) && (tavli[2][5] == 1) ){
            printf("O"); 
        }
        if((f2 < f) && (tavli[2][5] == 2) ){
            printf("X"); 
        }
        if(tavli[2][5] == 0){
            printf("|"); 
        }
        if((f2 >= f)&&(tavli[2][5] == 2)){
            printf("|"); 
        }
        if((f2 >= f)&&(tavli[2][5] == 1)){
            printf("|"); 
        }
        f2++;

        if((g2 < g) && (tavli[2][6] == 1) ){
            printf("O"); 
        }
        if((g2 < g) && (tavli[2][6] == 2) ){
            printf("X"); 
        }
        if(tavli[2][6] == 0){
            printf("|"); 
        }
        if((g2 >= g)&&(tavli[2][6] == 2)){
            printf("|"); 
        }
        if((g2 >= g)&&(tavli[2][6] == 1)){
            printf("|"); 
        }
        g2++;

        if((h2 < h) && (tavli[2][7] == 1) ){
            printf("O"); 
        }
        if((h2 < h) && (tavli[2][7] == 2) ){
            printf("X"); 
        }
        if(tavli[2][7] == 0){
            printf("|"); 
        }
        if((h2 >= h)&&(tavli[2][7] == 2)){
            printf("|"); 
        }
        if((h2 >= h)&&(tavli[2][7] == 1)){
            printf("|"); 
        }
        h2++;

        if((i2 < i) && (tavli[2][8] == 1) ){
            printf("O"); 
        }
        if((i2 < i) && (tavli[2][8] == 2) ){
            printf("X"); 
        }
        if(tavli[2][8] == 0){
            printf("|"); 
        }
        if((i2 >= i)&&(tavli[2][8] == 2)){
            printf("|"); 
        }
        if((i2 >= i)&&(tavli[2][8] == 1)){
            printf("|"); 
        }
        i2++;

        if((j2 < j) && (tavli[2][9] == 1) ){
            printf("O"); 
        }
        if((j2 < j) && (tavli[2][9] == 2) ){
            printf("X"); 
        }
        if(tavli[2][9] == 0){
            printf("|"); 
        }
        if((j2 >= j)&&(tavli[2][9] == 2)){
            printf("|"); 
        }
        if((j2 >= j)&&(tavli[2][9] == 1)){
            printf("|"); 
        }
        j2++;

        if((k2 < k) && (tavli[2][10] == 1) ){
            printf("O"); 
        }
        if((k2 < k) && (tavli[2][10] == 2) ){
            printf("X"); 
        }
        if(tavli[2][10] == 0){
            printf("|"); 
        }
        if((k2 >= k)&&(tavli[2][10] == 2)){
            printf("|"); 
        }
        if((k2 >= k)&&(tavli[2][10] == 1)){
            printf("|"); 
        }
        k2++;

        if((l2 < l) && (tavli[2][11] == 1) ){
            printf("O"); 
        }
        if((l2 < l) && (tavli[2][11] == 2) ){
            printf("X"); 
            }
        if(tavli[2][11] == 0){
            printf("|"); 
        }
        if((l2 >= l)&&(tavli[2][11] == 2)){
            printf("|"); 
        }
        if((l2 >= l)&&(tavli[2][11] == 1)){
            printf("|"); 
        }
        l2++;

        if((m2 < m) && (tavli[2][12] == 1) ){
            printf("O"); 
        }
        if((m2 < m) && (tavli[2][12] == 2) ){
            printf("X"); 
        }
        if(tavli[2][12] == 0){
            printf("|"); 
        }
        if((m2 >= m)&&(tavli[2][12] == 2)){
            printf("|"); 
        }
        if((m2 >= m)&&(tavli[2][12] == 1)){
            printf("|"); 
        }
        m2++;

        printf("\n"); 

    }

    printf("\n"); 

}

void position_changer(int array_to_change[4][13], int couleur, int position_intial_ligne,int position_intial_colone , int nombre_dé){
    
    if(couleur == 1){
        if(position_intial_ligne == 0){
            if(position_intial_colone >= nombre_dé){

                if((array_to_change[0][position_intial_colone - nombre_dé] == 2)&&(array_to_change[1][position_intial_colone - nombre_dé] == 1)){
                    array_to_change[0][position_intial_colone - nombre_dé] = 1;
                    array_to_change[1][position_intial_colone - nombre_dé] = 0;
                    array_to_change[2][12] = 2;  
                    array_to_change[3][12] = array_to_change[3][12] + 1;  

                    array_to_change[1][position_intial_colone] = array_to_change[1][position_intial_colone] - 1; 
                    array_to_change[1][position_intial_colone - nombre_dé] = array_to_change[1][position_intial_colone - nombre_dé] + 1; 
                }
                else if(array_to_change[0][position_intial_colone - nombre_dé] == 0){
                    array_to_change[0][position_intial_colone - nombre_dé] = 1; 
                    array_to_change[1][position_intial_colone] = array_to_change[1][position_intial_colone] - 1; 
                    array_to_change[1][position_intial_colone - nombre_dé] = 1;  
                }
                else if(array_to_change[0][position_intial_colone - nombre_dé] == 1){
                    array_to_change[1][position_intial_colone] = array_to_change[1][position_intial_colone] - 1; 
                    array_to_change[1][position_intial_colone - nombre_dé] = array_to_change[1][position_intial_colone - nombre_dé] + 1; 
                }
                if(array_to_change[1][position_intial_colone] == 0){
                    array_to_change[0][position_intial_colone] = 0; 
                }
            }
            else{
                nombre_dé = nombre_dé - position_intial_colone - 1; 
                int position_intial_colone_2 = 0; 

                if((array_to_change[2][position_intial_colone_2 + nombre_dé] == 2)&&(array_to_change[3][position_intial_colone_2 + nombre_dé] == 1)){
                    array_to_change[2][position_intial_colone_2 + nombre_dé] = 1;
                    array_to_change[3][position_intial_colone_2 + nombre_dé] = 0;
                    array_to_change[2][12] = 2;  
                    array_to_change[3][12] = array_to_change[3][12] + 1;  

                    array_to_change[1][position_intial_colone] = array_to_change[1][position_intial_colone] - 1; 
                    array_to_change[3][position_intial_colone_2 + nombre_dé] = array_to_change[3][position_intial_colone_2 + nombre_dé] + 1; 
                }
                else if(array_to_change[2][position_intial_colone_2 + nombre_dé] == 0){
                    array_to_change[2][position_intial_colone_2 + nombre_dé] = 1; 
                    array_to_change[1][position_intial_colone] = array_to_change[1][position_intial_colone] - 1; 
                    array_to_change[3][position_intial_colone_2 + nombre_dé] = 1;  
                }
                else if(array_to_change[2][position_intial_colone_2 + nombre_dé] == 1){
                    array_to_change[1][position_intial_colone] = array_to_change[1][position_intial_colone] - 1; 
                    array_to_change[3][position_intial_colone_2 + nombre_dé] = array_to_change[3][position_intial_colone_2 + nombre_dé] + 1; 
                }
                if(array_to_change[1][position_intial_colone] == 0){
                    array_to_change[0][position_intial_colone] = 0; 
                }
                
            }
        }
        else if(position_intial_ligne == 1){
                if((array_to_change[2][position_intial_colone + nombre_dé] == 2)&&(array_to_change[3][position_intial_colone + nombre_dé] == 1)){
                    array_to_change[2][position_intial_colone + nombre_dé] = 1;
                    array_to_change[3][position_intial_colone + nombre_dé] = 0;
                    array_to_change[2][12] = 1;  
                    array_to_change[3][12] = array_to_change[3][12] + 1;  

                    array_to_change[3][position_intial_colone] = array_to_change[1][position_intial_colone] - 1; 
                    array_to_change[3][position_intial_colone + nombre_dé] = array_to_change[3][position_intial_colone + nombre_dé] + 1; 
                }
                else if(array_to_change[2][position_intial_colone + nombre_dé] == 0){
                    array_to_change[2][position_intial_colone + nombre_dé] = 1; 
                    array_to_change[3][position_intial_colone] = array_to_change[3][position_intial_colone] - 1; 
                    array_to_change[3][position_intial_colone + nombre_dé] = 1;  
                }
                else if(array_to_change[2][position_intial_colone + nombre_dé] == 1){
                    array_to_change[3][position_intial_colone] = array_to_change[3][position_intial_colone] - 1; 
                    array_to_change[3][position_intial_colone + nombre_dé] = array_to_change[3][position_intial_colone + nombre_dé] + 1; 
                }
                if(array_to_change[3][position_intial_colone] == 0){
                    array_to_change[2][position_intial_colone] = 0; 
                }
        }

    }

    else if (couleur == 2){
        if(position_intial_ligne == 1){
            if(position_intial_colone >= nombre_dé){

                if((array_to_change[2][position_intial_colone - nombre_dé] == 1)&&(array_to_change[3][position_intial_colone - nombre_dé] == 1)){
                    array_to_change[2][position_intial_colone - nombre_dé] = 2;
                    array_to_change[3][position_intial_colone - nombre_dé] = 0;
                    array_to_change[0][12] = 1;  
                    array_to_change[1][12] = array_to_change[1][12] + 1;  

                    array_to_change[3][position_intial_colone] = array_to_change[3][position_intial_colone] - 1; 
                    array_to_change[3][position_intial_colone - nombre_dé] = array_to_change[3][position_intial_colone - nombre_dé] + 1; 
                }
                else if(array_to_change[2][position_intial_colone - nombre_dé] == 0){
                    array_to_change[2][position_intial_colone - nombre_dé] = 2; 
                    array_to_change[3][position_intial_colone] = array_to_change[3][position_intial_colone] - 1; 
                    array_to_change[3][position_intial_colone - nombre_dé] = 1;  
                }
                else if(array_to_change[2][position_intial_colone - nombre_dé] == 2){
                    array_to_change[3][position_intial_colone] = array_to_change[3][position_intial_colone] - 1; 
                    array_to_change[3][position_intial_colone - nombre_dé] = array_to_change[3][position_intial_colone - nombre_dé] + 1; 
                }
                if(array_to_change[3][position_intial_colone] == 0){
                    array_to_change[2][position_intial_colone] = 0; 
                }
            }
            else{ 

                nombre_dé = nombre_dé - position_intial_colone - 1; 
                int position_intial_colone_2 = 0; 

                if((array_to_change[0][position_intial_colone_2 + nombre_dé] == 1)&&(array_to_change[1][position_intial_colone_2 + nombre_dé] == 1)){
                    array_to_change[0][position_intial_colone_2 + nombre_dé] = 2;
                    array_to_change[1][position_intial_colone_2 + nombre_dé] = 0;
                    array_to_change[0][12] = 1;  
                    array_to_change[1][12] = array_to_change[1][12] + 1;  

                    array_to_change[3][position_intial_colone] = array_to_change[3][position_intial_colone] - 1; 
                    array_to_change[1][position_intial_colone_2 + nombre_dé] = array_to_change[1][position_intial_colone_2 + nombre_dé] + 1; 
                }
                else if(array_to_change[0][position_intial_colone_2 + nombre_dé] == 0){
                    array_to_change[0][position_intial_colone_2 + nombre_dé] = 2; 
                    array_to_change[3][position_intial_colone] = array_to_change[1][position_intial_colone] - 1; 
                    array_to_change[1][position_intial_colone_2 + nombre_dé] = 1;  
                }
                else if(array_to_change[0][position_intial_colone_2 + nombre_dé] == 2){
                    array_to_change[3][position_intial_colone] = array_to_change[3][position_intial_colone] - 1; 
                    array_to_change[1][position_intial_colone_2 + nombre_dé] = array_to_change[1][position_intial_colone_2 + nombre_dé] + 1; 
                }
                if(array_to_change[3][position_intial_colone] == 0){
                    array_to_change[2][position_intial_colone] = 0; 
                }
                
            }
        }
        else if(position_intial_ligne == 0){
                if((array_to_change[0][position_intial_colone + nombre_dé] == 1)&&(array_to_change[1][position_intial_colone + nombre_dé] == 1)){
                    array_to_change[0][position_intial_colone + nombre_dé] = 2;
                    array_to_change[1][position_intial_colone + nombre_dé] = 0;
                    array_to_change[0][12] = 1;  
                    array_to_change[1][12] = array_to_change[1][12] + 1;  

                    array_to_change[1][position_intial_colone] = array_to_change[1][position_intial_colone] - 1; 
                    array_to_change[1][position_intial_colone + nombre_dé] = array_to_change[1][position_intial_colone + nombre_dé] + 1; 
                }
                else if(array_to_change[0][position_intial_colone + nombre_dé] == 0){
                    array_to_change[0][position_intial_colone + nombre_dé] = 2; 
                    array_to_change[1][position_intial_colone] = array_to_change[1][position_intial_colone] - 1; 
                    array_to_change[1][position_intial_colone + nombre_dé] = 1;  
                }
                else if(array_to_change[0][position_intial_colone + nombre_dé] == 2){
                    array_to_change[1][position_intial_colone] = array_to_change[1][position_intial_colone] - 1; 
                    array_to_change[1][position_intial_colone + nombre_dé] = array_to_change[1][position_intial_colone + nombre_dé] + 1; 
                }
                if(array_to_change[1][position_intial_colone] == 0){
                    array_to_change[0][position_intial_colone] = 0; 
                }
        }

    }

}

int function_is_every_chercker_in_last_box(int tavli[4][13]){
    //couleur blanche = 1 d'abord
    int sommeblancs = 0; 
    for(int i = 6; i < 12; i++){
        if(tavli[2][i] == 1){
            sommeblancs = sommeblancs + tavli[3][i]; 
        }
    }
    if(sommeblancs == 15){
        return 1; 
    }
    //couleur rouge = 2 ensuite
    int sommerouges = 0; 
    for(int i = 6; i < 12; i++){
        if(tavli[0][i] == 2){
            sommerouges = sommerouges + tavli[1][i]; 
        }
    }
    if(sommerouges == 15){
        return 2; 
    }
}

void number_tavli_generator(int tavli[4][13]){
    printf("\n"); 
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 13; j++){
            printf("%d", tavli[i][j]);  
        }
        printf("\n"); 
    }
    printf("\n"); 
}

int function_is_free(int tavli[4][13], int couleur, int position_intial_ligne, int position_intial_colone, int nombre_dé ){
    if(couleur == 1){
        if(position_intial_ligne == 0){
            if(tavli[0][position_intial_colone] != 1){
                return 0; 
            }
            if(position_intial_colone >= nombre_dé){
                if((tavli[0][position_intial_colone - nombre_dé] == 2) && (tavli[1][position_intial_colone - nombre_dé] > 1)){
                    return 0; 
                }
                else{
                    return 1; 
                }
            }
            else{
                nombre_dé = nombre_dé - position_intial_colone - 1; 
                int position_intial_colone_2 = 0; 
                if((tavli[2][position_intial_colone_2 + nombre_dé] == 2) && (tavli[3][position_intial_colone_2 + nombre_dé] > 1)){
                    return 0; 
                }
                else{
                    return 1; 
                }
            }

        }

        else if(position_intial_ligne == 1){
            if(tavli[2][position_intial_colone] != 1){
                return 0; 
            }
            if((tavli[2][position_intial_colone + nombre_dé] == 2)&&(tavli[3][position_intial_colone + nombre_dé] > 1)){
                return 0;  
            }
            else{
                return 1; 
            }
                
        }

    }

    else if (couleur == 2){
        if(position_intial_ligne == 1){
            if(tavli[2][position_intial_colone] != 2){
                return 0; 
            }

            if(position_intial_colone >= nombre_dé){

                if((tavli[2][position_intial_colone - nombre_dé] == 1)&&(tavli[3][position_intial_colone - nombre_dé] > 1)){
                    return 0; 
                }
                else{
                    return 1; 
                }
            }

            else{ 
                nombre_dé = nombre_dé - position_intial_colone - 1; 
                int position_intial_colone_2 = 0; 

                if((tavli[0][position_intial_colone_2 + nombre_dé] == 1)&&(tavli[1][position_intial_colone_2 + nombre_dé] > 1)){
                    return 0; 
                }
                return 1;    
            }
        }
        else if(position_intial_ligne == 0){
            if(tavli[0][position_intial_colone] != 2){
                return 0; 
            }
            if((tavli[0][position_intial_colone + nombre_dé] == 1)&&(tavli[1][position_intial_colone + nombre_dé] > 1)){
                return 0; 
            }
            else{
                return 1; 
            }
        }

    }  
}

int function_checker_out(int tavli[4][13], int couleur){
    if(couleur == 1){
        if(tavli[0][12] == 1){
            return 1; 
        }
        else{
            return 0; 
        }
    }
    else if(couleur == 2){
        if(tavli[2][12] == 2){
            return 1; 
        }
        else{
            return 0; 
        }
    }
}

int function_find__number_position_to_play(int tavli[3][13], int couleur){
    int mesure_nombre_to_play = 0; 

    for(int i = 0; i < 12; i++){
        if(tavli[0][i] == couleur){
            mesure_nombre_to_play = mesure_nombre_to_play + 1; 
        }
    }
    for(int i = 0; i < 12; i++){
        if(tavli[2][i] == couleur){
            mesure_nombre_to_play = mesure_nombre_to_play + 1; 
        }
    }



}

int function_return_dice_non_zero_from_array(int array_dice[4]){

    int retour_de_fonction; 
    for(int i = 0; i < 4; i++){
        if(array_dice[i] != 0){
            retour_de_fonction = array_dice[i];
            array_dice[i] = 0; 
            return retour_de_fonction; 
        }
    }
}

int bot_simulation(int tavli[4][13], int couleur){
    int lower = 1; 
    int upper = 6; 
    int tavli2[4][13]; 
    int dice1; 
    int dice2;    
    int coup_joués = 0; 
    int dé_possibles = 2; 
    int dice_array[4]; 
    int nombre_to_play; 
    for(int i = 0;i < 4; i++){
        for(int j = 0; j < 13; j++){
            tavli2[i][j] = tavli[i][j]; 
        }
    }

    int checker_box = 0; 
    while((checker_box != 1)&&(checker_box != 2)){

        //Tour de O; 
        if(couleur == 1){
            dice1 = generator_dice(lower, upper); 
            dice2 = generator_dice(lower, upper); 
            dice_array[3] = 0; 
            dice_array[2] = 0; 
            dice_array[1] = dice1; 
            dice_array[0] = dice2; 

            if(dice1 == dice2){
                dé_possibles = 4; 
                dice_array[3] = dice1; 
                dice_array[2] = dice2; 
            }
            

            int position_initiale_ligne_blanc = 0; 
            int position_initiale_colone_blanc = 12; 
            for(int i = dé_possibles; i > 0; i--){
                if( function_checker_out(tavli2, couleur) == 1){
                    if( function_is_free(tavli2, couleur,position_initiale_ligne_blanc, position_initiale_colone_blanc, dice_array[i-1] ) == 1){
                        position_changer(tavli2, couleur, position_initiale_ligne_blanc,position_initiale_colone_blanc, dice_array[i-1] ); 
                        dé_possibles = dé_possibles - 1; 
                        picture_generator(tavli);
                    }
                    else if( function_is_free(tavli2, couleur,position_initiale_ligne_blanc, position_initiale_colone_blanc, dice_array[i-2] ) == 1){
                        position_changer(tavli2, couleur, position_initiale_ligne_blanc,position_initiale_colone_blanc, dice_array[i-2] ); 
                        dé_possibles = dé_possibles - 1; 
                        picture_generator(tavli);

                        if(dice1 == dice2){
                            dice_array[2] = dice1; 
                        }
                        else{
                            dice_array[0] = dice1; 
                        }   
                    }
                    else{
                        dé_possibles = dé_possibles - 1;  
                        picture_generator(tavli); 
                    } 

                }

                else{

                }
            }


        

        }
    
        //Tour de X; 
        else if(couleur == 2){
            dice1 = generator_dice(lower, upper); 
            dice2 = generator_dice(lower, upper); 
            dice_array[3] = dice1; 
            dice_array[2] = dice2; 
            dice_array[1] = dice1; 
            dice_array[0] = dice1;

            if(dice1 == dice2){
                dé_possibles = 4; 
            }

            for(int i = dé_possibles; i>0; i--){

            }




        }


        
        checker_box = function_is_every_chercker_in_last_box(tavli2); 
    }

  

}

int main(){
    
    

    

    return 0; 
}