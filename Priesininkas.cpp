//
// Created by Marius on 5/24/2021.
//

#include "Priesininkas.h"

Priesininkas::Priesininkas(const string &name, int hp, int attack) : name(name), hp(hp), attack(attack) {}

const string &Priesininkas::GetName() const {
  return name;
}

int Priesininkas::GetHp() const {
  return hp;
}

int Priesininkas::GetAttack() const {
  return attack;
}

void Priesininkas::Hit() {
  cout << "Priesininkas trenke";
}

void Priesininkas::SpellCast() {
  cout << "Issove magija";
}
