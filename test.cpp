//header
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

//deklarasi fungsi
void display();
void init();
void reshape(int, int);
void keyboard(unsigned char, int, int); //+1

//main program
int main (int argc, char** argv){
 //inisialisasi
 glutInit(&argc, argv);
 glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH ); //+2 GLUT_DEPTH : mengalokasikan sumbu z
 glutInitWindowPosition(400, 300); //atur sumbu x dan y
 glutInitWindowSize(800, 800); //atur lebar dan tinggi jendela
 glutCreateWindow("UAS GRAFIKA KELOMPOK 4 KAMAR MINIMALIS ");
 glutDisplayFunc(display); //memanggil fungsi display
 glutReshapeFunc(reshape); //memanggil fungsi reshape
 glutKeyboardFunc(keyboard); // +3 memanggil fungsi keyboard
 init();
 glutMainLoop(); //looping program utama
}
void init(){
 glEnable(GL_DEPTH_TEST); //+4
 glClearColor(0.0, 0.0, 0.0, 1.0);
}
void display(){
 //reset
 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //+5
 //dinding depan

//dnbelakang gray
glBegin(GL_QUADS); // membuat segi empat
glColor3ub(48, 48, 48);
glVertex3f(-25.0, 25.0, -25.0); //Menentukan titik, garis dan poligon
glVertex3f(-25.0, -25.0, -25.0);
glVertex3f(25.0, -25.0, -25.0);
glVertex3f(25.0, 25.0, -25.0);
glEnd();

//kanan gray
glBegin(GL_QUADS); //+5
glColor3ub(48, 48, 48);
glVertex3f(25.0, 25.0, -25.0);
glVertex3f(25.0, -25.0, -25.0);
glVertex3f(25.0, -25.0, 25.0);
glVertex3f(25.0, 25.0, 25.0);
glEnd();

//kiri gray
glBegin(GL_QUADS); //+5
glColor3ub(48, 48, 48);
glVertex3f(-25.0, 25.0, -25.0);
glVertex3f(-25.0, -25.0, -25.0);
glVertex3f(-25.0, -25.0, 25.0);
glVertex3f(-25.0, 25.0, 25.0);
glEnd();

//Lantai white snow 2
glBegin(GL_QUADS); //+5
glColor3ub(238, 233, 233);
glVertex3f(-25.0, -25.0, -25.0);
glVertex3f(-25.0, -25.0, 25.0);
glVertex3f(25.0, -25.0, 25.0);
glVertex3f(25.0, -25.0, -25.0);
glEnd();

//Lemari depan kiri
glBegin(GL_QUADS); //+5
glColor3ub(222, 184, 135);
glVertex3f(5.0, 20.0, -15.0);
glVertex3f(5.0, -25.0, -15.0);
glVertex3f(12.5, -25.0, -15.0);
glVertex3f(12.5, 20.0, -15.0);
glEnd();

//lemari depan kanan
glBegin(GL_QUADS); //+5
glColor3ub(160, 82, 45);
glVertex3f(12.5, 20.0, -15.0);
glVertex3f(12.5, -25.0, -15.0);
glVertex3f(25.0, -25.0, -15.0);
glVertex3f(25.0, 20.0, -15.0);
glEnd();

//lemari samping kiri
glBegin(GL_QUADS); //+5
glColor3ub(139, 69, 19);
glVertex3f(5.0, 20.0, -25.0);
glVertex3f(5.0, -25.0, -25.0);
glVertex3f(5.0, -25.0, -15.0);
glVertex3f(5.0, 20.0, -15.0);
glEnd();


//AC

//Posisi AC
glBegin(GL_QUADS);
glColor3ub(255, 250, 250);
glVertex3f(-18.0, 7.0, -8.5);
glVertex3f(-18.0, 2.6, -8.5);
glVertex3f(-3.0, 2.6, -8.5);
glVertex3f(-3.0, 7.0, -8.5);
glEnd();


    
//kasur
glBegin(GL_QUADS); //+5
glColor3ub(0, 0, 0);
glVertex3f(-22.0, -21.0, -25.0);
glVertex3f(-22.0, -21.0, 10.0);
glVertex3f(3.0, -21.0, 10.0);
glVertex3f(3.0, -21.0, -25.0);
glEnd();

glBegin(GL_QUADS); //+5
glColor3ub(255, 250, 250);
glVertex3f(-22.0, -20.0, 10.0);
glVertex3f(-22.0, -25.0, 10.0);
glVertex3f(3.0, -25.0, 10.0);
glVertex3f(3.0, -20.0, 10.0);
glEnd();

glBegin(GL_QUADS); //+5
glColor3ub(48, 48, 48);
glVertex3f(3.0, -20.0, -25.0);
glVertex3f(3.0, -25.0, -25.0);
glVertex3f(3.0, -25.0, 10.0);
glVertex3f(3.0, -20.0, 10.0);
glEnd();

glBegin(GL_QUADS); //+5
glColor3ub(48, 48, 48);
glVertex3f(-22.0, -20.0, -25.0);
glVertex3f(-22.0, -25.0, -25.0);
glVertex3f(-22.0, -25.0, 10.0);
glVertex3f(-22.0, -20.0, 10.0);
glEnd();

//bantal kiri
glBegin(GL_QUADS); //+5
glColor3ub(255, 250, 250);
glVertex3f(-20.0, -20.0, -24.0);
glVertex3f(-20.0, -20.0, -15.0);
glVertex3f(-10.0, -20.0, -15.0);
glVertex3f(-10.0, -20.0, -24.0);
glEnd();

//bantal kanan
glBegin(GL_QUADS); //+5
glColor3ub(255, 250, 250);
glVertex3f(1.0, -20.0, -24.0);
glVertex3f(1.0, -20.0, -15.0);
glVertex3f(-8.0, -20.0, -15.0);
glVertex3f(-8.0, -20.0, -24.0);
glEnd();

//Selimut
glBegin(GL_QUADS); //+5
glColor3ub(48, 48, 48);
glVertex3f(-20.0, -20.0, -10.0);
glVertex3f(-20.0, -20.0, 10.0);
glVertex3f(2.0, -20.0, 10.0);
glVertex3f(2.0, -20.0, -10.0);
glEnd();


glBegin(GL_QUADS); //+5
glColor3ub(255, 250, 250);
glVertex3f(-20.0, -19.0, -10.0);
glVertex3f(-20.0, -19.0, -8.0);
glVertex3f(2.0, -19.0, -8.0);
glVertex3f(2.0, -19.0, -10.0);
glEnd();

//jendela
glBegin(GL_QUADS); //+5
glColor3ub(255, 250, 250);
glVertex3f(24.0, 20.0, -11.0);
glVertex3f(24.0, -15.0, -11.0);
glVertex3f(24.0, -15.0, 5.0);
glVertex3f(24.0, 20.0, 5.0);
glEnd();

//
glBegin(GL_QUADS); //+5
glColor3ub(0, 0, 0);
glVertex3f(23.0, 20.0, -11.0);
glVertex3f(23.0, 19.0, -11.0);
glVertex3f(23.0, 19.0, 5.0);
glVertex3f(23.0, 20.0, 5.0);
glEnd();

//pintu
glBegin(GL_QUADS); //+5
glColor3ub(255, 250, 250);
glVertex3f(-24.0, 18.0, 10.0);
glVertex3f(-24.0, -25.0, 10.0);
glVertex3f(-24.0, -25.0, 22.0);
glVertex3f(-24.0, 18.0, 22.0);
glEnd();

//gagang pintu
glBegin(GL_QUADS); //+5
glColor3ub(0, 0, 0);
glVertex3f(-23.5, 0.0, 20.0);
glVertex3f(-23.5, -5.0, 20.0);
glVertex3f(-23.5, -5.0, 21.0);
glVertex3f(-23.5, 0.0, 21.0);
glEnd();

//karpet
glBegin(GL_QUADS); //+5
glColor3ub(145, 145, 145);
glVertex3f(5.0, -24.0, -13.0);
glVertex3f(5.0, -24.0, 22.0);
glVertex3f(24.0, -24.0, 22.0);
glVertex3f(24.0, -24.0, -13.0);
glEnd();

glFlush();
glutSwapBuffers();
}
//fungsi untuk setting viewport
void reshape(int w, int h){
 glViewport(0,0, (GLsizei)w, (GLsizei)h); //membuat viewport sesuai ukuran jendela
 glMatrixMode(GL_PROJECTION); //merubah matrix mode menjadi gl_projection
 glLoadIdentity(); //reset transformasi misalnya rotasi pada display
 //gluOrtho2D(-10, 10, -10, 10); //setting spesifikasi proyeksi yang diinginkan (2D)
 //glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0); //+6 proyeksi orthografik 3D
 gluPerspective(60.0, w / h, 1.0, 400.0); //proyeksi perspektif
/* set initial position */
glTranslatef(0.0, -5.0, -100.0);
 glMatrixMode(GL_MODELVIEW); //merubah matrix mode menjadi gl_modelview
}
//+7
void keyboard(unsigned char key, int x, int y)
{
switch (key)
{
//rotasi//
case 'w':
case 'W':
 glRotatef(3.0, 1.0, 0.0, 0.0); /* rotasi ke atas */
break;
case 's':
case 'S':
glRotatef(-3.0, 1.0, 0.0, 0.0); /* rotasi ke bawah */
break;
 case '>':
 case '.':
 glRotatef(3.0, 0.0, 1.0, 0.0); //geser ke kanan
 break;
 case '<':
 case ',':
 glRotatef(-3.0, 0.0, 1.0, 0.0); //geser ke kiri
 break;
 case 'o':
 case 'O':
 glTranslated(0.0, 0.0, 1.0); // geser objek kedalam//
 break;
 case 'p':
 case 'P':
 glTranslated(0.0, 0.0, -1.0); // geser ke luar//
 break;
}
display(); //memanggil fungsi display atau bisa pakai glutPostRedisplay();
}
