#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED



/*  Structure repr�santant un �l�ment de la pile. */

typedef struct pile
{
 int valeur;
 struct pile *prec;
} pile ;

#ifdef __cplusplus
extern "C"
{
  #endif

  /*  Push empile une valeur sur la pile. */

  void Push(pile **, int);

  /*  Pop retire la derni�re valeur empil�e sur la pile. */

  int Pop(pile **);

  /*  Clear vide la pile. */

  void Clear(pile **);

  /*  Length retourne le nombre d'�l�ment de la pile. */

  int Length(pile *p);

  /*  Affiche la totalit� de la pile en commen�ant par le sommet. */

  void View(pile *);

  #ifdef __cplusplus
}
#endif

#endif // PILE_H_INCLUDED


