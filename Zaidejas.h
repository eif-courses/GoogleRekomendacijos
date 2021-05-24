//
// Created by Marius on 5/24/2021.
//

#ifndef GOOGLEREKOMENDACIJOS_ZAIDEJAS_H
#define GOOGLEREKOMENDACIJOS_ZAIDEJAS_H
#include <iostream>
using namespace std;

class Zaidejas {
private:
  string name;
  int hp;
  int attack;
public:
  Zaidejas(const string &name, int hp, int attack);

  const string &GetName() const;
  int GetHp() const;
  int GetAttack() const;

  void hit();
  void dodge();
  void heal();
};


#endif //GOOGLEREKOMENDACIJOS_ZAIDEJAS_H
