NAME: monitor

monitor: main.cpp IMonitorModule.cpp
	 clang++ main.cpp IMonitorModule.cpp -o monitor -lcurses 

clean: @rm -rf *.o

fclean: clean
		@rm -rf monitor

re: fclean all
