#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QGraphicsPixmapItem>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    view = new QGraphicsView(this);
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0, 0, 800, 600);
    view->setScene(scene);
    setCentralWidget(view);

    QGraphicsPixmapItem *background = new QGraphicsPixmapItem(QPixmap(":/images/images/Background.jpg"));
    scene->addItem(background);

    Plant *plant = new Plant();
    plant->setPos(100, 100);
    scene->addItem(plant);

    Zombie *zombie = new Zombie();
    zombie->setPos(500, 500);
    scene->addItem(zombie);

}

MainWindow::~MainWindow()
{
    delete ui;
}
