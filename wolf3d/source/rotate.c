/*
** rotate.c for rotate in /home/jeremy.elkaim/wolf3d
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Jan  2 08:19:33 2017 jeremy elkaim
** Last update Fri Jan 13 09:59:06 2017 jeremy elkaim
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>
#include <unistd.h>
#include <SFML/Graphics.h>
#include <SFML/Window/Export.h>
#include <stdlib.h>
#include <SFML/Window/Keyboard.h>
#include <math.h>
#include "include/my.h"

/*
sfVector2i	rotate(sfVector2i a)
{
  if (move_left)
    {
      a = cos(a) - sin(a);
    }
  if (move_right)
    {
      a = sin(a) - cos(a);
    }
  return (a);
}
*/
