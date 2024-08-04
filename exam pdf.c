#include <stdio.h>
#include <string.h>
int main()
{
struct etudiant {
char Nom[15];
char Prenom[15];
float Moy; };
struct etudiant e[10];
int I,J, nb;
float tmp;
char tmpStr[15];
printf(" le nombre des etudiants : ");
scanf("%d", &nb );
for (I=0; I<nb; I++)
{printf("Nom, Prenom puis la Moyenne de l'etudiant: %d \n", I+1);
scanf("%s %s %f", e[I].Nom,e[I].Prenom,&e[I].Moy); }
/**** Affichage de la liste des étudiants******/
printf(" La liste initiale des étudiants: \n\n");
printf(" ____________________________________ \n");
printf("| Nom | Prenom | Moyenne |\n");
printf("|____________|____________|__________|\n");
for (I=0; I<nb; I++)
printf("|%12s|%12s|%10.2f| \n",e[I].Nom,e[I].Prenom,e[I].Moy );
/* Trie de la liste en se basant sur la moyenne */
 for (I = 0; I < nb ; I++)
 for (J = I + 1; J < nb; J++)
 if (e[I].Moy < e[J].Moy)
 {
 tmp = e[J].Moy;
e[J].Moy = e[I].Moy;
e[I].Moy = tmp;
 strcpy(tmpStr, e[J].Nom);
strcpy(e[J].Nom, e[I].Nom);
strcpy(e[I].Nom, tmpStr);
 strcpy(tmpStr,e[J].Prenom);
strcpy(e[J].Prenom,e[I].Prenom);
strcpy(e[I].Prenom,tmpStr);
 }
 printf(" La liste triee par ordre de merite: \n\n");
printf(" ____________________________________ \n");
printf("| Nom | Prenom | Moyenne |\n");
printf("|____________|____________|__________|\n");
for (I=0; I<nb; I++)
printf("|%12s|%12s|%10.2f| \n",e[I].Nom,e[I].Prenom,e[I].Moy );
return 0;}