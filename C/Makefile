# Variabili
CC = gcc
CFLAGS = -Wall -Wextra -Werror
REMOVE = Colleen/Colleen Grace/Grace Sully/Sully Sully_*

# Regola principale per costruire tutti gli eseguibili
all: Colleen/Colleen Grace/Grace Sully/Sully

# Regola per costruire l'eseguibile Colleen
Colleen/Colleen: Colleen/Colleen.c
	$(CC) $(CFLAGS) -o $@ $<
	@echo "Colleen built successfully"

# Regola per costruire l'eseguibile Grace
Grace/Grace: Grace/Grace.c
	$(CC) $(CFLAGS) -o $@ $<
	@echo "Grace built successfully"

# Regola per costruire l'eseguibile Sully
Sully/Sully: Sully/Sully.c
	$(CC) $(CFLAGS) -o $@ $<
	@echo "Sully built successfully"


#Regola per testare Colleen
test_Colleen: Colleen/Colleen
	@echo "Colleen test:"
	@./Colleen/Colleen > Colleen/Colleen_output
	@diff Colleen/Colleen_output Colleen/Colleen.c && echo "Test passed" || echo "Test failed"

#Regola per testare Grace
test_Grace: Grace/Grace
	@echo "Grace test:"
	@./Grace/Grace
	@diff Grace/Grace.c Grace_kid.c
	@diff Grace_kid.c Grace/Grace.c && echo "Test passed" || echo "Test failed"

#Regola per testare Sully
test_Sully: Sully/Sully
	@./Sully/Sully
	@echo "Sully test:"
	@diff Sully/Sully.c Sully_5.c || echo "Difference found in Sully_5.c\n"
	@diff Sully/Sully.c Sully_4.c || echo "Difference found in Sully_4.c\n"
	@diff Sully/Sully.c Sully_3.c || echo "Difference found in Sully_3.c\n"
	@diff Sully/Sully.c Sully_2.c || echo "Difference found in Sully_2.c\n"
	@diff Sully/Sully.c Sully_1.c || echo "Difference found in Sully_1.c\n"
#	@diff Sully/Sully.c Sully_0.c || echo "Difference found in Sully_0.c\n"

#regola per testare tutti i programmi
test: test_Colleen test_Grace test_Sully

# Regola per eliminare tutti i file temporanei
clean:
	rm -f Colleen/Colleen_output Grace_kid.c Sully_*
	@echo "All temporary files removed"

# Regola per eliminare tutti gli eseguibili
fclean: clean
	rm -f $(REMOVE)
	@echo "All executables removed"

# Regola per eliminare tutti gli eseguibili e ricompilare
re: fclean all