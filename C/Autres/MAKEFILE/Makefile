    CC = gcc
    EXE = exe
    OFILES = matrice.o \
    		 main.o

    but : ${EXE}

    matrice.o : matrice.h//Remplacer par les fichiers

    main.o : matrice.h

    ${EXE} : ${OFILES}
    	$(CC) -o ${EXE} ${OFILES}

    run : 
    	./${EXE}

    clean :
    	-rm -f ${OFILES}
