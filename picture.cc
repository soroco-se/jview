#include <picture.hh>

namespace soroco
{

PictureWidget::PictureWidget(Wt::WContainerWidget* parent) : 
	Wt::WContainerWidget(parent)
{
}

PictureWidget::PictureWidget(Wt::WContainerWidget* parent, Picture pic) : 
	Wt::WContainerWidget(parent)
{
	setPicture(pic);
}

PictureWidget::setPicture(Picture pic)
{
  _image = new Wt::WImage(pic.filename, this);
	_caption = new Wt::WText(pic.caption);
}

} // soroco
