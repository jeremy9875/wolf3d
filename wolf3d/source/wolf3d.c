/*
** wolf3d.c for wolf3d in /home/jeremy.elkaim/wolf3d
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Tue Dec 20 16:03:15 2016 jeremy elkaim
** Last update Fri Jan 13 10:39:53 2017 jeremy elkaim
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

int			main2(sfRenderWindow* window, sfSprite* sprite)
{
  while (sfRenderWindow_isOpen(window))
    {
      if (sfKeyboard_isKeyPressed(sfKeyEscape))
        {
          sfRenderWindow_destroy(window);
          return (EXIT_FAILURE);
        }
      sfRenderWindow_clear(window, sfBlack);
      sfRenderWindow_drawSprite(window, sprite, NULL);
      sfRenderWindow_display(window);
    }
  sfRenderWindow_destroy(window);
  return (EXIT_SUCCESS);
}

void			main()
{
  sfRenderWindow*	window;
  sfTexture*		texture;
  sfSprite*		sprite;
  t_my_framebuffer*	framebuffer;
  int			a;
  int			b;
  sfVector2i		from;
  sfVector2i		to;

  a = 1680;
  b = 1050;
  from.x = 200;
  from.y = 300;
  to.x = 600;
  to.y = 800;
  framebuffer->width = a;
  framebuffer->height = b;
  window = create_window("window", framebuffer->width, framebuffer->height);
  sprite = sfSprite_create();
  texture = sfTexture_create(framebuffer->width, framebuffer->height);
  framebuffer->pixels = create_pixel_buffer(framebuffer->width, framebuffer->height);
  sfSprite_setTexture(sprite, texture, sfTrue);
  wichdrawline(framebuffer, from, to, sfRed);
  sfTexture_updateFromPixels(texture, framebuffer->pixels, framebuffer->width, framebuffer->height, 0, 0);
  main2(window, sprite);
}
