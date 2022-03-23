#ifndef ACTIVITY12_H // To make sure you don't declare the function more than once by including the header multiple times.
#define ACTIVITY12_H
#include <iostream>
#include <iomanip>
using namespace std;
using namespace std;
/**
 * @brief Read device Interface
 *
 */
struct IReadDevice
{
    virtual void read(File) = 0;
};
/**
 * @brief Save device Interface
 *
 */
struct ISaveDevice
{
    virtual void save(File &file) = 0;
};
/**
 * @brief Out device Interface
 *
 */
struct ISendDevice
{
    virtual void send(File &file) = 0;
};

struct ReadDevice : IReadDevice
{
    void read(File &file) override;
}

struct SaveDevice : ISaveDevice
{
    void save(File &file) override;
}

struct SendDevice : ISendDevice
{ // I recommend using culrpp
    void send(File &file, char *url) override;
}

struct IDevice : IReadDevice,
                 ISaveDevice,
                 ISendDevice
{
};

struct Device : IDevice
{
    IReadDevice &d_read;
    ISaveDevice &d_save;
    ISendDevice &d_send;

    Device(IReadDevice &toRead, ISaveDevice &toSave, ISendDevice &toSend) {}
    void read(File &file) override {}
    void save(File &file) override {}
    void send(File &file) override {}
}
#endif