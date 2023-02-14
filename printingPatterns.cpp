#include <iostream>
using namespace std;

void diamondPattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            cout << " ";
        }
        for(int k = 0; k < i; k++){
            cout << "* ";
        }
        cout << endl;
        }

        for(int x = 0; x < n; x++){
            for(int y = 0; y < x; y++){
                cout << " ";
            }
            for(int z = x; z < n; z++){
                cout << "* ";
            }
        cout << endl;
    }
}

void halfDiamondPattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            cout << " ";
        }
        for(int k = 0; k < i; k++){
            cout << "*";
        }
        cout << endl;
    }

    for(int x = 0; x < n; x++){
        for(int z = 0; z < x; z++){
            cout << " ";
        }
        for(int y = x; y < n; y++){
            cout << "*";
        }
        cout << endl;

    }
}

void halfDiamondPattern_ii(int n){
    for(int i = 0; i < n; i++ ){
        for(int j = 0; j < i; j++){
            cout << "* ";
        }
        cout << endl;
        }

    for(int x = 0; x < n; x++){
        for(int k = n; k > x; k--){
            cout << "* ";
        }    
        cout << endl;
    }
}

void hourGlassPattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int k = i; k < n; k++){
            cout << "* ";
        }
        cout << endl;
    }

    for(int x = 0; x < n; x++){
        for(int y = x; y < n - 1; y++){
            cout << " ";
        }
        for(int z = 0; z <= x; z++){
            cout << "* ";
        }
        cout << endl;
    }
}

void rightTrianglePattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void trianglePattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
            cout << " ";
        }
        for(int k = 0; k < i; k++){
            cout << "* ";
        }
        cout << endl;
    }
}

void reverseTrianglePattern(int n){
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        for(int k = i; k < n; k++){
            cout << "* ";
        }
        cout << endl;
    }
}

void rightTrianglePattern_ii(int n){
      for(int i = 0; i < 5; i++) {
        for(int j = i; j < 5; j++){
            cout << " ";
        }
        for(int k = 0; k < i; k++){
            cout << "*";
        }
        cout << endl;
      }
}

int main() {
    cout << "[a] Diamond Pattern" << endl;
    cout << "[b] Half Diamond Pattern" << endl;
    cout << "[c] Half Diamond II Pattern" << endl;
    cout << "[d] Hour Glass Pattern" << endl;
    cout << "[e] Right Triangle Pattern" << endl;
    cout << "[f] Triangle Pattern" << endl;
    cout << "[g] Reverse Triangle Pattern" << endl;
    cout << "[h] Reverse Right Triangle Pattern\n" << endl;

    char input_character;
    cout << "Enter Character: ";
    cin >> input_character;

    int n = 0;
    cout << "Enter number: ";
    cin >> n;

    cout << "\n";

    switch (input_character) {
        case 'a':
            diamondPattern(n);
        break;

        case 'b': 
            halfDiamondPattern(n);
        break;

        case 'c': 
            halfDiamondPattern_ii(n);
        break;

        case 'd': 
            hourGlassPattern(n);
        break;

        case 'e': 
            rightTrianglePattern(n);
        break;

        case 'f': 
            trianglePattern(n);
        break;

        case 'g': 
            reverseTrianglePattern(n);
        break;

        case 'h': 
            rightTrianglePattern_ii(n);
        break;

        default:
            break;
    }

    return 0;
}