#include <stdio.h>
#include <stdlib.h>

// représente Gamma+(x)
struct liste_sommet_s
{
    int sommet;
    struct liste_sommet_s *suivant;
};





int main()
{
    int v1 = 1; // vertex number 1
    int v2 = 2;
    int v3 = 3;
    int v4 = 4;
    int v5 = 5;
    struct liste_sommet_s s1_v1; // successeur no 1 de s1
    struct liste_sommet_s s2_v1; // successeur no 2 de s1
    s1_v1.sommet = v2;
    s2_v1.sommet = v4;
    s1_v1.suivant = &s2_v1;
    s2_v1.suivant = NULL;
    struct liste_sommet_s s1_v2;
    s1_v2.suivant = NULL;

    return 0;
}
