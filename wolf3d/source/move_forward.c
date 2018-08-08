/*
** move.c for move in /home/jeremy.elkaim/wolf3d
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Dec 22 07:48:11 2016 jeremy elkaim
** Last update Fri Jan 13 10:28:41 2017 jeremy elkaim
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

sfVector2f	move_forward(sfVector2f pos, float direction, float distance)
{
  pos.x = pos.x + distance * cosf(direction);
  pos.y = pos.y + distance * sinf(direction);
  return (pos);
}

void		movedirectory()
{
  if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue)
    {
      //      move_forward();
    }
}
