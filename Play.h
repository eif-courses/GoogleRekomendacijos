//
// Created by Marius on 5/24/2021.
//

#ifndef GOOGLEREKOMENDACIJOS_PLAY_H
#define GOOGLEREKOMENDACIJOS_PLAY_H
class Play{
public:
  static void start() {
    Zaidejas zaidejas("Rokas", 22, 1);

    Priesininkas priesininkas("Glut", 44, 2);

    zaidejas.hit();
    priesininkas.SpellCast();
  }
};
#endif //GOOGLEREKOMENDACIJOS_PLAY_H
