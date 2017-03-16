#ifndef MARTINGARRIX_H
#define MARTINGARRIX_H

#include <QMainWindow>

namespace Ui {
class MartinGarrix;
}

class MartinGarrix : public QMainWindow
{
    Q_OBJECT

public:
    explicit MartinGarrix(QWidget *parent = 0);
    ~MartinGarrix();

private:
    Ui::MartinGarrix *ui;
};

#endif // MARTINGARRIX_H
