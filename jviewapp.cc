#include <jviewapp.hh>

JViewApp::JViewApp(const Wt::WEnvironment& env)
    : Wt::WApplication(env)
{
    setTitle("Nu börjar vi!");

    root()->addWidget(new Wt::WText("Your name, please ? "));
    nameEdit_ = new Wt::WLineEdit(root());
    Wt::WPushButton *button = new Wt::WPushButton("Greet me.", root());
    root()->addWidget(new Wt::WBreak());
    greeting_ = new Wt::WText(root());
    button->clicked().connect(this, &JViewApp::greet);

    image_ = new Wt::WImage("test.jpg",root());
//    image_->resize(512,512);
    image_->show();
}

void JViewApp::greet()
{
    greeting_->setText("Hello there, " + nameEdit_->text());
}

