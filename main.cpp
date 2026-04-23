#include <windows.h>
#include <GL/glut.h>


float shipMove = 0.0f;
bool shipOn = false;
//bool carOn = false;
//bool rainOn = false;
//bool cloudOn = false;
bool allOn = false;

// ID1 (River)
void river() {
    glBegin(GL_POLYGON);

        glColor3ub(0, 150, 255);
        glVertex2f(0, 30);

        glColor3ub(0, 150, 255);
        glVertex2f(130, 30);

        glColor3ub(0, 50, 150);
        glVertex2f(130, 0);

        glColor3ub(0, 50, 150);
        glVertex2f(0, 0);

    glEnd();
}

// ID2 (Road)
void road() {
    glColor3ub(50, 50, 50);
    glBegin(GL_POLYGON);
        glVertex2f(0, 35);
        glVertex2f(130, 35);
        glVertex2f(130, 45);
        glVertex2f(0, 45);
    glEnd();

    glColor3ub(255,255,255);
    glLineWidth(3);
    glBegin(GL_LINES);
        glVertex2f(5,40);
        glVertex2f(10,40);
        glVertex2f(15,40);
        glVertex2f(20,40);
        glVertex2f(25,40);
        glVertex2f(30,40);
        glVertex2f(35,40);
        glVertex2f(40,40);
        glVertex2f(45,40);
        glVertex2f(50,40);
        glVertex2f(55,40);
        glVertex2f(60,40);
        glVertex2f(65,40);
        glVertex2f(70,40);
        glVertex2f(75,40);
        glVertex2f(80,40);
        glVertex2f(85,40);
        glVertex2f(90,40);
        glVertex2f(95,40);
        glVertex2f(100,40);
        glVertex2f(105,40);
        glVertex2f(110,40);
        glVertex2f(115,40);
        glVertex2f(120,40);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
        glVertex2f(0,34.5);
        glVertex2f(0,35);
        glVertex2f(130,35);
        glVertex2f(130,34.5);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
        glVertex2f(0,45);
        glVertex2f(0,45.5);
        glVertex2f(130,45.5);
        glVertex2f(130,45);
    glEnd();
}

// ID3 (Walkaway)
void walkway(){
    glColor3ub(39, 130, 45);
    glBegin(GL_POLYGON);
        glVertex2f(0,30);
        glVertex2f(0,34.5);
        glVertex2f(130,34.5);
        glVertex2f(130,30);
    glEnd();

    glColor3ub(39, 130, 45);
    glBegin(GL_POLYGON);
        glVertex2f(0,45.5);
        glVertex2f(0,50);
        glVertex2f(130,50);
        glVertex2f(130,45.5);
    glEnd();
}

// ID4 (sky)
void sky() {
    glBegin(GL_POLYGON);

        glColor3ub(135, 206, 235);
        glVertex2f(0, 120);

        glColor3ub(135, 206, 235);
        glVertex2f(130, 120);

        glColor3ub(255, 220, 120);
        glVertex2f(130, 50);

        glColor3ub(255, 220, 120);
        glVertex2f(0, 50);

    glEnd();
}

//ID5
void building1(){
    glColor3ub(96,96,96);
    glBegin(GL_POLYGON);
        glVertex2f(54,50);
        glVertex2f(54,66);
        glVertex2f(78,66);
        glVertex2f(78,50);
    glEnd();

    glColor3ub(96,96,96);
    glBegin(GL_POLYGON);
        glVertex2f(66,66);
        glVertex2f(66,82);
        glVertex2f(78,82);
        glVertex2f(78,66);
    glEnd();

    glColor3ub(204,255,229);
    glBegin(GL_POLYGON);
        glVertex2f(67,68);
        glVertex2f(67,80);
        glVertex2f(77,80);
        glVertex2f(77,68);
    glEnd();

    glColor3ub(51,0,25);
    glBegin(GL_POLYGON);
        glVertex2f(65,82);
        glVertex2f(65,83);
        glVertex2f(79,83);
        glVertex2f(79,82);
    glEnd();

    glColor3ub(51,0,25);
    glBegin(GL_POLYGON);
        glVertex2f(64,83);
        glVertex2f(64,84);
        glVertex2f(80,84);
        glVertex2f(80,83);
    glEnd();

    glColor3ub(204,255,229);
    glBegin(GL_POLYGON);
        glVertex2f(55,52);
        glVertex2f(55,64);
        glVertex2f(65,64);
        glVertex2f(65,52);
    glEnd();

    glColor3ub(66,64,64);
    glLineWidth(2);
    glBegin(GL_LINES);
        glVertex2f(55,64);
        glVertex2f(65,64);
        glVertex2f(55,58);
        glVertex2f(65,58);
        glVertex2f(55,52);
        glVertex2f(65,52);
        glVertex2f(55,52);
        glVertex2f(55,64);
        glVertex2f(57,52);
        glVertex2f(57,64);
        glVertex2f(60,52);
        glVertex2f(60,64);
        glVertex2f(63,52);
        glVertex2f(63,64);
        glVertex2f(67,78);
        glVertex2f(77,78);
        glVertex2f(67,70);
        glVertex2f(77,70);
        glVertex2f(69,80);
        glVertex2f(69,68);
        glVertex2f(72,80);
        glVertex2f(72,68);
        glVertex2f(75,80);
        glVertex2f(75,68);
        glVertex2f(66,63);
        glVertex2f(78,63);
        glVertex2f(66,62);
        glVertex2f(78,62);
        glVertex2f(66,61);
        glVertex2f(78,61);
        glVertex2f(66,60);
        glVertex2f(78,60);
        glVertex2f(54,66);
        glVertex2f(54,70);
        glVertex2f(58,66);
        glVertex2f(58,70);
        glVertex2f(62,66);
        glVertex2f(62,70);
        glVertex2f(66,66);
        glVertex2f(66,70);
        glVertex2f(54,70);
        glVertex2f(66,70);
        glVertex2f(54,68);
        glVertex2f(66,68);
    glEnd();

    glColor3ub(204,255,229);
    glBegin(GL_POLYGON);
        glVertex2f(69,50);
        glVertex2f(69,61);
        glVertex2f(75,61);
        glVertex2f(75,50);
    glEnd();

    glColor3ub(66,64,64);
    glLineWidth(5);
    glBegin(GL_LINES);
        glVertex2f(69,50);
        glVertex2f(69,61);
        glVertex2f(69,61);
        glVertex2f(75,61);
        glVertex2f(75,61);
        glVertex2f(75,50);
        glVertex2f(72,50);
        glVertex2f(72,61);
    glEnd();

    glColor3ub(66, 64, 64);
    glLineWidth(5);
    glBegin(GL_LINES);
        glVertex2f(66,50);
        glVertex2f(66,82);
        glVertex2f(78,50);
        glVertex2f(78,82);
        glVertex2f(54,50);
        glVertex2f(54,66);
        glVertex2f(53,66);
        glVertex2f(78,66);
    glEnd();

    glColor3ub(51, 0, 25);
    glLineWidth(5);
    glBegin(GL_LINES);
        glVertex2f(54,50);
        glVertex2f(78,50);
    glEnd();

    glColor3ub(139,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(53,49);
        glVertex2f(53,50);
        glVertex2f(79,50);
        glVertex2f(79,49);
    glEnd();

    glBegin(GL_POLYGON);

        glColor3ub(139,69,19);
        glVertex2f(69,45.5);

        glColor3ub(139,69,19);
        glVertex2f(75,45.5);

        glColor3ub(210,105,30);
        glVertex2f(75,50);

        glColor3ub(210,105,30);
        glVertex2f(69,50);

    glEnd();
}

//ID6
void building2(){
    glColor3ub(190, 149, 196);
    glBegin(GL_POLYGON);
        glVertex2f(82,50);
        glVertex2f(82,83);
        glVertex2f(100,83);
        glVertex2f(100,50);
    glEnd();

    glColor3ub(190, 149, 196);
    glBegin(GL_POLYGON);
        glVertex2f(85,83);
        glVertex2f(85,87);
        glVertex2f(97,87);
        glVertex2f(97,83);
    glEnd();

    glColor3ub(255,255,255);
    glLineWidth(5);
    glBegin(GL_LINES);
        glVertex2f(82,50);
        glVertex2f(82,83);
        glVertex2f(82,83);
        glVertex2f(100,83);
        glVertex2f(100,83);
        glVertex2f(100,50);
        glVertex2f(82,76);
        glVertex2f(100,76);
        glVertex2f(82,70);
        glVertex2f(100,70);
        glVertex2f(82,64);
        glVertex2f(100,64);
        glVertex2f(82,58);
        glVertex2f(100,58);
    glEnd();

    glColor3ub(255,255,255);
    glLineWidth(3);
    glBegin(GL_LINES);
        glVertex2f(85,50);
        glVertex2f(85,83);
        glVertex2f(88,50);
        glVertex2f(88,83);
        glVertex2f(91,50);
        glVertex2f(91,83);
        glVertex2f(94,50);
        glVertex2f(94,83);
        glVertex2f(97,50);
        glVertex2f(97,83);
    glEnd();

    glColor3ub(94, 84, 142);
    glLineWidth(5);
    glBegin(GL_LINES);
        glVertex2f(88,50);
        glVertex2f(88,58);
        glVertex2f(88,58);
        glVertex2f(94,58);
        glVertex2f(94,58);
        glVertex2f(94,50);
        glVertex2f(91,50);
        glVertex2f(91,58);
    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(13, 92, 99);
    glVertex2f(80,50);

    glColor3ub(13, 92, 99);
    glVertex2f(87,50);

    glColor3ub(68, 161, 160);
    glVertex2f(87,54);

    glColor3ub(68, 161, 160);
    glVertex2f(80,54);

    glEnd();


    glBegin(GL_POLYGON);

     glColor3ub(13, 92, 99);
        glVertex2f(95,50);

     glColor3ub(13, 92, 99);
        glVertex2f(102,50);

     glColor3ub(68, 161, 160);
        glVertex2f(102,54);

    glColor3ub(68, 161, 160);
        glVertex2f(95,54);
    glEnd();

}

//ID7
void building3()
{
    glColor3ub(245,222,179);
    glBegin(GL_POLYGON);
        glVertex2f(104,50);
        glVertex2f(104,90);
        glVertex2f(124,90);
        glVertex2f(124,50);
    glEnd();

    glColor3ub(204, 88, 3);
    glBegin(GL_POLYGON);
        glVertex2f(104.5,88);
        glVertex2f(108,88);
        glVertex2f(108,82);
        glVertex2f(104.5,82);
    glEnd();

    glColor3ub(204, 88, 3);
    glBegin(GL_POLYGON);
        glVertex2f(104.5,80);
        glVertex2f(108,80);
        glVertex2f(108,74);
        glVertex2f(104.5,74);
    glEnd();

    glColor3ub(204, 88, 3);
    glBegin(GL_POLYGON);
        glVertex2f(104.5,72);
        glVertex2f(108,72);
        glVertex2f(108,66);
        glVertex2f(104.5,66);
    glEnd();

    glColor3ub(204, 88, 3);
    glBegin(GL_POLYGON);
        glVertex2f(104.5,64);
        glVertex2f(108,64);
        glVertex2f(108,58);
        glVertex2f(104.5,58);
    glEnd();

    glColor3ub(204, 88, 3);
    glBegin(GL_POLYGON);
        glVertex2f(104.5,56);
        glVertex2f(108,56);
        glVertex2f(108,50);
        glVertex2f(104.5,50);
    glEnd();

    glColor3ub(247, 147, 76);
    glBegin(GL_POLYGON);
        glVertex2f(108,82);
        glVertex2f(108,88);
        glVertex2f(113,88);
        glVertex2f(113,82);
    glEnd();

    glColor3ub(247, 147, 76);
    glBegin(GL_POLYGON);
        glVertex2f(108,74);
        glVertex2f(108,80);
        glVertex2f(113,80);
        glVertex2f(113,74);
    glEnd();

    glColor3ub(247, 147, 76);
    glBegin(GL_POLYGON);
        glVertex2f(108,66);
        glVertex2f(108,72);
        glVertex2f(113,72);
        glVertex2f(113,66);
    glEnd();

    glColor3ub(247, 147, 76);
    glBegin(GL_POLYGON);
        glVertex2f(108,58);
        glVertex2f(108,64);
        glVertex2f(113,64);
        glVertex2f(113,58);
    glEnd();

    glColor3ub(247, 147, 76);
    glBegin(GL_POLYGON);
        glVertex2f(108,50);
        glVertex2f(108,56);
        glVertex2f(113,56);
        glVertex2f(113,50);
    glEnd();

    glColor3ub(114, 47, 60);
    glBegin(GL_POLYGON);
        glVertex2f(115,82);
        glVertex2f(115,88);
        glVertex2f(123.5,88);
        glVertex2f(123.5,82);
    glEnd();

    glColor3ub(114, 47, 60);
    glBegin(GL_POLYGON);
        glVertex2f(115,74);
        glVertex2f(115,80);
        glVertex2f(123.5,80);
        glVertex2f(123.5,74);
    glEnd();

    glColor3ub(114, 47, 60);
    glBegin(GL_POLYGON);
        glVertex2f(115,66);
        glVertex2f(115,72);
        glVertex2f(123.5,72);
        glVertex2f(123.5,66);
    glEnd();

    glColor3ub(114, 47, 60);
    glBegin(GL_POLYGON);
        glVertex2f(115,58);
        glVertex2f(115,64);
        glVertex2f(123.5,64);
        glVertex2f(123.5,58);
    glEnd();

    glColor3ub(114, 47, 60);
    glBegin(GL_POLYGON);
        glVertex2f(115,50);
        glVertex2f(115,56);
        glVertex2f(123.5,56);
        glVertex2f(123.5,50);
    glEnd();

    glColor3ub(114, 47, 60);
    glLineWidth(3);
    glBegin(GL_LINES);
        glVertex2f(104,50);
        glVertex2f(104,90);
        glVertex2f(103.8,90);
        glVertex2f(124.2,90);
        glVertex2f(124,90);
        glVertex2f(124,50);
    glEnd();

    glColor3ub(71, 67, 80);
    glBegin(GL_POLYGON);
        glVertex2f(79.5,49);
        glVertex2f(79.5,50);
        glVertex2f(102.5,50);
        glVertex2f(102.5,49);
    glEnd();

}

//ID8
void building4()
{
    glColor3ub(170, 68, 101);
    glBegin(GL_POLYGON);
        glVertex2f(50,50);
        glVertex2f(50,86);
        glVertex2f(32,86);
        glVertex2f(32,50);
    glEnd();

    glColor3ub(255, 166, 158);
    glBegin(GL_POLYGON);
        glVertex2f(33,81);
        glVertex2f(33,85);
        glVertex2f(49,85);
        glVertex2f(49,81);
    glEnd();

    glColor3ub(147, 225, 216);
    glBegin(GL_POLYGON);
        glVertex2f(33,81);
        glVertex2f(33,85);
        glVertex2f(36,85);
        glVertex2f(36,81);
    glEnd();

    glColor3ub(221, 255, 247);
    glBegin(GL_POLYGON);
        glVertex2f(37,82);
        glVertex2f(37,84);
        glVertex2f(42,84);
        glVertex2f(42,82);
    glEnd();

    glColor3ub(221, 255, 247);
    glBegin(GL_POLYGON);
        glVertex2f(44,82);
        glVertex2f(44,84);
        glVertex2f(48.5,84);
        glVertex2f(48.5,82);
    glEnd();

    glColor3ub(255, 166, 158);
    glBegin(GL_POLYGON);
        glVertex2f(33,75);
        glVertex2f(33,79);
        glVertex2f(49,79);
        glVertex2f(49,75);
    glEnd();

    glColor3ub(255, 166, 158);
    glBegin(GL_POLYGON);
        glVertex2f(33,75);
        glVertex2f(33,79);
        glVertex2f(49,79);
        glVertex2f(49,75);
    glEnd();

    glColor3ub(147, 225, 216);
    glBegin(GL_POLYGON);
        glVertex2f(33,75);
        glVertex2f(33,79);
        glVertex2f(36,79);
        glVertex2f(36,75);
    glEnd();

    glColor3ub(221, 255, 247);
    glBegin(GL_POLYGON);
        glVertex2f(37,76);
        glVertex2f(37,78);
        glVertex2f(42,78);
        glVertex2f(42,76);
    glEnd();

    glColor3ub(221, 255, 247);
    glBegin(GL_POLYGON);
        glVertex2f(44,76);
        glVertex2f(44,78);
        glVertex2f(48.5,78);
        glVertex2f(48.5,76);
    glEnd();

    glColor3ub(255, 166, 158);
    glBegin(GL_POLYGON);
        glVertex2f(33,69);
        glVertex2f(33,73);
        glVertex2f(49,73);
        glVertex2f(49,69);
    glEnd();

    glColor3ub(147, 225, 216);
    glBegin(GL_POLYGON);
        glVertex2f(33,69);
        glVertex2f(33,73);
        glVertex2f(36,73);
        glVertex2f(36,69);
    glEnd();

    glColor3ub(221, 255, 247);
    glBegin(GL_POLYGON);
        glVertex2f(37,70);
        glVertex2f(37,72);
        glVertex2f(42,72);
        glVertex2f(42,70);
    glEnd();

    glColor3ub(221, 255, 247);
    glBegin(GL_POLYGON);
        glVertex2f(44,70);
        glVertex2f(44,72);
        glVertex2f(48.5,72);
        glVertex2f(48.5,70);
    glEnd();

    glColor3ub(255, 166, 158);
    glBegin(GL_POLYGON);
        glVertex2f(33,63);
        glVertex2f(33,67);
        glVertex2f(49,67);
        glVertex2f(49,63);
    glEnd();

    glColor3ub(147, 225, 216);
    glBegin(GL_POLYGON);
        glVertex2f(33,63);
        glVertex2f(33,67);
        glVertex2f(36,67);
        glVertex2f(36,63);
    glEnd();

    glColor3ub(221, 255, 247);
    glBegin(GL_POLYGON);
        glVertex2f(37,64);
        glVertex2f(37,66);
        glVertex2f(42,66);
        glVertex2f(42,64);
    glEnd();

    glColor3ub(221, 255, 247);
    glBegin(GL_POLYGON);
        glVertex2f(44,64);
        glVertex2f(44,66);
        glVertex2f(48.5,66);
        glVertex2f(48.5,64);
    glEnd();

    glColor3ub(255, 166, 158);
    glBegin(GL_POLYGON);
        glVertex2f(33,57);
        glVertex2f(33,61);
        glVertex2f(49,61);
        glVertex2f(49,57);
    glEnd();

    glColor3ub(147, 225, 216);
    glBegin(GL_POLYGON);
        glVertex2f(33,57);
        glVertex2f(33,61);
        glVertex2f(36,61);
        glVertex2f(36,57);
    glEnd();

    glColor3ub(221, 255, 247);
    glBegin(GL_POLYGON);
        glVertex2f(37,58);
        glVertex2f(37,60);
        glVertex2f(42,60);
        glVertex2f(42,58);
    glEnd();

    glColor3ub(221, 255, 247);
    glBegin(GL_POLYGON);
        glVertex2f(44,58);
        glVertex2f(44,60);
        glVertex2f(48.5,60);
        glVertex2f(48.5,58);
    glEnd();

    glColor3ub(255, 166, 158);
    glBegin(GL_POLYGON);
        glVertex2f(33,51);
        glVertex2f(33,55);
        glVertex2f(49,55);
        glVertex2f(49,51);
    glEnd();

    glColor3ub(147, 225, 216);
    glBegin(GL_POLYGON);
        glVertex2f(33,51);
        glVertex2f(33,55);
        glVertex2f(36,55);
        glVertex2f(36,51);
    glEnd();

    glColor3ub(221, 255, 247);
    glBegin(GL_POLYGON);
        glVertex2f(37,52);
        glVertex2f(37,54);
        glVertex2f(42,54);
        glVertex2f(42,52);
    glEnd();

    glColor3ub(221, 255, 247);
    glBegin(GL_POLYGON);
        glVertex2f(44,52);
        glVertex2f(44,54);
        glVertex2f(48.5,54);
        glVertex2f(48.5,52);
    glEnd();

    glColor3ub(65, 67, 97);
    glLineWidth(3);
    glBegin(GL_LINES);
        glVertex2f(32,50);
        glVertex2f(32,86);
        glVertex2f(31.9,86);
        glVertex2f(50.2,86);
        glVertex2f(50,86);
        glVertex2f(50,50);
    glEnd();

    glColor3ub(71, 67, 80);
    glBegin(GL_POLYGON);
        glVertex2f(31.5,49);
        glVertex2f(31.5,50);
        glVertex2f(50.5,50);
        glVertex2f(50.5,49);
    glEnd();
}

//ID9
void building5()
{
    glColor3ub(173, 252, 146);
    glBegin(GL_POLYGON);
        glVertex2f(12,50);
        glVertex2f(12,94);
        glVertex2f(30,94);
        glVertex2f(30,50);
    glEnd();

    glColor3ub(71, 49, 152);
    glBegin(GL_POLYGON);
        glVertex2f(13,88);
        glVertex2f(13,93);
        glVertex2f(29,93);
        glVertex2f(29,88);
    glEnd();

    glColor3ub(155, 243, 240);
    glBegin(GL_POLYGON);
        glVertex2f(13,88);
        glVertex2f(13,93);
        glVertex2f(17,93);
        glVertex2f(17,88);
    glEnd();

    glColor3ub(218, 255, 237);
    glBegin(GL_POLYGON);
        glVertex2f(18,89);
        glVertex2f(18,92);
        glVertex2f(24,92);
        glVertex2f(24,89);
    glEnd();

    glColor3ub(218, 255, 237);
    glBegin(GL_POLYGON);
        glVertex2f(25,89);
        glVertex2f(25,92);
        glVertex2f(28.5,92);
        glVertex2f(28.5,89);
    glEnd();

    glColor3ub(71, 49, 152);
    glBegin(GL_POLYGON);
        glVertex2f(13,80);
        glVertex2f(13,85);
        glVertex2f(29,85);
        glVertex2f(29,80);
    glEnd();

    glColor3ub(155, 243, 240);
    glBegin(GL_POLYGON);
        glVertex2f(13,80);
        glVertex2f(13,85);
        glVertex2f(17,85);
        glVertex2f(17,80);
    glEnd();

    glColor3ub(218, 255, 237);
    glBegin(GL_POLYGON);
        glVertex2f(18,81);
        glVertex2f(18,84);
        glVertex2f(24,84);
        glVertex2f(24,81);
    glEnd();

    glColor3ub(218, 255, 237);
    glBegin(GL_POLYGON);
        glVertex2f(25,81);
        glVertex2f(25,84);
        glVertex2f(28.5,84);
        glVertex2f(28.5,81);
    glEnd();

    glColor3ub(71, 49, 152);
    glBegin(GL_POLYGON);
        glVertex2f(13,72);
        glVertex2f(13,77);
        glVertex2f(29,77);
        glVertex2f(29,72);
    glEnd();

    glColor3ub(155, 243, 240);
    glBegin(GL_POLYGON);
        glVertex2f(13,72);
        glVertex2f(13,77);
        glVertex2f(17,77);
        glVertex2f(17,72);
    glEnd();

    glColor3ub(218, 255, 237);
    glBegin(GL_POLYGON);
        glVertex2f(18,73);
        glVertex2f(18,76);
        glVertex2f(24,76);
        glVertex2f(24,73);
    glEnd();

    glColor3ub(218, 255, 237);
    glBegin(GL_POLYGON);
        glVertex2f(25,73);
        glVertex2f(25,76);
        glVertex2f(28.5,76);
        glVertex2f(28.5,73);
    glEnd();

    glColor3ub(71, 49, 152);
    glBegin(GL_POLYGON);
        glVertex2f(13,64);
        glVertex2f(13,69);
        glVertex2f(29,69);
        glVertex2f(29,64);
    glEnd();

    glColor3ub(155, 243, 240);
    glBegin(GL_POLYGON);
        glVertex2f(13,64);
        glVertex2f(13,69);
        glVertex2f(17,69);
        glVertex2f(17,64);
    glEnd();

    glColor3ub(218, 255, 237);
    glBegin(GL_POLYGON);
        glVertex2f(18,65);
        glVertex2f(18,68);
        glVertex2f(24,68);
        glVertex2f(24,65);
    glEnd();

    glColor3ub(218, 255, 237);
    glBegin(GL_POLYGON);
        glVertex2f(25,65);
        glVertex2f(25,68);
        glVertex2f(28.5,68);
        glVertex2f(28.5,65);
    glEnd();

    glColor3ub(71, 49, 152);
    glBegin(GL_POLYGON);
        glVertex2f(13,56);
        glVertex2f(13,61);
        glVertex2f(29,61);
        glVertex2f(29,56);
    glEnd();

    glColor3ub(155, 243, 240);
    glBegin(GL_POLYGON);
        glVertex2f(13,56);
        glVertex2f(13,61);
        glVertex2f(17,61);
        glVertex2f(17,56);
    glEnd();

    glColor3ub(218, 255, 237);
    glBegin(GL_POLYGON);
        glVertex2f(18,57);
        glVertex2f(18,60);
        glVertex2f(24,60);
        glVertex2f(24,57);
    glEnd();

    glColor3ub(218, 255, 237);
    glBegin(GL_POLYGON);
        glVertex2f(25,57);
        glVertex2f(25,60);
        glVertex2f(28.5,60);
        glVertex2f(28.5,57);
    glEnd();

    glColor3ub(71, 49, 152);
    glLineWidth(5);
    glBegin(GL_LINES);
        glVertex2f(12,50);
        glVertex2f(12,94);
        glVertex2f(11.8,94);
        glVertex2f(30.3,94);
        glVertex2f(30,94);
        glVertex2f(30,50);
    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(19,109,21);
        glVertex2f(11,50);

    glColor3ub(19,109,21);
        glVertex2f(31,50);

    glColor3ub(65,152,10);
        glVertex2f(31,53.5);

    glColor3ub(65,152,10);
        glVertex2f(11,53.5);

    glEnd();

    glColor3ub(71, 67, 80);
    glBegin(GL_POLYGON);
        glVertex2f(11,49);
        glVertex2f(11,50);
        glVertex2f(31,50);
        glVertex2f(31,49);
    glEnd();

}

//ID10 (Ship)
void ship(){

    glPushMatrix();
    glTranslatef(shipMove,0,0);

    glColor3ub(102,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(104,4);
        glVertex2f(102,6);
        glVertex2f(122,6);
        glVertex2f(123,5);
        glVertex2f(122,4);
    glEnd();

    glColor3ub(153,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(102,6);
        glVertex2f(101.5,6.5);
        glVertex2f(101.5,8);
        glVertex2f(123,8);
        glVertex2f(122,6);
    glEnd();

    glColor3ub(0,0,102);
    glBegin(GL_POLYGON);
        glVertex2f(101.5,8);
        glVertex2f(101.5,10);
        glVertex2f(117,10);
        glVertex2f(118,12);
        glVertex2f(126,12);
        glVertex2f(123,8);
    glEnd();

    glColor3ub(160,160,160);
    glBegin(GL_POLYGON);
        glVertex2f(101.5,10);
        glVertex2f(101.5,12);
        glVertex2f(118,12);
        glVertex2f(117,10);
    glEnd();

    glColor3ub(160,160,160);
    glBegin(GL_POLYGON);
        glVertex2f(113,12);
        glVertex2f(113,14);
        glVertex2f(120,14);
        glVertex2f(120,12);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(118.5,7.5);
        glVertex2f(119.5,9.5);
        glVertex2f(121.5,9.5);
        glVertex2f(120.5,7.5);
    glEnd();

    glColor3ub(51,255,255);
    glBegin(GL_POLYGON);
        glVertex2f(102.5,10.5);
        glVertex2f(102.5,11.5); // window
        glVertex2f(103.5,11.5);
        glVertex2f(103.5,10.5);
    glEnd();

    glColor3ub(51,255,255);
    glBegin(GL_POLYGON);
        glVertex2f(104.5,10.5);
        glVertex2f(104.5,11.5);  //window
        glVertex2f(105.5,11.5);
        glVertex2f(105.5,10.5);
    glEnd();

    glColor3ub(51,255,255);
    glBegin(GL_POLYGON);
        glVertex2f(106.5,10.5);
        glVertex2f(106.5,11.5);  //window
        glVertex2f(107.5,11.5);
        glVertex2f(107.5,10.5);
    glEnd();

    glColor3ub(51,255,255);
    glBegin(GL_POLYGON);
        glVertex2f(108.5,10.5);
        glVertex2f(108.5,11.5);  //window
        glVertex2f(109.5,11.5);
        glVertex2f(109.5,10.5);
    glEnd();

    glColor3ub(51,255,255);
    glBegin(GL_POLYGON);
        glVertex2f(112.5,10.5);
        glVertex2f(112.5,11.5);  //window
        glVertex2f(113.5,11.5);
        glVertex2f(113.5,10.5);
    glEnd();

    glColor3ub(51,255,255);
    glBegin(GL_POLYGON);
        glVertex2f(114.5,10.5);
        glVertex2f(114.5,11.5);  //window
        glVertex2f(115.5,11.5);
        glVertex2f(115.5,10.5);
    glEnd();

    glColor3ub(51,255,255);
    glBegin(GL_POLYGON);
        glVertex2f(114,12.5);
        glVertex2f(114,13.5);  //window
        glVertex2f(117,13.5);
        glVertex2f(117,12.5);
    glEnd();

    glColor3ub(51,255,255);
    glBegin(GL_POLYGON);
        glVertex2f(118,12.5);
        glVertex2f(118,13.5);  //window
        glVertex2f(119.5,13.5);
        glVertex2f(119.5,12.5);
    glEnd();

    glColor3ub(255,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(105,12);
        glVertex2f(105,15);
        glVertex2f(110,15);
        glVertex2f(110,12);
    glEnd();

    glColor3ub(160,160,160);
    glBegin(GL_POLYGON);
        glVertex2f(105,15);
        glVertex2f(105,18);
        glVertex2f(110,18);
        glVertex2f(110,15);
    glEnd();

    glColor3ub(0,0,153);
    glBegin(GL_POLYGON);
        glVertex2f(105.5,17);
        glVertex2f(105.5,17.5); // upper window
        glVertex2f(106,17.5);
        glVertex2f(106,17);
    glEnd();

    glColor3ub(0,0,153);
    glBegin(GL_POLYGON);
        glVertex2f(106.5,17);
        glVertex2f(106.5,17.5); // upper window
        glVertex2f(108.5,17.5);
        glVertex2f(108.5,17);
    glEnd();

    glColor3ub(0,0,153);
    glBegin(GL_POLYGON);
        glVertex2f(109,17);
        glVertex2f(109,17.5); // upper window
        glVertex2f(109.5,17.5);
        glVertex2f(109.5,17);
    glEnd();

    glColor3ub(0,51,102);
    glBegin(GL_POLYGON);
        glVertex2f(105,18);
        glVertex2f(104,19);
        glVertex2f(111,19);
        glVertex2f(110,18);
    glEnd();

    glColor3ub(255,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(104,19);
        glVertex2f(104,19.5);
        glVertex2f(111,19.5);
        glVertex2f(111,19);
    glEnd();

    glColor3ub(204,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(115,14);
        glVertex2f(115,16);
        glVertex2f(116.5,16);
        glVertex2f(116.5,14);
    glEnd();

    glColor3ub(102,178,255);
    glBegin(GL_POLYGON);
        glVertex2f(116.5,14);
        glVertex2f(116.5,16);
        glVertex2f(118,16);
        glVertex2f(118,14);
    glEnd();

    glColor3ub(102,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(122,12);
        glVertex2f(122,20);
        glVertex2f(122.4,20);
        glVertex2f(122.4,12);
    glEnd();

    glColor3ub(102,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(121.2,19);
        glVertex2f(121.2,19.4);
        glVertex2f(122,19.4);
        glVertex2f(122,19);
    glEnd();

    glColor3ub(102,0,0);
    glLineWidth(1);
    glBegin(GL_LINES);
        glVertex2f(114,14);
        glVertex2f(114,15);
        glVertex2f(116.5,14);
        glVertex2f(116.5,15);
        glVertex2f(119,14);
        glVertex2f(119,15);
        glVertex2f(114,15);
        glVertex2f(119,15);
        glVertex2f(114,14.5);
        glVertex2f(119,14.5);
        glVertex2f(124,12);
        glVertex2f(122.5,18.5);
        glVertex2f(103,12);
        glVertex2f(103,14);
        glVertex2f(105,12);
        glVertex2f(105,14);
        glVertex2f(107,12);
        glVertex2f(107,14);
        glVertex2f(109,12);
        glVertex2f(109,14);
        glVertex2f(111,12);
        glVertex2f(111,14);
        glVertex2f(113,12);
        glVertex2f(113,14);
        glVertex2f(103,14);
        glVertex2f(113,14);
        glVertex2f(103,13);
        glVertex2f(113,13);
    glEnd();

    glColor3ub(204,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(108.5,19.5);
        glVertex2f(108.5,21);
        glVertex2f(110,21);
        glVertex2f(110,19.5);
    glEnd();

    glColor3ub(255,255,0);
    glBegin(GL_POLYGON);
        glVertex2f(108.5,21);
        glVertex2f(108.5,22);
        glVertex2f(110,22);
        glVertex2f(110,21);
    glEnd();

    glColor3ub(204,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(108.5,22);
        glVertex2f(108.5,23.5);
        glVertex2f(110,23.5);
        glVertex2f(110,22);
    glEnd();

    glPopMatrix();
}

//ID11
void tree1()
{
    glColor3ub(154, 3, 30);
    glBegin(GL_POLYGON);
        glVertex2f(2,47);
        glVertex2f(2,51);
        glVertex2f(3,51);
        glVertex2f(3,47);
    glEnd();


    glBegin(GL_POLYGON);
        glColor3ub(0,97,14);
            glVertex2f(.5,51);

        glColor3ub(0,97,14);
            glVertex2f(4.5,51);

        glColor3ub(193,209,31);
            glVertex2f(2.5,57);
    glEnd();

}

//ID12
void tree2()
{
    glColor3ub(154, 3, 30);
    glBegin(GL_POLYGON);
        glVertex2f(6,48);
        glVertex2f(6,56);
        glVertex2f(7,56);
        glVertex2f(7,48);
    glEnd();


    glBegin(GL_POLYGON);
        glColor3ub(0,97,14);
            glVertex2f(2,56);

        glColor3ub(0,97,14);
            glVertex2f(11,56);

        glColor3ub(193,209,31);
            glVertex2f(6.5,67.5);
    glEnd();

}

//ID13
void tree3()
{
    glColor3ub(154, 3, 30);
    glBegin(GL_POLYGON);
        glVertex2f(128,49);
        glVertex2f(128,53);
        glVertex2f(129,53);
        glVertex2f(129,49);
    glEnd();


    glBegin(GL_POLYGON);
        glColor3ub(0,97,14);
            glVertex2f(124,53);

        glColor3ub(0,97,14);
            glVertex2f(133,53);

        glColor3ub(193,209,31);
            glVertex2f(128.5,63);
    glEnd();

}

//ID14
void tree4()
{
    glColor3ub(154, 3, 30);
    glBegin(GL_POLYGON);
        glVertex2f(125,48);
        glVertex2f(125,52);
        glVertex2f(126,52);
        glVertex2f(126,48);
    glEnd();


    glBegin(GL_POLYGON);
        glColor3ub(0,97,14);
            glVertex2f(122,52);

        glColor3ub(0,97,14);
            glVertex2f(129,52);

        glColor3ub(193,209,31);
            glVertex2f(125.5,59.5);
    glEnd();

}

//ID15
void tree5()
{
    glColor3ub(154, 3, 30);
    glBegin(GL_POLYGON);
        glVertex2f(51,46.5);
        glVertex2f(51,51.5);
        glVertex2f(52,51.5);
        glVertex2f(52,46.5);
    glEnd();


    glBegin(GL_POLYGON);
        glColor3ub(0,97,14);
            glVertex2f(48,51.5);

        glColor3ub(0,97,14);
            glVertex2f(55,51.5);

        glColor3ub(193,209,31);
            glVertex2f(51.5,58.5);
    glEnd();

}



// AF1
void updateShip(int value) {
    if(shipOn){
        shipMove += .4f;
        if(shipMove > 130) {
            shipMove = -120;
        }
    }

    glutPostRedisplay();
    glutTimerFunc(20, updateShip, 0);
}

//AF2
void handleKeyPress(unsigned char key, int x, int y){

    switch (key){
        case('s'):
        case('S'):
            shipOn = !shipOn;
            break;

        case('q'):
        case('Q'):
            exit(0);
            break;
    }
    glutPostRedisplay();
}

//AF3
void handleMouse(int button, int state, int x, int y){

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
        allOn = !allOn;
        shipOn = allOn;
    }
    glutPostRedisplay();
}


void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    river();
    ship();
    road();
    walkway();
    sky();
    building1();
    building2();
    building3();
    building4();
    building5();
    tree1();
    tree2();
    tree3();
    tree4();
    tree5();
    glFlush();
}


int main(int argc, char** argv) {
    glutInitWindowSize(1220, 720);
    glutInit(&argc, argv);

    glutInitWindowPosition(

    (glutGet(GLUT_SCREEN_WIDTH) - 1220) / 2,
    (glutGet(GLUT_SCREEN_HEIGHT) - 720) / 2

    );

    glutCreateWindow("City Scene");
    gluOrtho2D(0, 130, 0, 105);
    glShadeModel(GL_SMOOTH);

    glutDisplayFunc(display);
    glutTimerFunc(20, updateShip, 0);
    glutKeyboardFunc(handleKeyPress);
    glutMouseFunc(handleMouse);

    glutMainLoop();
    return 0;
}
