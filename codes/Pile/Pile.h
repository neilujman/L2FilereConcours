#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED



/*  Structure représantant un élément de la pile. */

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

  /*  Pop retire la dernière valeur empilée sur la pile. */

  int Pop(pile **);

  /*  Clear vide la pile. */

  void Clear(pile **);

  /*  Length retourne le nombre d'élément de la pile. */

  int Length(pile *p);

  /*  Affiche la totalité de la pile en commençant par le sommet. */

  void View(pile *);

  #ifdef __cplusplus
}
#endif

#endif // PILE_H_INCLUDED


