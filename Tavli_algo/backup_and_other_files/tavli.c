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

int generator_wich_dice_to_choose(int lower, int upper){
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

int function_find__number_position_to_play(int tavli[3][13], int couleur, int dice){
    int mesure_nombre_to_play = 0; 
    int position_intial_ligne; 
    int position_intial_colone; 

    for(int i = 0; i < 12; i++){
        position_intial_ligne = 0; 
        position_intial_colone = i; 
        if( (tavli[0][i] == couleur) &&(function_is_free(tavli, couleur, position_intial_ligne, position_intial_colone, dice )) ){
            mesure_nombre_to_play = mesure_nombre_to_play + 1; 
        }
    }
    for(int i = 0; i < 6; i++){
        position_intial_ligne = 1; 
        position_intial_colone = i;         
        if( (tavli[2][i] == couleur) &&(function_is_free(tavli, couleur, position_intial_ligne, position_intial_colone, dice )) ){
            mesure_nombre_to_play = mesure_nombre_to_play + 1; 
        }
    }

    return mesure_nombre_to_play; 
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

void fonction_retourne_position_possible_pour_changement(int tavli[4][13], int couleur, int nombre_dé, int taille_tableau, int position_possibles[2][taille_tableau]){
    int position_intial_ligne; 
    int position_intial_colone; 
    int position_dans_tableau_taille_possible = 0; 
    for(int i = 0; i < 13; i++){
        position_intial_ligne = 0; 
        position_intial_colone = i; 
        if( (tavli[0][i] == couleur) && (function_is_free(tavli, couleur, position_intial_ligne, position_intial_colone, nombre_dé ) == 1)){
            printf("rentreici1\n"); 
            position_possibles[0][position_dans_tableau_taille_possible] = position_intial_ligne; 
            position_possibles[1][position_dans_tableau_taille_possible] = position_intial_colone; 
            position_dans_tableau_taille_possible = position_dans_tableau_taille_possible + 1; 
        }
    }
    for(int i = 0; i < 6; i++){
        position_intial_ligne = 1; 
        position_intial_colone = i; 
        if( (tavli[2][i] == couleur) && ((function_is_free(tavli, couleur, position_intial_ligne, position_intial_colone, nombre_dé ) == 1)) ){
            printf("rentreici2\n"); 
            position_possibles[0][position_dans_tableau_taille_possible] = position_intial_ligne; 
            position_possibles[1][position_dans_tableau_taille_possible] = position_intial_colone; 
            position_dans_tableau_taille_possible = position_dans_tableau_taille_possible + 1;   
        }
    }

}

int bot_simulation(int tavli[4][13], int couleur){
    srand(time(0)); // Set a new seed for the random number generator
    int lower = 1; 
    int upper = 6; 
    int tavli2[4][13]; 
    int dice1; 
    int dice2;    
    int coup_joués = 0; 
    int dé_possibles = 2; 
    int dice_array[4]; 
    int nombre_to_play; 
    int num_values; 
    int random_index; 
    int random_value; 
    int position_intial_ligne; 
    int position_intial_colone; 
    int taille_tableau; 
    int size; 
    int height = 2; 
    int dice1_or_dice2; 

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
                    if(dice1 == dice2){
                        if( function_is_free(tavli2, couleur,position_initiale_ligne_blanc, position_initiale_colone_blanc, dice_array[i-1] ) == 1){
                            position_changer(tavli2, couleur, position_initiale_ligne_blanc,position_initiale_colone_blanc, dice_array[i-1] ); 
                            dé_possibles = dé_possibles - 1; 
                            picture_generator(tavli2);
                        }
                        else{
                            i = 0; 
                            dé_possibles = 0; 
                            picture_generator(tavli2); 
                        }
                    }
                    else{  //dice1 different than dice2 ; 
                        if( function_is_free(tavli2, couleur,position_initiale_ligne_blanc, position_initiale_colone_blanc, dice_array[i-1] ) == 1){
                            position_changer(tavli2, couleur, position_initiale_ligne_blanc,position_initiale_colone_blanc, dice_array[i-1] ); 
                            dé_possibles = dé_possibles - 1; 
                            picture_generator(tavli2);
                        }
                        else if( (function_is_free(tavli2, couleur,position_initiale_ligne_blanc, position_initiale_colone_blanc, dice_array[i-2] ) == 1) &&(i > 1)){
                            position_changer(tavli2, couleur, position_initiale_ligne_blanc,position_initiale_colone_blanc, dice_array[i-2] ); 
                            picture_generator(tavli2);
                            dé_possibles = dé_possibles - 1 ; 
                            dice_array[0] = dice1;    
                        }
                        else{
                            i = 0; 
                            dé_possibles = 0; 
                            picture_generator(tavli2); 
                        } 
                    }
                }


                else{
                    if(dice1 == dice2){
                        random_value = dice1; 
                        taille_tableau = function_find__number_position_to_play(tavli2, couleur, dice1);

                        if(taille_tableau == 0){
                            i = 0; 
                        }
                        else{
                            size = taille_tableau;
                            int **position_possibles_dice_egaux = malloc(sizeof(int *) * height); 
                            for(int i = 0; i < height; i++){
                                position_possibles_dice_egaux[i] = malloc(sizeof(unsigned int) * taille_tableau); 
                            }
                            for(int i = 0; i < 2; i++){
                                for(int j = 0; j < taille_tableau; j++){
                                    position_possibles_dice_egaux[i][j] = 0; 
                                }
                            }
                            fonction_retourne_position_possible_pour_changement(tavli2, couleur, dice1, taille_tableau, position_possibles_dice_egaux);
                            lower = 0; 
                            upper = taille_tableau - 1; 
                            random_index = generator_dice(lower, upper); 
                            position_intial_ligne = position_possibles_dice_egaux[0][random_index]; 
                            position_intial_colone = position_possibles_dice_egaux[1][random_index]; 
                            position_changer(tavli2, couleur, position_intial_ligne,position_intial_colone , dice1);

                            for (int i = 0; i < height; i++) {
                                free(position_possibles_dice_egaux[i]);
                            }
                            // Free the array of pointers
                            free(position_possibles_dice_egaux);  
                            dé_possibles = dé_possibles - 1; 
                            picture_generator(tavli2);
                        }
                    }

                    else{
                        if(dé_possibles == 2){

                            if( ( function_find__number_position_to_play(tavli2, couleur, dice1) > 0 )&&( function_find__number_position_to_play(tavli2, couleur, dice2) > 0 ) ){
                                lower = 1; 
                                upper = 2; 
                                dice1_or_dice2 =  generator_dice(lower, upper); 

                                if( dice1_or_dice2 == 1 ){
                                    dice_array[0] = dice2; 
                                    taille_tableau = function_find__number_position_to_play(tavli2, couleur, dice1);                           
                                    size = taille_tableau;
                                    int **position_possibles_dice_cas_1a = malloc(sizeof(int *) * height); 
                                    for(int i = 0; i < height; i++){
                                        position_possibles_dice_cas_1a[i] = malloc(sizeof(unsigned int) * taille_tableau); 
                                    }
                                    for(int i = 0; i < 2; i++){
                                        for(int j = 0; j < taille_tableau; j++){
                                            position_possibles_dice_cas_1a[i][j] = 0; 
                                        }
                                    }
                                    fonction_retourne_position_possible_pour_changement(tavli2, couleur, dice1, taille_tableau, position_possibles_dice_cas_1a);
                                    lower = 0; 
                                    upper = taille_tableau - 1; 
                                    random_index = generator_dice(lower, upper); 
                                    position_intial_ligne = position_possibles_dice_cas_1a[0][random_index]; 
                                    position_intial_colone = position_possibles_dice_cas_1a[1][random_index]; 
                                    position_changer(tavli2, couleur, position_intial_ligne,position_intial_colone, dice1);

                                    for (int i = 0; i < height; i++) {
                                        free(position_possibles_dice_cas_1a[i]);
                                    }
                                    // Free the array of pointers
                                    free(position_possibles_dice_cas_1a);     
                                    picture_generator(tavli2);
                                }

                                else if( dice1_or_dice2 == 2 ){
                                    dice_array[0] = dice1; 

                                    taille_tableau = function_find__number_position_to_play(tavli2, couleur, dice2);                           
                                    size = taille_tableau;
                                    int **position_possibles_dice_cas_1b = malloc(sizeof(int *) * height); 
                                    for(int i = 0; i < height; i++){
                                        position_possibles_dice_cas_1b[i] = malloc(sizeof(unsigned int) * taille_tableau); 
                                    }
                                    for(int i = 0; i < 2; i++){
                                        for(int j = 0; j < taille_tableau; j++){
                                            position_possibles_dice_cas_1b[i][j] = 0; 
                                        }
                                    }
                                    fonction_retourne_position_possible_pour_changement(tavli2, couleur, dice1, taille_tableau, position_possibles_dice_cas_1b);
                                    lower = 0; 
                                    upper = taille_tableau - 1; 
                                    random_index = generator_dice(lower, upper); 
                                    position_intial_ligne = position_possibles_dice_cas_1b[0][random_index]; 
                                    position_intial_colone = position_possibles_dice_cas_1b[1][random_index]; 
                                    position_changer(tavli2, couleur, position_intial_ligne,position_intial_colone, dice1);

                                    for (int i = 0; i < height; i++) {
                                        free(position_possibles_dice_cas_1b[i]);
                                    }
                                    // Free the array of pointers
                                    free(position_possibles_dice_cas_1b); 
                                    picture_generator(tavli2);                                   
                                }
                                dé_possibles = dé_possibles - 1; 
                            }

                            else if( ( function_find__number_position_to_play(tavli2, couleur, dice1) > 0 )&&( function_find__number_position_to_play(tavli2, couleur, dice2) == 0 ) ){
                                taille_tableau = function_find__number_position_to_play(tavli2, couleur, dice1);                           
                                size = taille_tableau;
                                int **position_possibles_dice_cas_2 = malloc(sizeof(int *) * height); 
                                for(int i = 0; i < height; i++){
                                    position_possibles_dice_cas_2[i] = malloc(sizeof(unsigned int) * taille_tableau); 
                                }
                                for(int i = 0; i < 2; i++){
                                    for(int j = 0; j < taille_tableau; j++){
                                        position_possibles_dice_cas_2[i][j] = 0; 
                                    }
                                }
                                fonction_retourne_position_possible_pour_changement(tavli2, couleur, dice1, taille_tableau, position_possibles_dice_cas_2);
                                lower = 0; 
                                upper = taille_tableau - 1; 
                                random_index = generator_dice(lower, upper); 
                                position_intial_ligne = position_possibles_dice_cas_2[0][random_index]; 
                                position_intial_colone = position_possibles_dice_cas_2[1][random_index]; 
                                position_changer(tavli2, couleur, position_intial_ligne,position_intial_colone , dice1);

                                for (int i = 0; i < height; i++) {
                                    free(position_possibles_dice_cas_2[i]);
                                }
                                // Free the array of pointers
                                free(position_possibles_dice_cas_2);
                                picture_generator(tavli2);
                                dice_array[0] = dice2; 
                                dé_possibles = dé_possibles - 1; 
                        
        

                            }

                            else if( ( function_find__number_position_to_play(tavli2, couleur, dice1) == 0 )&&( function_find__number_position_to_play(tavli2, couleur, dice2) > 1 ) ){
                                taille_tableau = function_find__number_position_to_play(tavli2, couleur, dice2);
                                size = taille_tableau;
                                int **position_possibles_dice_cas_3 = malloc(sizeof(int *) * height); 
                                for(int i = 0; i < height; i++){
                                    position_possibles_dice_cas_3[i] = malloc(sizeof(unsigned int) * taille_tableau); 
                                }
                                for(int i = 0; i < 2; i++){
                                    for(int j = 0; j < taille_tableau; j++){
                                        position_possibles_dice_cas_3[i][j] = 0; 
                                    }
                                }
                                fonction_retourne_position_possible_pour_changement(tavli2, couleur, dice2, taille_tableau, position_possibles_dice_cas_3);
                                lower = 0; 
                                upper = taille_tableau - 1; 
                                random_index = generator_dice(lower, upper); 
                                position_intial_ligne = position_possibles_dice_cas_3[0][random_index]; 
                                position_intial_colone = position_possibles_dice_cas_3[1][random_index]; 
                                position_changer(tavli2, couleur, position_intial_ligne,position_intial_colone , dice2);

                                for (int i = 0; i < height; i++) {
                                    free(position_possibles_dice_cas_3[i]);
                                }
                                // Free the array of pointers
                                free(position_possibles_dice_cas_3);
                                picture_generator(tavli2);
                                dice_array[0] = dice2;
                                dé_possibles = dé_possibles - 1; 
                            }
                            else if( ( function_find__number_position_to_play(tavli2, couleur, dice1) == 0 )&&( function_find__number_position_to_play(tavli2, couleur, dice2) == 0 ) ){
                                picture_generator(tavli2);
                                i = 0; 
                            }



                        }

                        else if(dé_possibles == 1){

                            random_value = dice_array[0]; 
                            taille_tableau = function_find__number_position_to_play(tavli2, couleur, random_value);

                            if(taille_tableau == 0){
                                i = 0; 
                            }
                            else{
                                size = taille_tableau;
                                int **position_possibles_dice_diff = malloc(sizeof(int *) * height); 
                                for(int i = 0; i < height; i++){
                                    position_possibles_dice_diff[i] = malloc(sizeof(unsigned int) * taille_tableau); 
                                }
                                for(int i = 0; i < 2; i++){
                                    for(int j = 0; j < taille_tableau; j++){
                                        position_possibles_dice_diff[i][j] = 0; 
                                    }
                                }
                                fonction_retourne_position_possible_pour_changement(tavli2, couleur, random_value, taille_tableau, position_possibles_dice_diff);
                                lower = 0; 
                                upper = taille_tableau - 1; 
                                random_index = generator_dice(lower, upper); 
                                position_intial_ligne = position_possibles_dice_diff[0][random_index]; 
                                position_intial_colone = position_possibles_dice_diff[1][random_index]; 
                                position_changer(tavli2, couleur, position_intial_ligne,position_intial_colone , random_value);

                                for (int i = 0; i < height; i++) {
                                    free(position_possibles_dice_egaux[i]);
                                }
                                // Free the array of pointers
                                free(position_possibles_dice_egaux); 
                                picture_generator(tavli2); 
                                i = 0; 
                            }

                        }
                    }
                }
                
                

            }


        
            couleur = 2; 
        }
    
        //Tour de X; 
        else if(couleur == 2){
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
                    if(dice1 == dice2){
                        if( function_is_free(tavli2, couleur,position_initiale_ligne_blanc, position_initiale_colone_blanc, dice_array[i-1] ) == 1){
                            position_changer(tavli2, couleur, position_initiale_ligne_blanc,position_initiale_colone_blanc, dice_array[i-1] ); 
                            dé_possibles = dé_possibles - 1; 
                            picture_generator(tavli2);
                        }
                        else{
                            i = 0; 
                            dé_possibles = 0; 
                            picture_generator(tavli2); 
                        }
                    }
                    else{  //dice1 different than dice2 ; 
                        if( function_is_free(tavli2, couleur,position_initiale_ligne_blanc, position_initiale_colone_blanc, dice_array[i-1] ) == 1){
                            position_changer(tavli2, couleur, position_initiale_ligne_blanc,position_initiale_colone_blanc, dice_array[i-1] ); 
                            dé_possibles = dé_possibles - 1; 
                            picture_generator(tavli2);
                        }
                        else if( (function_is_free(tavli2, couleur,position_initiale_ligne_blanc, position_initiale_colone_blanc, dice_array[i-2] ) == 1) &&(i > 1)){
                            position_changer(tavli2, couleur, position_initiale_ligne_blanc,position_initiale_colone_blanc, dice_array[i-2] ); 
                            picture_generator(tavli2);
                            dé_possibles = dé_possibles - 1 ; 
                            dice_array[0] = dice1;    
                        }
                        else{
                            i = 0; 
                            dé_possibles = 0; 
                            picture_generator(tavli2); 
                        } 
                    }
                }


                else{
                    if(dice1 == dice2){
                        random_value = dice1; 
                        taille_tableau = function_find__number_position_to_play(tavli2, couleur, dice1);

                        if(taille_tableau == 0){
                            i = 0; 
                        }
                        else{
                            size = taille_tableau;
                            int **position_possibles_dice_egaux = malloc(sizeof(int *) * height); 
                            for(int i = 0; i < height; i++){
                                position_possibles_dice_egaux[i] = malloc(sizeof(unsigned int) * taille_tableau); 
                            }
                            for(int i = 0; i < 2; i++){
                                for(int j = 0; j < taille_tableau; j++){
                                    position_possibles_dice_egaux[i][j] = 0; 
                                }
                            }
                            fonction_retourne_position_possible_pour_changement(tavli2, couleur, dice1, taille_tableau, position_possibles_dice_egaux);
                            lower = 0; 
                            upper = taille_tableau - 1; 
                            random_index = generator_dice(lower, upper); 
                            position_intial_ligne = position_possibles_dice_egaux[0][random_index]; 
                            position_intial_colone = position_possibles_dice_egaux[1][random_index]; 
                            position_changer(tavli2, couleur, position_intial_ligne,position_intial_colone , dice1);

                            for (int i = 0; i < height; i++) {
                                free(position_possibles_dice_egaux[i]);
                            }
                            // Free the array of pointers
                            free(position_possibles_dice_egaux); 
                            picture_generator(tavli2); 
                        }
                    }

                    else{
                        if(dé_possibles == 2){

                            if( ( function_find__number_position_to_play(tavli2, couleur, dice1) > 0 )&&( function_find__number_position_to_play(tavli2, couleur, dice2) > 0 ) ){
                                lower = 1; 
                                upper = 2; 
                                dice1_or_dice2 =  generator_dice(lower, upper); 

                                if( dice1_or_dice2 == 1 ){
                                    dice_array[0] = dice2; 
                                    taille_tableau = function_find__number_position_to_play(tavli2, couleur, dice1);                           
                                    size = taille_tableau;
                                    int **position_possibles_dice_cas_1a = malloc(sizeof(int *) * height); 
                                    for(int i = 0; i < height; i++){
                                        position_possibles_dice_cas_1a[i] = malloc(sizeof(unsigned int) * taille_tableau); 
                                    }
                                    for(int i = 0; i < 2; i++){
                                        for(int j = 0; j < taille_tableau; j++){
                                            position_possibles_dice_cas_1a[i][j] = 0; 
                                        }
                                    }
                                    fonction_retourne_position_possible_pour_changement(tavli2, couleur, dice1, taille_tableau, position_possibles_dice_cas_1a);
                                    lower = 0; 
                                    upper = taille_tableau - 1; 
                                    random_index = generator_dice(lower, upper); 
                                    position_intial_ligne = position_possibles_dice_cas_1a[0][random_index]; 
                                    position_intial_colone = position_possibles_dice_cas_1a[1][random_index]; 
                                    position_changer(tavli2, couleur, position_intial_ligne,position_intial_colone, dice1);

                                    for (int i = 0; i < height; i++) {
                                        free(position_possibles_dice_cas_1a[i]);
                                    }
                                    // Free the array of pointers
                                    free(position_possibles_dice_cas_1a);   
                                    picture_generator(tavli2);                                 
                                }

                                else if( dice1_or_dice2 == 2 ){
                                    dice_array[0] = dice1; 

                                    taille_tableau = function_find__number_position_to_play(tavli2, couleur, dice2);                           
                                    size = taille_tableau;
                                    int **position_possibles_dice_cas_1b = malloc(sizeof(int *) * height); 
                                    for(int i = 0; i < height; i++){
                                        position_possibles_dice_cas_1b[i] = malloc(sizeof(unsigned int) * taille_tableau); 
                                    }
                                    for(int i = 0; i < 2; i++){
                                        for(int j = 0; j < taille_tableau; j++){
                                            position_possibles_dice_cas_1b[i][j] = 0; 
                                        }
                                    }
                                    fonction_retourne_position_possible_pour_changement(tavli2, couleur, dice1, taille_tableau, position_possibles_dice_cas_1b);
                                    lower = 0; 
                                    upper = taille_tableau - 1; 
                                    random_index = generator_dice(lower, upper); 
                                    position_intial_ligne = position_possibles_dice_cas_1b[0][random_index]; 
                                    position_intial_colone = position_possibles_dice_cas_1b[1][random_index]; 
                                    position_changer(tavli2, couleur, position_intial_ligne,position_intial_colone, dice1);

                                    for (int i = 0; i < height; i++) {
                                        free(position_possibles_dice_cas_1b[i]);
                                    }
                                    // Free the array of pointers
                                    free(position_possibles_dice_cas_1b); 
                                    picture_generator(tavli2);                                   
                                }
                                dé_possibles = dé_possibles - 1; 
                            }

                            else if( ( function_find__number_position_to_play(tavli2, couleur, dice1) > 0 )&&( function_find__number_position_to_play(tavli2, couleur, dice2) == 0 ) ){
                                taille_tableau = function_find__number_position_to_play(tavli2, couleur, dice1);                           
                                size = taille_tableau;
                                int **position_possibles_dice_cas_2 = malloc(sizeof(int *) * height); 
                                for(int i = 0; i < height; i++){
                                    position_possibles_dice_cas_2[i] = malloc(sizeof(unsigned int) * taille_tableau); 
                                }
                                for(int i = 0; i < 2; i++){
                                    for(int j = 0; j < taille_tableau; j++){
                                        position_possibles_dice_cas_2[i][j] = 0; 
                                    }
                                }
                                fonction_retourne_position_possible_pour_changement(tavli2, couleur, dice1, taille_tableau, position_possibles_dice_cas_2);
                                lower = 0; 
                                upper = taille_tableau - 1; 
                                random_index = generator_dice(lower, upper); 
                                position_intial_ligne = position_possibles_dice_cas_2[0][random_index]; 
                                position_intial_colone = position_possibles_dice_cas_2[1][random_index]; 
                                position_changer(tavli2, couleur, position_intial_ligne,position_intial_colone , dice1);

                                for (int i = 0; i < height; i++) {
                                    free(position_possibles_dice_cas_2[i]);
                                }
                                // Free the array of pointers
                                free(position_possibles_dice_cas_2);
                                picture_generator(tavli2);
                                dice_array[0] = dice2; 
                                dé_possibles = dé_possibles - 1; 
                        
        

                            }

                            else if( ( function_find__number_position_to_play(tavli2, couleur, dice1) == 0 )&&( function_find__number_position_to_play(tavli2, couleur, dice2) > 1 ) ){
                                taille_tableau = function_find__number_position_to_play(tavli2, couleur, dice2);
                                size = taille_tableau;
                                int **position_possibles_dice_cas_3 = malloc(sizeof(int *) * height); 
                                for(int i = 0; i < height; i++){
                                    position_possibles_dice_cas_3[i] = malloc(sizeof(unsigned int) * taille_tableau); 
                                }
                                for(int i = 0; i < 2; i++){
                                    for(int j = 0; j < taille_tableau; j++){
                                        position_possibles_dice_cas_3[i][j] = 0; 
                                    }
                                }
                                fonction_retourne_position_possible_pour_changement(tavli2, couleur, dice2, taille_tableau, position_possibles_dice_cas_3);
                                lower = 0; 
                                upper = taille_tableau - 1; 
                                random_index = generator_dice(lower, upper); 
                                position_intial_ligne = position_possibles_dice_cas_3[0][random_index]; 
                                position_intial_colone = position_possibles_dice_cas_3[1][random_index]; 
                                position_changer(tavli2, couleur, position_intial_ligne,position_intial_colone , dice2);

                                for (int i = 0; i < height; i++) {
                                    free(position_possibles_dice_cas_3[i]);
                                }
                                // Free the array of pointers
                                free(position_possibles_dice_cas_3);
                                picture_generator(tavli2);
                                dice_array[0] = dice2;
                                dé_possibles = dé_possibles - 1; 
                            }
                            else if( ( function_find__number_position_to_play(tavli2, couleur, dice1) == 0 )&&( function_find__number_position_to_play(tavli2, couleur, dice2) == 0 ) ){
                                i = 0; 
                            }



                        }

                        else if(dé_possibles == 1){

                            random_value = dice_array[0]; 
                            taille_tableau = function_find__number_position_to_play(tavli2, couleur, random_value);

                            if(taille_tableau == 0){
                                i = 0; 
                            }
                            else{
                                size = taille_tableau;
                                int **position_possibles_dice_diff = malloc(sizeof(int *) * height); 
                                for(int i = 0; i < height; i++){
                                    position_possibles_dice_diff[i] = malloc(sizeof(unsigned int) * taille_tableau); 
                                }
                                for(int i = 0; i < 2; i++){
                                    for(int j = 0; j < taille_tableau; j++){
                                        position_possibles_dice_diff[i][j] = 0; 
                                    }
                                }
                                fonction_retourne_position_possible_pour_changement(tavli2, couleur, random_value, taille_tableau, position_possibles_dice_diff);
                                lower = 0; 
                                upper = taille_tableau - 1; 
                                random_index = generator_dice(lower, upper); 
                                position_intial_ligne = position_possibles_dice_diff[0][random_index]; 
                                position_intial_colone = position_possibles_dice_diff[1][random_index]; 
                                position_changer(tavli2, couleur, position_intial_ligne,position_intial_colone , random_value);

                                for (int i = 0; i < height; i++) {
                                    free(position_possibles_dice_egaux[i]);
                                }
                                // Free the array of pointers
                                free(position_possibles_dice_egaux);  
                                picture_generator(tavli2);
                                i = 0; 
                            }

                        }
                    }
                }
                
                

            }

            couleur = 1;             
        }

        checker_box = function_is_every_chercker_in_last_box(tavli2); 
    }

  

}

int main(){

    srand(time(0));
    int tavli[4][13]; 
    initialisation_tavli(tavli); 
    number_tavli_generator(tavli);     
    picture_generator(tavli); 


    int lower = 1; 
    int upper = 6; 

    int dicejoueur1 = generator_dice(lower, upper); 
    int dicejoueur2 = generator_dice(lower, upper); 

    printf("%d %d\n", dicejoueur1, dicejoueur2); 


    //joueur 1 : O, couleur = 1;  
    //joueur 2 : X, couleur = 2; 

    // void position_changer(int array_to_change[4][13], int couleur, int position_intial_ligne,int position_intial_colone , int nombre_dé){

    int dice1; 
    int dice2; 
    int position_initial_ligne; 
    int position_initial_colone;  
    int couleur; 
    int checker_last_box = 10; 
    int dicetotal; 
    int choix_somme_separate; 


    if(dicejoueur1 >= dicejoueur2){
        while((checker_last_box != 1) &&(checker_last_box != 2)){
            //joueur 1 d'abord; 
            dice1 = generator_dice(lower, upper); 
            dice2 = generator_dice(lower, upper); 
            dicetotal = dice1 + dice2; 
            printf("dés obtenus\ndé 1: %d\ndé 2: %d\n", dice1, dice2); 
            couleur = 1; 

            printf("1 pour somme des dés ou 2 pour dés séparés pour O \n"); 
            scanf("%d", &choix_somme_separate); 
            
            if(choix_somme_separate ==1){
                printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur O avec dé total \n");  
                scanf("%d", &position_initial_ligne); 
                scanf("%d", &position_initial_colone);      
                position_changer(tavli, couleur,position_initial_ligne, position_initial_colone, dicetotal); 
                picture_generator(tavli); 

                if(dice1 == dice2){
                    printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur O avec dé total \n");  
                    scanf("%d", &position_initial_ligne); 
                    scanf("%d", &position_initial_colone);      
                    position_changer(tavli, couleur,position_initial_ligne, position_initial_colone, dicetotal); 
                    picture_generator(tavli);                
                }
            }
            else if(choix_somme_separate == 2){
                printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur O avec dé 1 \n");  
                scanf("%d", &position_initial_ligne); 
                scanf("%d", &position_initial_colone);
                position_changer(tavli, couleur,position_initial_ligne, position_initial_colone, dice1); 
                picture_generator(tavli); 

                printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur O avec dé 2 \n");  
                scanf("%d", &position_initial_ligne); 
                scanf("%d", &position_initial_colone);
                position_changer(tavli, couleur, position_initial_ligne, position_initial_colone, dice2); 
                picture_generator(tavli);

                if(dice1 == dice2){
                    printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur O avec dé 1 \n");  
                    scanf("%d", &position_initial_ligne); 
                    scanf("%d", &position_initial_colone);
                    position_changer(tavli, couleur,position_initial_ligne, position_initial_colone, dice1); 
                    picture_generator(tavli); 

                    printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur O avec dé 2 \n");  
                    scanf("%d", &position_initial_ligne); 
                    scanf("%d", &position_initial_colone);
                    position_changer(tavli, couleur, position_initial_ligne, position_initial_colone, dice2); 
                    picture_generator(tavli);            
                }
            }

            //joueur 2 ensuite; 
            dice1 = generator_dice(lower, upper); 
            dice2 = generator_dice(lower, upper); 
            dicetotal = dice1 + dice2; 
            printf("dés obtenus\ndé 1: %d\ndé 2: %d\n", dice1, dice2); 
            couleur = 2; 

            printf("1 pour somme des dés ou 2 pour dés séparés pour X\n"); 
            scanf("%d", &choix_somme_separate); 


            if(choix_somme_separate ==1){
                printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur X avec dé total \n");  
                scanf("%d", &position_initial_ligne); 
                scanf("%d", &position_initial_colone);   
                position_changer(tavli, couleur,position_initial_ligne, position_initial_colone, dicetotal); 
                picture_generator(tavli);

                if(dice1 == dice2){
                    printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur X avec dé total \n");  
                    scanf("%d", &position_initial_ligne); 
                    scanf("%d", &position_initial_colone);   
                    position_changer(tavli, couleur,position_initial_ligne, position_initial_colone, dicetotal); 
                    picture_generator(tavli);                    
                }
            }

            else if(choix_somme_separate == 2){
                printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur X avec dé 1 \n");  
                scanf("%d", &position_initial_ligne); 
                scanf("%d", &position_initial_colone);   
                position_changer(tavli, couleur,position_initial_ligne, position_initial_colone, dice1); 
                picture_generator(tavli); 

                printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur X avec dé 2 \n");  
                scanf("%d", &position_initial_ligne); 
                scanf("%d", &position_initial_colone);           
                position_changer(tavli, couleur, position_initial_ligne, position_initial_colone, dice2); 
                picture_generator(tavli);

                if(dice1 == dice2){
                    printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur X avec dé 1 \n");  
                    scanf("%d", &position_initial_ligne); 
                    scanf("%d", &position_initial_colone);   
                    position_changer(tavli, couleur,position_initial_ligne, position_initial_colone, dice1); 
                    picture_generator(tavli); 

                    printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur X avec dé 2 \n");  
                    scanf("%d", &position_initial_ligne); 
                    scanf("%d", &position_initial_colone);           
                    position_changer(tavli, couleur, position_initial_ligne, position_initial_colone, dice2); 
                    picture_generator(tavli);                    
                }
            }

            checker_last_box =  function_is_every_chercker_in_last_box; 
        }
    }

    checker_last_box = 10; 

    if(dicejoueur1 < dicejoueur2){
        while((checker_last_box != 1) &&(checker_last_box != 2)){
           //joueur 2 d'abord; 
            dice1 = generator_dice(lower, upper); 
            dice2 = generator_dice(lower, upper); 
            dicetotal = dice1 + dice2; 
            printf("dés obtenus\ndé 1: %d\ndé 2: %d\n", dice1, dice2); 
            couleur = 2; 

            printf("1 pour somme des dés ou 2 pour dés séparés pour X \n"); 
            scanf("%d", &choix_somme_separate); 


            if(choix_somme_separate ==1){
                printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur X avec dé total \n");  
                scanf("%d", &position_initial_ligne); 
                scanf("%d", &position_initial_colone);   
                position_changer(tavli, couleur,position_initial_ligne, position_initial_colone, dicetotal); 
                picture_generator(tavli);

                if(dice1 == dice2){
                    printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur X avec dé total \n");  
                    scanf("%d", &position_initial_ligne); 
                    scanf("%d", &position_initial_colone);   
                    position_changer(tavli, couleur,position_initial_ligne, position_initial_colone, dicetotal); 
                    picture_generator(tavli);
                }
            }

            else if(choix_somme_separate == 2){
                printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur X avec dé 1 \n");  
                scanf("%d", &position_initial_ligne); 
                scanf("%d", &position_initial_colone);   
                position_changer(tavli, couleur,position_initial_ligne, position_initial_colone, dice1); 
                picture_generator(tavli); 

                printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur X avec dé 2 \n");  
                scanf("%d", &position_initial_ligne); 
                scanf("%d", &position_initial_colone);           
                position_changer(tavli, couleur, position_initial_ligne, position_initial_colone, dice2); 
                picture_generator(tavli);

                if(dice1 == dice2){
                    printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur X avec dé 1 \n");  
                    scanf("%d", &position_initial_ligne); 
                    scanf("%d", &position_initial_colone);   
                    position_changer(tavli, couleur,position_initial_ligne, position_initial_colone, dice1); 
                    picture_generator(tavli); 

                    printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur X avec dé 2 \n");  
                    scanf("%d", &position_initial_ligne); 
                    scanf("%d", &position_initial_colone);           
                    position_changer(tavli, couleur, position_initial_ligne, position_initial_colone, dice2); 
                    picture_generator(tavli);
                }
            } 


            //joueur 1 ensuite; 
            dice1 = generator_dice(lower, upper); 
            dice2 = generator_dice(lower, upper); 
            dicetotal = dice1 + dice2; 
            printf("dés obtenus\ndé 1: %d\ndé 2: %d\n", dice1, dice2); 
            couleur = 1; 

            printf("1 pour somme des dés ou 2 pour dés séparés pour O \n"); 
            scanf("%d", &choix_somme_separate); 
            
            if(choix_somme_separate ==1){
                printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur O avec dé total \n");  
                scanf("%d", &position_initial_ligne); 
                scanf("%d", &position_initial_colone);      
                position_changer(tavli, couleur,position_initial_ligne, position_initial_colone, dicetotal); 
                picture_generator(tavli); 

                if(dice1 == dice2){
                    printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur O avec dé total \n");  
                    scanf("%d", &position_initial_ligne); 
                    scanf("%d", &position_initial_colone);      
                    position_changer(tavli, couleur,position_initial_ligne, position_initial_colone, dicetotal); 
                    picture_generator(tavli); 
                }
            }
            else if(choix_somme_separate == 2){
                printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur O avec dé 1 \n");  
                scanf("%d", &position_initial_ligne); 
                scanf("%d", &position_initial_colone);
                position_changer(tavli, couleur,position_initial_ligne, position_initial_colone, dice1); 
                picture_generator(tavli); 

                printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur O avec dé 2 \n");  
                scanf("%d", &position_initial_ligne); 
                scanf("%d", &position_initial_colone);
                position_changer(tavli, couleur, position_initial_ligne, position_initial_colone, dice2); 
                picture_generator(tavli);

                if(dice1 == dice2){
                    printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur O avec dé 1 \n");  
                    scanf("%d", &position_initial_ligne); 
                    scanf("%d", &position_initial_colone);
                    position_changer(tavli, couleur,position_initial_ligne, position_initial_colone, dice1); 
                    picture_generator(tavli); 

                    printf("entrer la position initiale de ligne et ensuite la position initiale de colone pour joueur O avec dé 2 \n");  
                    scanf("%d", &position_initial_ligne); 
                    scanf("%d", &position_initial_colone);
                    position_changer(tavli, couleur, position_initial_ligne, position_initial_colone, dice2); 
                    picture_generator(tavli);
                }
            }
 

            checker_last_box =  function_is_every_chercker_in_last_box; 
        }



    }




    return 0; 
}