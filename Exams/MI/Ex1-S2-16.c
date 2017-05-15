typedef  Etudiant struct Etudiant;
struct Etudiant {
    char nom[30];
    int age;
    float moyenne;
}
void saisirEtudiant(Etudiant *e){
    puts("Donnez le nom : ");
    scanf("%s", & e.nom);
    puts("Donnez l'age : ");
    scanf("%d", &e->age);
    puts("Donnez la moyenne : ");
    scanf("%lf", & *e.moyenne);
}
void main(){
    Etudiant e1, e2={"Toto", 12, 12.65}  ;
    saisirEtudiant(e1);
    e1.nom = "Toto";
    if ( e1.nom == e2.nom)
        printf("l'etudiant e1 est aussi un Toto");
}
