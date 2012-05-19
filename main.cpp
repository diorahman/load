#include <QApplication>
#include "webpage.h"

int main(int argc, char** argv){
	QApplication app(argc, argv);
	
	WebPage * w = new WebPage(qApp);
	w->load();
	
	return app.exec();
}
