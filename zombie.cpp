#include "zombie.h"

Zombie::Zombie(QGraphicsItem *parent)
    : QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/images/ZombieWalk1.gif"));
}
