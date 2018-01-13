#include "vrcs.h"
#include "vector"
#include "iostream"

using namespace std;


/*Locate - Construtor*/
Locate::Locate(){
}


/*Locate - Gera os pontos de localização do objeto.*/
void Locate::setPoint(Point point){
	points[quant] = point;
	quant++;
}


/*Locate - Função de localização do objeto.*/
void Locate::getLocate(){
	for(int i = 0; i < quant; i++){
		Point points[i];				

		if((points[i].x > 0 && points[i].y > 0 && points[i].z > 0) || (points[i].x > 0 && points[i].y > 0 && points[i].z == 0) || (points[i].x > 0 && points[i].y == 0 && points[i].z > 0) || (points[i].x == 0 && points[i].y > 0 && points[i].z > 0)){
            cout << "\nObjeto no quadrante 1.\n\n";
        }
        if((points[i].x < 0 && points[i].y > 0 && points[i].z > 0) || (points[i].x < 0 && points[i].y > 0 && points[i].z == 0) || (points[i].x < 0 && points[i].y == 0 && points[i].z > 0)){
            cout << "\nObjeto no quadrante 2.\n\n";
        }
        if((points[i].x < 0 && points[i].y < 0 && points[i].z > 0) || (points[i].x < 0 && points[i].y < 0 && points[i].z == 0)){
            cout << "\nObjeto no quadrante 3.\n\n";
        }
        if((points[i].x > 0 && points[i].y < 0 && points[i].z > 0) || (points[i].x > 0 && points[i].y < 0 && points[i].z == 0) || (points[i].x == 0 && points[i].y < 0 && points[i].z > 0)){
            cout << "\nObjeto no quadrante 4.\n\n";
        }
        if((points[i].x > 0 && points[i].y > 0 && points[i].z < 0) || (points[i].x > 0 && points[i].y == 0 && points[i].z < 0) || (points[i].x == 0 && points[i].y > 0 && points[i].z < 0)){
            cout << "\nObjeto no quadrante 5.\n\n";
        }
        if((points[i].x < 0 && points[i].y > 0 && points[i].z < 0) || (points[i].x < 0 && points[i].y == 0 && points[i].z < 0)){
            cout << "\nObjeto no quadrante 6.\n\n";
        }
        if((points[i].x < 0 && points[i].y < 0 && points[i].z < 0)){
            cout << "\nObjeto no quadrante 7.\n\n";
        }
        if((points[i].x > 0 && points[i].y < 0 && points[i].z < 0) || (points[i].x == 0 && points[i].y < 0 && points[i].z < 0)){
            cout << "\nObjeto no quadrante 8.\n\n";
        }

        printf("\n\ns(%2.2f,%2.2f,%2.2f)", points[i].x, points[i].y, points[i].z);
    }
}


/*Movement - Construtor*/
Movement::Movement(){
}


/*Movement - Funções de direcionamento*/
char Movement::rightThrust(){
        printf("Selecionado:(>)...\n");
}

char Movement::leftThrust(){
        printf("Selecionado:(<)...\n");
}

char Movement::upThrust(){
        printf("Selecionado:(^)...\n");
}

char Movement::downThrust(){
        printf("Selecionado:(v)...\n");
}

char Movement::forwardThrust(){
        printf("Selecionado:(.)...\n");
}

char Movement::backThrust(){
        printf("Selecionado:(x)...\n");
}



/*Thrust - Contrutor*/
Thrust::Thrust(){
}


/*Thrust - Função de empuxo*/
float Thrust::getThrust(float gasMass){
    float shipMass, gasSpeedi=0, gasSpeedf=10, timeThrust=1 , force;

    force = (gasSpeedf * (gasMass/timeThrust)) + (shipMass * ((gasSpeedf - gasSpeedi)/timeThrust));

    return force;
}



/*Thrust - Função de empuxo*/
float Thrust::getThrust(float timeMove, float force){

    thrust = force * timeMove;

    return thrust;
}
