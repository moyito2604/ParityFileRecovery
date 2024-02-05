compile:
	g++ -g Driver.cpp Parity.cpp -o FileRecovery.out
test-compile:
	g++ -g testDriver.cpp Parity.cpp -o FileRecovery.out
run:
	./FileRecovery.out
clean:
	rm -rf *.exe
	rm -rf *.out
