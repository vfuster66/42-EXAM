## SUJET

```
Assignment name  : cpp_module_01
Expected files   : Warlock.cpp Warlock.hpp
                   ASpell.hpp ASpell.cpp
				   ATarget.hpp ATarget.cpp
				   Fwoosh.hpp Fwoosh.cpp
				   Dummy.hpp Dummy.cpp
--------------------------------------------------------------------------------

Dans la classe Warlock, le switch est strictement INTERDIT et son utilisation
résulterait en un -42.

Créez une classe abstraite ASpell, en form de Coplien, qui a les attributs
protégés suivants:

* name (string)
* effects (string)

Les deux auront des getters (getName et getEffects) qui retournent des strings.

Ajoutez une méthode pure clone() qui retourne un pointeur sur ASpell.

Toutes ces fonctions peuvent être appelées sur un objet constant.

ASpell a un constructeur qui prend son nom et ses effets, dans cet ordre.

Maintenant vous allez créer une classe abstraite ATarget, en forme de Coplien,
qui a un attribut type (string), et son gette associé getType, qui retourne une
référence sur string constante.

Pareil que pour ASpell, faites lui une méthode pure clone().

Ces fonctions peuvent être appelées sur un objet constant.

Elle a un constructeur qui prend son type.

Ensuite, ajoutez à ATarget une fonction getHitBySpell qui prend une référence
vers ASpell constant.

Elle affichera :

<TYPE> has been <EFFECTS>!

<TYPE> est le type du ATarget, et <EFFECTS> est le retour de la fonction
getEffects du ASpell.

Enfin, ajoutez à votre ASpell une fonction launch qui prend une référence vers
ATarget constant. Celle-ci va simplement appeler le getHitBySpell de l'objet
passé en paramètre, en lui donnant en paramètre l'instance courante.

Ceci étant fait, implémentez votre classe ASpell avec une classe Fwoosh. Son
constructeur par défaut va mettre son nom à "Fwoosh" et ses effets à
"fwooshed". Bien évidemment, vous devez implémenter la méthode clone(), qui
dans ce cas va retourner un pointeur vers un nouveau Fwoosh.

Dans le même style, créez un ATarget concret appelé Dummy, dont le type
sera "Target Practice Dummy". Évidemment vous devez implémenter sa méthode clone().

Ajoutez les fonctions membres suivantes au Warlock:

* learnSpell, prend un pointeur sur ASpell, qui apprend un sort au Warlock
* forgetSpell, prend une string correspondant au nom d'un sort, et le fait
  oublier au Warlock s'il le connait, sinon ne fait rien. 
* launchSpell, prend une string correspondant au nom d'un sort et une référence
  sur ATarget, qui lance le sort en question sur la cible s'il est connu, sinon
  ne fait rien.


Il vous faudra un nouvel attribut pour stocker les sorts de votre Warlock.
Plusieurs types font l'affaire, à vous de choisir le plus adapté.

Ci-dessous un possible main et sa sortie:

int main()
{
  Warlock richard("Richard", "the Titled");

  Dummy bob;
  Fwoosh* fwoosh = new Fwoosh();

  richard.learnSpell(fwoosh);

  richard.introduce();
  richard.launchSpell("Fwoosh", bob);

  richard.forgetSpell("Fwoosh");
  richard.launchSpell("Fwoosh", bob);
}

~$ ./a.out | cat -e
Richard: This looks like another boring day.$
Richard: I am Richard, the Titled!$
Target Practice Dummy has been fwooshed!$
Richard: My job here is done!$
```
