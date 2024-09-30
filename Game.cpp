#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void Game::generateSecretNumber() {
    std::srand(static_cast<unsigned>(std::time(0))); // Инициализация генератора случайных чисел
    secretNumber = std::rand() % 100 + 1; // Генерация числа от 1 до 100
}

void Game::guessNumber() {
    int guess;
    int attempts = 0;

    do {
        std::cout << "Введите ваше предположение (1-100): ";
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            std::cout << "Слишком маленькое число. Попробуйте снова.\n";
        } else if (guess > secretNumber) {
            std::cout << "Слишком большое число. Попробуйте снова.\n";
        } else {
            std::cout << "Поздравляем! Вы угадали число " << secretNumber << " за " << attempts << " попыток.\n";
        }
    } while (guess != secretNumber);
}

void Game::start() {
    generateSecretNumber();
    guessNumber();
}
