#include "vrcs.h"
#include "cstdlib"
#include "vector"
#include "iostream"
using namespace std;


int main(){

	/*Definição dos dados.*/
	Point p;
	Locate l;
    Thrust t;
	Movement m;
    Point point;


	/*Entrada da função locate.*/
	cout << "Escreva as coordenadas de posicao do objeto\n\n";
	cout << "\nx:";
	cin >> p.x;
	cout << "\ny:";
	cin >> p.y;
	cout << "\nz:";
	cin >> p.z;


    /*Entrada de gasMass em função getThrust*/
    cout << "\nEscreva a massa de gas a ser expelida:";
    cin >> gasMass;
    


    /*Entrada de timeThrust na outra função getThrust*/
    cout << "\nEscreva o tempo em que essa massa vai ser expelida:";
    cin >> timeMove;


	/*Inicio do looping*/
    do{

		/*Entrada da função controle*/
        int n;
        cout << "\n\n\nFunção controle ativada...\n\n\n\n\n";
        cout << "Escreva o numero de vetores empuxo:";
        cin >> n;

        int i;
        char thrust[n];
        printf("\n\nSeletor de direcao:");
        printf("\nr: empuxo para direita. \nl: empuxo para esquerda. \nu: empuxo para cima. \nd: empuxo para baixo. \nf: empuxo para frente. \nb: empuxo para tras.\n\n\n");
        scanf("%s", &thrust);
        for(i=0;i<n;i++){
            if (thrust[i]=='r'){
                p.x = p.x + ds;
                rightThrust();
            }
            else if (thrust[i]=='l'){
                p.x = p.x - ds;
                leftThrust();
            }
            else if (thrust[i]=='u'){
                p.y = p.y + ds;
                upThrust();
            }
            else if (thrust[i]=='d'){
                p.y = p.y - ds;
                downThrust();
            }
            else if (thrust[i]=='f'){
                p.z = p.z + ds;
                forwardThrust();
            }
            else {
                p.z = p.z - ds;
                backThrust();
            }
        }

		/*Saida Final*/
        cout << "\n\nResultado final da manipulacao dos pontos...";
        getLocate();

	/*Fim do looping*/
    }while(p.x!=0 || p.y!=0 || p.z!=0);


    /*Chamada polimórfica*/
    Thrust *th_thrust;
    th_thrust->getThrust();
    th_thrust->getThrust();



	/*Instanciação dos objetos.*/
	l.setPoint(p);
	l.getLocate();
	
    
    m.rightThrust();
	m.leftThrust();
	m.upThrust();
	m.downThrust();
	m.forwardThrust();
	m.backThrust();
    

}