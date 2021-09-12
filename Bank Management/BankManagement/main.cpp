#include "mainwindow.h"
#include <QApplication>
#include<QSplashScreen>
#include<QTimer>
#include"splashscreen.h"
#include<QLabel>

#include<QMovie>
#include<QLayout>
#include<QBoxLayout>
#include <QStyle>
#include <QDesktopWidget>
#include<QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;

    //user code
    //set the app stylesheett
    QFile styleSheetFile("C:/Users/mdsaa/Documents/QtApps/Bank Management/BankManagement/QtTheme/Fibrary.qss");

    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    a.setStyleSheet(styleSheet);


    QMovie *movie = new QMovie("C:/Users/mdsaa/Documents/QtApps/Bank Management/BankManagement/images/dsceComplex.gif");
    QLabel *processLabel = new QLabel(nullptr);

    processLabel->resize(1272,717);  // to make sure its large enough
//    processLabel->resize(600,338);

    processLabel->setMovie(movie);
    processLabel->setWindowFlags(Qt::FramelessWindowHint);
    processLabel->setAlignment(Qt::AlignCenter);
    processLabel->setGeometry(  QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,processLabel->size(),qApp->desktop()->availableGeometry())         );

    movie->start();
    processLabel->show();

    QTimer::singleShot(6500,processLabel,SLOT(close()));
    QTimer::singleShot(6500,&w,SLOT(show()));

    //end of user code

//    w.show(); //uncomment this line later
//    splashscream->finish(&w);
    return a.exec();
}
