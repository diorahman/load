#include "webpage.h"
#include <QWebPage>
#include <QWebFrame>
#include <QUrl>
#include <QDebug>

WebPage::WebPage(QObject * parent) : QObject(parent){
	page = new QWebPage(this);
	connect(page, SIGNAL(loadFinished(bool)), this, SLOT(debug()));	
}

WebPage::~WebPage(){}

void WebPage::load(){
	page->mainFrame()->load(QUrl("http://google.com"));
}

void WebPage::debug(){
	qDebug() << "res: " << page->mainFrame()->toHtml();
}
