#ifndef _SPLASHSCREEN_H_
#define _SPLASHSCREEN_H_

#include <QSplashScreen>
#include <QMovie>

class QPixmap;
class QPainter;

class CSplashScreen : public QSplashScreen
{
    Q_OBJECT
public:
    CSplashScreen(const QPixmap & pixmap);
    CSplashScreen(const QString gifname);
    ~CSplashScreen();
    void setGif(QString filename);

protected:
    virtual void drawContents(QPainter *painter);

private slots:
    void slot_update();

private:
    QMovie *m_move;
    int m_rotate;

};

#endif // _SPLASHSCREEN_H_
