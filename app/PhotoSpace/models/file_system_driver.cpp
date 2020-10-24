#include "file_system_driver.h"

FileSystemDriver::FileSystemDriver(QObject *parent) :
    QObject(parent),
    m_repository(this)
{
    this->setupSlots();
}

FileSystemDriver::~FileSystemDriver()
{
    resetSlots();
}

FileSystemDriver &FileSystemDriver::getInstance()
{
    static QScopedPointer<FileSystemDriver> m_instance;
    if(m_instance.data() == nullptr)
    {
        m_instance.reset( new FileSystemDriver() );
    }
    return *m_instance;
}

Repository &FileSystemDriver::getRepository()
{
    return m_repository;
}

void FileSystemDriver::setupSlots()
{

}

void FileSystemDriver::resetSlots()
{

}

