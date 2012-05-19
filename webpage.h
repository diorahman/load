#ifndef WEB_PAGE_H
#define WEB_PAGE_H

#include <QObject>

class QWebPage;

class WebPage : public QObject{
	
	Q_OBJECT
	
public:
	WebPage(QObject * parent = 0);
	~WebPage();
	
	void load();
	
private slots:
	void debug();	
	
private:
	QWebPage * page;
	
};

#endif