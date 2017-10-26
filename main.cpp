#include <QApplication>
#include "mainwindow.h"
int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/images/splash.png"));
    splash->show();
    Qt::Alignment topRigth = Qt::AlignRight | Qt::AlignTop;
    splash->showMessage(QObject::tr("Setting up the main window..."),
                        topRigh, Qt::white);
    MainWindow mainWin;
    splash->showMessage(QObject::tr("Loading modules..."), topRight, Qt::white);
    loadModules();
    splash->shoMessage(QObject::tr("Establishing connections..."), topRight, Qt::white);
    establishConnections();
    mainWin.show();
    splash->finish(&mainWin);
    delete splash;

    return app.exec();
}
