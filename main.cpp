#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

void verify(float *carro){
    if(x > 0.8){
        cout << "El carro avanza 83 metros." << endl;}
    else if(x < 0.8 && x > 0.6){
        cout << "El carro avanza 50 metros." << endl;}
    else if(x < 0.6 && x > 0.4){
        cout << "El carro avanza 30 metros." << endl;}
    else if(x < 0.4 && x > 0.2){
        cout << "Se detiene 3 pasos." << endl;}
    else{
        cout << "Retrocede 10 metros." << endl;}
}
void desplazamiento(float *C1, float *C2, float *C3, float *C4, float *C5, float *C6, float *C7, float *C8){
    // variables
    double x; vector<double> llegaron;
    // modulo de random-----------------
    srand(time(NULL));
    // Creo una lista, si esta llena, entonces el programa termina.
    while(llegaron.size() < 8){ 
        //C1
        x = rand()%10; x = x/10;
        verify(&C1, x);
        //C2
        x = rand()%10; x = x/10;
        //C3
        x = rand()%10; x = x/10;
        //C4
        x = rand()%10; x = x/10;
        //C5
        x = rand()%10; x = x/10;
        //C6
        x = rand()%10; x = x/10;
        //C7
        x = rand()%10; x = x/10;
        //C8
        x = rand()%10; x = x/10;

    }
    //----------------------------------
}
int main(){
    // 8 autos, 8 carriles de 300K(300 000m), gana el que llegue a 300km en la menor cantidad de pasos.   
    float Toreto, RayoMc, Mate, GosthRider, BatMovil, BanMystery, CJsBike, LaChama;
    desplazamiento(&Toreto, &RayoMc, &Mate, &GosthRider, &BatMovil, &BanMystery , &CJsBike, &LaChama);
}
