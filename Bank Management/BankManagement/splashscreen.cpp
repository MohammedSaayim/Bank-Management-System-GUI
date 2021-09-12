#include <QPixmap>
#include <QPainter>
#include "splashscreen.h"
#include <QLabel>

#include <QTimer>

CSplashScreen::CSplashScreen(const QPixmap & pixmap) : QSplashScreen(pixmap)
{

}

CSplashScreen::CSplashScreen( const QString gifname )
{
    setGif(gifname);
}

CSplashScreen::~CSplashScreen()
{

}

void CSplashScreen::slot_update()
{
    setPixmap(m_move->currentPixmap());
    repaint();
}

void CSplashScreen::drawContents(QPainter *painter)
{
    painter->setFont(QFont("SimHei", 40));
    painter->setPen(QColor(213, 218, 220));
    painter->drawText(QPointF(20, 100), "Teacher System");

    painter->setFont(QFont("SimHei", 18));
    painter->setPen(QColor(213, 218, 220));
    painter->drawText(QPointF(30, 140), "Version: 1.0.0");

    painter->setFont(QFont("Helvetica", 16));
    painter->setPen(QColor(Qt::white));
    QRect r = rect();
    r.setRect(r.x(), r.y(), r.width(), r.height() -12);
     painter->drawText(r, Qt::AlignBottom | Qt::AlignCenter, "Test");

    painter->setFont(QFont("Verdana", 11));
    QSplashScreen::drawContents(painter);
}

void CSplashScreen::setGif( QString filename )
{
    m_move = new QMovie(filename);
    m_move->start();

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(slot_update()));
    timer->start(100);
}

