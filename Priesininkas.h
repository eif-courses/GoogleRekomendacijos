//
// Created by Marius on 5/24/2021.
//

#ifndef GOOGLEREKOMENDACIJOS_PRIESININKAS_H
#define GOOGLEREKOMENDACIJOS_PRIESININKAS_H

#include <iostream>
using namespace std;

class Priesininkas {
private:
  string name;
  int hp;
  int attack;
public:
  Priesininkas(const string &name, int hp, int attack);

  const string &GetName() const;

  int GetHp() const;

  int GetAttack() const;
  void Hit();
  void SpellCast();

};


#endif //GOOGLEREKOMENDACIJOS_PRIESININKAS_H
