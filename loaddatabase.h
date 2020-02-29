#ifndef LOADDATABASE_H
#define LOADDATABASE_H
#include "QPushButton"

class LoadDatabase: public QPushButton
{
    Q_OBJECT

public:
    LoadDatabase(QWidget* qw): QPushButton(qw){};

signals:
    void iChanged(QObject*);
private slots:
    void buttonpushed(bool);

};

#endif // LOADDATABASE_H
