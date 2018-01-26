#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct punkt{
  int x;
  int y;
}punkt;


typedef struct prostokat{
        punkt a;
        punkt b;
        punkt c;
        punkt d;
}prostokat;


void wyswietlNapisIWyjdz() {
        printf("Prostokaty przecinaja sie lub zawieraja sie w sobie.\n");
        exit(0);
};


int main(int argc, char const *argv[]) {

        prostokat _prostokatA;
        prostokat _prostokatB;

        _prostokatA.a.x = 21;
        _prostokatA.a.y = 37;

        _prostokatA.b.x = 16;
        _prostokatA.b.y = 1;

        _prostokatA.c.x = 19;
        _prostokatA.c.y = 17;

        _prostokatA.d.x = 13;
        _prostokatA.d.y = 12;

        _prostokatB.a.x = -19;
        _prostokatB.a.y = 19;

        _prostokatB.b.x = -15;
        _prostokatB.b.y = 1;

        _prostokatB.c.x = -06;
        _prostokatB.c.y = -27;

        _prostokatB.d.x = 14;
        _prostokatB.d.y = -05;

        if (_prostokatA.a.x > _prostokatB.a.x && _prostokatA.a.x < _prostokatB.b.x && _prostokatA.a.y > _prostokatB.a.y && _prostokatA.a.y < _prostokatB.d.y) {
                wyswietlNapisIWyjdz();
        }

        if (_prostokatA.b.x > _prostokatB.a.x && _prostokatA.b.x < _prostokatB.b.x && _prostokatA.b.y > _prostokatB.a.y && _prostokatA.b.y < _prostokatB.d.y) {
                wyswietlNapisIWyjdz();
        }

        if (_prostokatA.c.x > _prostokatB.a.x && _prostokatA.c.x < _prostokatB.b.x && _prostokatA.c.y > _prostokatB.a.y && _prostokatA.c.y < _prostokatB.d.y) {
                wyswietlNapisIWyjdz();
        }

        if (_prostokatA.d.x > _prostokatB.a.x && _prostokatA.d.x < _prostokatB.b.x && _prostokatA.d.y > _prostokatB.a.y && _prostokatA.d.y < _prostokatB.d.y) {
                wyswietlNapisIWyjdz();
        }

        if (_prostokatB.a.x > _prostokatA.a.x && _prostokatB.a.x < _prostokatA.b.x && _prostokatB.a.y > _prostokatA.a.y && _prostokatB.a.y < _prostokatA.d.y) {
                wyswietlNapisIWyjdz();
        }

        if (_prostokatB.b.x > _prostokatA.a.x && _prostokatB.b.x < _prostokatA.b.x && _prostokatB.b.y > _prostokatA.a.y && _prostokatB.b.y < _prostokatA.d.y) {
                wyswietlNapisIWyjdz();
        }

        if (_prostokatB.c.x > _prostokatA.a.x && _prostokatB.c.x < _prostokatA.b.x && _prostokatB.c.y > _prostokatA.a.y && _prostokatB.c.y < _prostokatA.d.y) {
                wyswietlNapisIWyjdz();
        }

        if (_prostokatB.d.x > _prostokatA.a.x && _prostokatB.d.x < _prostokatA.b.x && _prostokatB.d.y > _prostokatA.a.y && _prostokatB.d.y < _prostokatA.d.y) {
                wyswietlNapisIWyjdz();
        }

        printf("Prostokaty nie przecinaja i nie zawieraja się w sobie.\n");

  return EXIT_SUCCESS;

}
