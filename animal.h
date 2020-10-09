#ifndef ANIMAL_H
#define ANIMAL_H

#include "attitude.cpp"
#include <iostream>
#include <string>
#include <cstdlib>

class Animal {
    public:

    Animal();
    ~Animal();

    std::string getName(){return m_name;};
    std::string getSpecies(){return m_species;};
    int getHappiness(){return m_happiness;};
    int getHealth(){return m_health;};
    int getHunger(){return m_hunger;};
    Attitude getAttitude() {return m_attitude;};

    void setName(std::string name) {m_name = name;};
    void setSpecies(std::string species) {m_species = species;};
    void setHappiness(int happiness) {m_happiness = happiness;};
    void setHealth(int health) {m_health = health;};
    void setAttitude(Attitude attitude) {m_attitude = attitude;};

    int hunger(int current); // decrements m_hunger
    int feed(int foodPoints); // increments m_hunger
    int sickness(bool isSick, int healthDamage);
    bool catchSickness(); // randomized chance of catching illness
    int sickDamage(); // randomized damage to health
    int unhappy(); // decrements hapiness if other animals are sick or if the exhibit isn't furnished


    private:
    std::string m_name;
    std::string m_species;
    int m_happiness;
    int m_health;
    int m_hunger;
    Attitude m_attitude; // value that determines how cooperative/calm the animal is

};

#endif