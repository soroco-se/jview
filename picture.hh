/*
 * picture.hh
 *
 * Container for an image (photo) with caption
 *
 */
#ifndef PICTURE_WIDGET_HH
#define PICTURE_WIDGET_HH

#include <string>

#include <Wt/WContainerWidget>
#include <Wt/WText>
#include <Wt/WImage>

namespace Soroco
{
	struct Dimension
	{
		int		width;
		int		height;
	}

	struct Picture
	{
		std::string filename;		// filename/relative path of the image 
		std::string caption;		// caption for the image
		int					timstamp:		// epoch timstamp of when the image was taken
		Dimension		size;				// original width and height of the image
	};

	class PictureWidget : public Wt::WContainerWidget
	{
		public:
			PictureWidget(Wt::WContainerWidget* parent);
			PictureWidget(Wt::WContainerWidget* parent, Picture pic);

			void setPicture(Picture pic);	// set basic info needed to display the image
			void setWidth(int w);					// set presentation width (sets _view_size and scale)


		private:
			Wt::WImage*	_image;
			Wt::WText*  _caption;
			Picture			_picture;
			Dimension		_view_size;
			double			_scale;
	};


} // soroco
#endif
