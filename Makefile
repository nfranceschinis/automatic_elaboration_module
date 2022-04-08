SHELL=/bin/sh #Shell da utilizzare per l'esecuzione dei comandi

CC=gcc #Compilatore da utilizzare

SRCS=gem_main.c #File sorgente

elaboration_module: $(SRCS)
	$(CC)-o $@ $<