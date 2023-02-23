#pour tous les éléments qui correspondent...
for i in
#...à l'extension (*.JPG) contenu dans le nom des fichiers (-name) recherchés (find)
"$(find -name *.JPG)"
#les effacer (rm = remove)
do rm "$i"
#fini la boucle
done