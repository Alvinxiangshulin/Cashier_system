#include "addcart.h"

void AddCart::buttonpushed(bool b)
{
    emit iChanged(this);
}
