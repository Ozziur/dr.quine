# Variabili
CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGETS = Colleen Grace Sully
REMOVE = Colleen/Colleen Grace/Grace Sully/Sully Sully/Sully_*

# Regola principale per costruire tutti gli eseguibili
all: $(TARGETS)

# Regola per costruire l'eseguibile Colleen
Colleen: Colleen/Colleen.c
	$(CC) $(CFLAGS) -o $@ $^

# Regola per costruire l'eseguibile Grace
Grace: Grace/Grace.c
	$(CC) $(CFLAGS) -o $@ $^

# Regola per costruire l'eseguibile Sully
Sully: Sully/Sully.c
	$(CC) $(CFLAGS) -o $@ $^

# Regola per pulire i file temporanei
fclean:
	rm -f $(REMOVE)

# Regola per pulire i file temporanei e ricompilare
re: fclean all