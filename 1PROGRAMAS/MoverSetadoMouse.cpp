#include <iostream>
#include <windows.h>
#include <cmath>
#include <thread>
#include <chrono>


using namespace std;

void moveMouseSmoothly(int x, int y, int speed) {
    POINT p;
    GetCursorPos(&p);
    int startX = p.x;
    int startY = p.y;

    int deltaX = x - startX;
    int deltaY = y - startY;
    int steps = std::sqrt(deltaX * deltaX + deltaY * deltaY);

    int baseSpeed = 1;

    for (int i = 0; i < steps; i++) {
        int currentX = startX + (deltaX * i) / steps;
        int currentY = startY + (deltaY * i) / steps;
        SetCursorPos(currentX, currentY);
        std::this_thread::sleep_for(std::chrono::milliseconds(baseSpeed + (1000 - speed)));
    }
    SetCursorPos(x, y);
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int x, y, speed;
    char choice;

    do {
        cout << "Digite a coordenada X: ";
        cin >> x;
        cout << "Digite a coordenada Y: ";
        cin >> y;
        cout << "Digite a velocidade (quanto maior o valor, mais rápido o movimento): ";
        cin >> speed;

        if (speed < 1) speed = 1;
        if (speed > 10000) speed = 10000;

        moveMouseSmoothly(x, y, speed);

        cout << "Mouse movido para (" << x << ", " << y << ") com velocidade " << speed << " ms" << endl;
        cout << "\n____________________________________________________________________________\n\n";
        cout << "Você deseja mover o mouse novamente? (s/n): ";
      
        cin >> choice;
    } while (choice == 's' || choice == 'S');

   

    return 0;
}