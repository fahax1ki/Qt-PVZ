#include "plant.h"

Plant::Plant(QGraphicsItem *parent)
    : QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/images/Pea.png"));
}
