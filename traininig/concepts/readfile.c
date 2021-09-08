/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgriffit <tgriffit@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:01:39 by tgriffit          #+#    #+#             */
/*   Updated: 2021/09/08 15:53:39 by tgriffit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*
void ft_readfile(char *file)
{
    int fd;
    int size;
    char    txt;

    fd = open(file, O_RDWR);
    size = _read(fd, &txt, sizeof(txt));
    //_write(1, txt, size);
}
 */


//version OC
// https://openclassrooms.com/forum/sujet/comment-ca-fonctionne-12569
int ft_readfile() {
    int fd;
/* Un buffer */
    //char buf[1128];
    char *cpy;
    char c;
/* Taille lue : */
    int size;
    int i;

/* On ouvre le fichier : en fait on recupere un fd sur le fichier*/
    fd = _open("C:\\Users\\sansh\\CLionProjects\\piscine42\\traininig\\concepts\\mytext.txt", O_RDONLY, S_IREAD);
/* il ne peut pas y avoir de fd negatif,
** si open nous retourne -1 c'est que l'ouverture a echoue
** dans ce cas on quitte
*/
    if (fd == -1)
        return errno;


/*
** On lit :
** on passe a read :
** - le fd,
** - le buffer
** - la taille du buffer
** Attention si tu passe une taille de buffer plus grande que la taille de ton buffer,
** ton programme deviens sensible aux Buffer Overflow
*/
    size = 0;
    while (read(fd, &c, sizeof(c)))
        size++;
    cpy = malloc(size * sizeof(char));
    if (!cpy)
        return (4);
    i = 0;
    /*Après avoir calculé la taille, on reset la tête de lecture au début */
    close(fd);
    fd = _open("C:\\Users\\sansh\\CLionProjects\\piscine42\\traininig\\concepts\\mytext.txt", O_RDONLY, S_IREAD);
    while (read(fd, &c, sizeof(c)))
        cpy[i++] = c;
    cpy[size] = '\0';
    _write(1, cpy, size);
    close(fd);
    //free(cpy);

    return size;

/*
** On raoute un '\0' à la fin de la chaine lut, pour être sur d'avoir une chaine de caractères valide.
** size correspondant a l'index du dernier caractere du buffer + 1.
** Ceci est utile si tu veux utiliser ta chaine dans une fonction comme strcmp() ou printf()
*/

    //buf[size] = '\0';

/*
** On affiche ce que l'on viens de lire dans la console :
** NOTE :
** il existe des FD speciaux :
** Le fd 1 est la sortie standart ( console )
*/

    //_write(1, buf, size);

/* Ne pas oublier de libérer ton file descriptor */
    close(fd);

    return 0;

}