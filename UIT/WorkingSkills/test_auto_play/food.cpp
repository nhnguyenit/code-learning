#include <iostream>
#include <conio.h> // For _kbhit() and _getch()
#include <windows.h> // For Sleep() and SetConsoleTextAttribute() and Beep()
#include <vector>
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time()
#include <fstream> // For file handling


using namespace std;


class Food {
private:
    int x, y;
    char symbol; // Symbol to represent the food
    int color; // Color of the food

public:
    Food() {
        spawn();
    }

    void spawn() {
        x = rand() % (width - 2) + 1; // Avoid borders
        y = rand() % (height - 2) + 1; // Avoid borders
        symbol = 'A' + rand() % 26; // Random alphabet from A to Z
        color = 10 + rand() % 7; // Random color (10 to 16 for bright colors)
    }

    int getX() const { return x; }
    int getY() const { return y; }
    char getSymbol() const { return symbol; }
    int getColor() const { return color; }
};

// Class representing the Snake object
class Snake {
private:
    int x, y;
    vector<pair<int, int>> tail; // Vector to store the segments of the snake's tail
    int score;

public:
    Snake() : x(width / 2), y(height / 2), score(0) {}

    void move(int dir) {
        // Insert new head position
        tail.insert(tail.begin(), { x, y });
        switch (dir) {
            case 0: y--; break; // UP
            case 1: y++; break; // DOWN
            case 2: x--; break; // LEFT
            case 3: x++; break; // RIGHT
        }

        // Only remove the last segment if not growing
        if (tail.size() > score + 1) {
            tail.pop_back(); // Keep the tail the right length
        }
    }

    void grow() {
        score++; // Increment score
        tail.push_back(tail.back()); // Duplicate the last segment
    }

    bool checkCollision() {
        if (x >= width - 1 || x < 1 || y >= height - 1 || y < 1) return true; // Wall collision
        for (const auto& segment : tail) { // Check all segments
            if (segment.first == x && segment.second == y) return true; // Self collision
        }
        return false;
    }

    int getX() const { return x; }
    int getY() const { return y; }
    int getScore() const { return score; }
    const vector<pair<int, int>>& getTail() const { return tail; }

    void reset() {
        x = width / 2;
        y = height / 2;
        score = 0;
        tail.clear();
    }
};