#include<stdio.h>
#include<stdio.h>
#include<string.h>

typedef enum Couleur Couleur ;
enum Couleur {BLANC, NOIR, GRIS};

typedef struct Point Point ;
struct Point {
    int x;
    int y;
    int annee;
};
typedef struct Rectangle Rectangle ;
struct Rectangle {
    Point coin ;
    int longueur;
    int largeur;
    Couleur couleur;
};

void saisir_Point(Point *p){
    puts("Donnez le x : ");
    scanf("%d", &p->x);
    puts("Donnez le y : ");
    scanf("%d", &p->y);
}
void saisir_Rectangle(Rectangle *r){
    puts("Donnez les coordonnees du coin: ");
    saisir_Point(&r->coin);
    puts("Donnez la longueur : ");
    scanf("%d", &r->longueur);
    puts("Donnez la largeur : ");
    scanf("%d", &r->largeur);
    puts("Donnez la couleur, 0 : Blanc, 1 : Noir, 2 : Gris");
     scanf("%d", &r->couleur);
}
void afficher_Rectangle(Rectangle r){
   printf("[(%d,%d), %d, %d, %d] \n", r.coin.x, r.coin.y, r.longueur, r.largeur, r.couleur);
}
void deplacer_Rectangle(Rectangle r, Point p)
{
    r.coin = p;
}
void zoomer_Rectangle(Rectangle r, int zoom)
{
    r.longueur *= zoom;
    r.largeur *= zoom;
}
void dezoomer_Rectangle(Rectangle r, int zoom)
{
    r.longueur /= zoom;
    r.largeur /= zoom;
}
void pivoter_Rectangle(Rectangle r)
{
    int l = r.longueur;
    r.longueur *= r.largeur;
    r.largeur *= l;
}
void retournerH_Rectangle(Rectangle r)
{
    r.coin.x -= r.longueur;
}
void retournerV_Rectangle(Rectangle r)
{
    r.coin.y -= r.largeur;
}

int Inclut(Rectangle r1, Rectangle r2 )
{
    if((r2.coin.x < r1.coin.x) && (r2.coin.y < r1.coin.y) &&
       (r2.coin.x+r2.longueur < r1.coin.x+r1.longueur) &&
       (r2.coin.y+r2.largeur < r1.coin.y+r1.largeur))
        return 1;
    else return 0;
}
void les_Plus_Hauts(Rectangle  Graph[10], Rectangle  Hauts[10],  int n, int *h)
{
    int i, min_y = Graph[0].coin.y;
    Hauts[0] = Graph[0];
    *h = 1;
    for (i=1; i<n; n++)
    {
        if(Graph[i].coin.y < min_y)
        {
            min_y = Graph[i].coin.y;
            *h=0;
            Hauts[*h] = Graph[i];
            (*h)++
        }
        else if(Graph[i].coin.y == min_y)
                {
                    Hauts[*h] = Graph[i];
                    (*h)++;
                }
    }
}
void les_Plus_A_droite(Rectangle  Graph[10], Rectangle  Droites[10],  int n, int *h)
{
    int i, max_x = Graph[0].coin.x;
    Droites[0] = Graph[0];
    *h = 1;
    for (i=1; i<n; n++)
    {
        if(Graph[i].coin.x > max_x)
        {
            max_x = Graph[i].coin.x;
            *h=0;
            Droites[*h] = Graph[i];
            (*h)++
        }
        else if(Graph[i].coin.x == min_x)
                {
                    Droites[*h] = Graph[i];
                    (*h)++;
                }
    }
}

void main(){
    Rectangle r1, r2;
    Rectangle Graph[10];
    saisir_Rectangle(&r1);
    afficher_Rectangle(r1);
}
