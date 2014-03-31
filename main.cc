#include <Wt/WServer>
#include <jviewapp.hh>

Wt::WApplication *createApplication(const Wt::WEnvironment& env)
{
    return new JViewApp(env);
}

int main(int argc, char **argv)
{
  try {
    Wt::WServer server(argv[0]);

    server.setServerConfiguration(argc, argv, WTHTTP_CONFIGURATION);
    server.addEntryPoint(Wt::Application, createApplication);

//    Session::configureAuth();

    if (server.start()) {
      Wt::WServer::waitForShutdown();
      server.stop();
    }
  } catch (Wt::WServer::Exception& e) {
    std::cerr << e.what() << std::endl;
  } catch (std::exception &e) {
    std::cerr << "exception: " << e.what() << std::endl;
  }
//    return Wt::WRun(argc, argv, &createApplication);
}
