all:
	g++ -I. main.cc jviewapp.cc -o jview -lwthttp -lwt -lboost_signals
