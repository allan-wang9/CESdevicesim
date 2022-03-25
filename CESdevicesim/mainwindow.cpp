#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    /*----------------------------------------------------------------------------------------
    The below are the images used for the application. Each are saved as resource files
    ---------------------------------------------------------------------------------------- */

    QPixmap pix(":/resources/img/audioInput.JPG");
    int w = ui->audioInput->width();
    int h = ui->audioInput->height();
    ui->audioInput->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap pix2(":/resources/img/cesOutput.JPG");
    int wcesOutput = ui->cesOutput->width();
    int hcesOutput = ui->cesOutput->height();
    ui->cesOutput->setPixmap(pix2.scaled(wcesOutput,hcesOutput,Qt::KeepAspectRatio));

    QPixmap pix3(":/resources/img/delta.JPG");
    int wdelta = ui->delta->width();
    int hdelta = ui->delta->height();
    ui->delta->setPixmap(pix3.scaled(wdelta,hdelta,Qt::KeepAspectRatio));

    QPixmap pix4(":/resources/img/down.JPG");
    int wdown = ui->downIntensity->width();
    int hdown = ui->downIntensity->height();
    ui->downIntensity->setPixmap(pix4.scaled(wdown,hdown,Qt::KeepAspectRatio));

    QPixmap pix5(":/resources/img/100Hz.JPG");
    int w100Hz = ui->hundredHZ->width();
    int h100Hz = ui->hundredHZ->height();
    ui->hundredHZ->setPixmap(pix5.scaled(w100Hz,h100Hz,Qt::KeepAspectRatio));

    QPixmap pix6(":/resources/img/intensity.JPG");
    int wIntensity = ui->intensity->width();
    int hIntensity = ui->intensity->height();
    ui->intensity->setPixmap(pix6.scaled(wIntensity,hIntensity,Qt::KeepAspectRatio));

    QPixmap pix7(":/resources/img/20MinSession.JPG");
    int wmin20 = ui->min20->width();
    int hmin20 = ui->min20->height();
    ui->min20->setPixmap(pix7.scaled(wmin20,hmin20,Qt::KeepAspectRatio));

    QPixmap pix8(":/resources/img/powerOn.JPG");
    int wpower = ui->power->width();
    int hpower = ui->power->height();
    ui->power->setPixmap(pix8.scaled(wpower,hpower,Qt::KeepAspectRatio));

    QPixmap pix9(":/resources/img/45MinSession.JPG");
    int wmin45 = ui->min45->width();
    int hmin45 = ui->min45->height();
    ui->min45->setPixmap(pix9.scaled(wmin45,hmin45,Qt::KeepAspectRatio));

    QPixmap pix10(":/resources/img/UserDesignedSession.JPG");
    int wudSession = ui->udSession->width();
    int hudSession = ui->udSession->height();
    ui->udSession->setPixmap(pix10.scaled(wudSession,hudSession,Qt::KeepAspectRatio));

    QPixmap pix11(":/resources/img/startSession.JPG");
    int wsessionStart = ui->sessionStart->width();
    int hsessionStart = ui->sessionStart->height();
    ui->sessionStart->setPixmap(pix11.scaled(wsessionStart,hsessionStart,Qt::KeepAspectRatio));

    QPixmap pix12(":/resources/img/alpha.JPG");
    int walpha = ui->alpha->width();
    int halpha = ui->alpha->height();
    ui->alpha->setPixmap(pix12.scaled(walpha,halpha,Qt::KeepAspectRatio));

    QPixmap pix13(":/resources/img/Up.JPG");
    int wupIntensity = ui->upIntensity->width();
    int hupIntensity = ui->upIntensity->height();
    ui->upIntensity->setPixmap(pix13.scaled(wupIntensity,hupIntensity,Qt::KeepAspectRatio));

    QPixmap pix14(":/resources/img/MeT.JPG");
    int wMET = ui->MET->width();
    int hMET = ui->MET->height();
    ui->MET->setPixmap(pix14.scaled(wMET,hMET,Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}

