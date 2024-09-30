#ifndef GAME_H
#define GAME_H

class Game {
public:
    void start();
    
private:
    int secretNumber;
    void generateSecretNumber();
    void guessNumber();
};

#endif // GAME_H
