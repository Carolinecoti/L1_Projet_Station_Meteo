# L1_Projet_Station_Meteo
Ce projet est réalisé dans le cadre du module Communication Sans Fil en Licence 1 à l’Université Nice Sophia Antipolis.

Nous avons fait le choix de travailler sur une station météo car nous trouvions ce sujet intéressant.

Une station météorologique est un ensemble de capteurs qui enregistrent et fournissent des mesures physiques et des paramètres météorologiques liés aux variations du climat, ces capteurs étant placés dans un boîtier, abri météorologique qui réalise l'équilibre thermique du thermomètre avec l'air et le protège du rayonnement solaire.
Pour réaliser notre station météo nous avons, dans un premier temps, réalisés une liste des composants dont nous avions besoin.

Liste du matériel :
- une carte Arduino
- un capteur d’humidité,
- un capteur de température,
- un capteur de luminosité, 
- un anémomètre, 
- un pluviomètre,
- un capteur de pression atmosphérique.

Après avoir reçus une partie des composants demandés, nous avons commencé la soudure. 
Nous avons donc soudé le capteur de température, le capteur d’humidité et le capteur de luminosité sur la carte Arduino. N’ayant reçus le reste de la liste des composants nous avons su adaptés notre projet.
Après avoir finit la soudure nous nous sommes occupés de la programmation.
Pour la programmation nous avons reprit le programme utilisé dans l’un des TP du cours. 

Le programme est le suivant :


Pour l’affichage des données enregistrées par les capteurs on a choisi Cayenne.
Pour cela il a fallu créer un compte sur The Thing Network. Dans le programme nous avons intégrés les identifiants que nous possédions sur The Thing Network afin de connecter la carte Arduino avec The Thing Network. Ensuite, on a créé un compte sur Cayenne, puis on a connecté The Thing Network avec Cayenne en ajoutant l’appareil The Thing Network sur Cayenne. 
C’est ainsi qu’on a pu visionner les données enregistrées par les capteurs installer sur la carte Arduino via Cayenne.

Pour la réalisation de la boite nous avons utilisé de la mousse de calage qui se trouvait au fabLab. Nous l’avons découpé de telle façon à ce que cela fasse une boite. La mousse de calage est une matière intéressante puisqu’elle laisse passer la luminosité, la température est bien capté et si des intempéries ont lieu la mousse permet de ne pas laisser passer l’eau (pluie de faible intensité seulement..).
Pour l’alimentation de la carte nous avons choisi d’utiliser une batterie externe.


Pour conclure ce projet, nous n’avons pas pu réaliser ce que nous souhaitions faire au départ. Nous avons su nous adaptez avec les seuls composants mis à disposition. 
Nous aurions souhaité faire plus mais nous sommes tout de même contents d’avoir un projet qui fonctionne.
Ce projet a été pour nous une belle découverte et nous aura permit de découvrir le LoRa, qui est un protocole de télécommunication intéressant.
