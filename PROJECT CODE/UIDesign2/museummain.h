#ifndef MUSEUMMAIN_H
#define MUSEUMMAIN_H

#include <QDialog>

namespace Ui {
class MuseumMain;
}

class MuseumMain : public QDialog
{
    Q_OBJECT

public:
    explicit MuseumMain(QWidget *parent = nullptr);
    ~MuseumMain();

private:
    Ui::MuseumMain *ui;
};

#endif // MUSEUMMAIN_H
