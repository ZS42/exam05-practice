#include "BrickWall.hpp"

BrickWall::BrickWall():ATarget("Inconspicuous Red-brick Wall")
{

}
BrickWall::BrickWall(BrickWall const &object)
{
    *this = object;
}
BrickWall &BrickWall::operator=(BrickWall const &object)
{
    (void)object;
    return (*this);

}
BrickWall::~BrickWall()
{
    
}
ATarget *BrickWall::clone()const
{
    return (new BrickWall);
}