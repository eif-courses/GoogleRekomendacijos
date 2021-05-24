//
// Created by Marius on 5/24/2021.
//

#include "Zaidejas.h"

void Zaidejas::hit() {
  cout << "player hit:" << 5 << endl;
}

void Zaidejas::dodge() {
  cout << "dodged hit:" << endl;
}

void Zaidejas::heal() {
  cout << "healed:" << endl;
}

Zaidejas::Zaidejas(const string &name, int hp, int attack) : name(name), hp(hp), attack(attack) {}

const string &Zaidejas::GetName() const {
  return name;
}

int Zaidejas::GetHp() const {
  return hp;
}

int Zaidejas::GetAttack() const {
  return attack;
}
