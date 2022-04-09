SHELL=/bin/sh #Shell da utilizzare per l'esecuzione dei comandi

CC=g++ #Compilatore da utilizzare

SRCS=gem_main.cpp #File sorgente

elaboration_module: $(SRCS)
	$(CC)-o $@ $<