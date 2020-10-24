#ifndef FILESYSTEMDRIVER_H
#define FILESYSTEMDRIVER_H

#include <QObject>

#include "models/repository/repository.h"

// Router& router = Router::getInstance();

class FileSystemDriver : public QObject
{
    Q_OBJECT
public:
    static FileSystemDriver& getInstance();
    ~FileSystemDriver();

    Repository& getRepository();

private:
    explicit FileSystemDriver(QObject *parent = nullptr);

    /// Репозиторий, хранящий текущее состояние
    Repository m_repository;

    /**
     * @brief Подключет слоты к сигналам полей класса
     */
    void setupSlots();

    /**
     * @brief Отключает слоты от сигналов полей класса
     */
    void resetSlots();

signals:

public slots:
};

#endif // FILESYSTEMDRIVER_H
