Datamodell
==========

Vilken sorts data ska hanteras av systemet jview?
	- Bilder
	- Beskrivning av bilder
	- Löpande text
	- Videoklipp
	- Beskrivning av videoklipp
	- Kommentarer
	- Användare
		- Besökare
		- Administratör
		- Adderare


Use case
========
	En ADDERARE vill publicera några blider/videoklipp med beskrivning samt fylla ut med brödtext.
	Välja bilder:
		


Data
====

Story
	Title
	Date of writing
	Elements	(one element is one of Text OR Picture)
		Text
			Formatted using some simple standard (markdown? asciidoc?)
		Picture
			image-ref (path or actual image?)
			description (extracted from exif if available)
