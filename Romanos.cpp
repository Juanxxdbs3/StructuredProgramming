/*

Elabore un programa en C++ que dado un año escrito en cifras arábigas, muestre el año escrito en números romanos,
dentro del rango de 1000 a 2000.
Nota: Recuerde que I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000.

*/

#include <iostream>
#include <cstdlib>

using namespace std;

int n1, n2, n3, n4;

void separar(int num){

    n1 = num / 1000;
    n2 = num / 100 % 10;
    n3 = num / 10 % 10;
    n4 = num % 10;

}


int main(){

    int num;
    string R1, R2, R3, R4;

    cout << "Escriba un numero: ";
    cin >> num;

    separar(num);

    switch(n1){
        case 1:
            R1 = "M";
            break;

        case 2:
            R1 = "MM";
            break;
        default:
            R4 = "";
            break;
    }

    switch(n2){
        case 1:
            R2 = "C";
            break;
        case 2:
            R2 = "CC";
            break;
        case 3:
            R2 = "CCC";
            break;
        case 4:
            R2 = "CD";
            break;
        case 5:
            R2 = "D";
            break;
        case 6:
            R2 = "DC";
            break;
        case 7:
            R2 = "DCC";
            break;
        case 8:
            R2 = "DCCC";
            break;
        case 9:
            R2 = "CM";
            break;
        default:
            R2 = "";
            break;

    }

    switch(n3){
        case 1:
            R3 = "X";
            break;
        case 2:
            R3 = "XX";
            break;
        case 3:
            R3 = "XXX";
            break;
        case 4:
            R3 = "XL";
            break;
        case 5:
            R3 = "L";
            break;
        case 6:
            R3 = "LX";
            break;
        case 7:
            R3 = "LXX";
            break;
        case 8:
            R3 = "LXX";
            break;
        case 9:
            R3 = "XC";
            break;
        default:
            R3 = "";
            break;

    }

    switch(n4){
        case 1:
            R4 = "I";
            break;
        case 2:
            R4 = "II";
            break;
        case 3:
            R4 = "III";
            break;
        case 4:
            R4 = "IV";
            break;
        case 5:
            R4 = "V";
            break;
        case 6:
            R4 = "VI";
            break;
        case 7:
            R4 = "VII";
            break;
        case 8:
            R4 = "VIII";
            break;
        case 9:
            R4 = "IX";
            break;
        default:
            R4 = "";
            break;
    }

    cout << "El numero " << num << " en romano es: " << R1 << R2 << R3 << R4 << endl;

    system("PAUSE");
    return 0;
}
