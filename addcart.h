#ifndef ADDCART_H
#define ADDCART_H


class AddCart
{
public:
    AddCart(QWidget* qw):QPushButton(qw){};
signals:
void iChanged(QObject*);
private slots:
    void buttonpushed(bool);
};

#endif // ADDCART_H
