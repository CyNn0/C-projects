##
## Makefile for  in /home/fourni_s/UNIX/WarpZone/dante2/dante
## 
## Made by sonny fournier
## Login   <fourni_s@epitech.net>
## 
## Started on  Fri May 27 22:15:09 2016 sonny fournier
## Last update Fri May 27 22:24:57 2016 sonny fournier
##

all:
		@$(MAKE) -C astar/ all
		@$(MAKE) -C generateur/ all
		@$(MAKE) -C largeur/ all
		@$(MAKE) -C tournoi/ all

clean:
		@$(MAKE) -C astar/ clean
		@$(MAKE) -C generateur/ clean
		@$(MAKE) -C largeur/ clean
		@$(MAKE) -C tournoi/ clean

fclean: 	clean
		@$(MAKE) -C astar/ fclean
		@$(MAKE) -C generateur/ fclean
		@$(MAKE) -C largeur/ fclean
		@$(MAKE) -C tournoi/ fclean

re:		fclean all

.PHONY: 	all clean fclean re
