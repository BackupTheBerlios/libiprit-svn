#ifndef COMMON_H
#define COMMON_H

template <typename T_>
void deallocator(T_ buf[])
{
    delete[] buf;
}

typedef struct IntRect {
    quint32 x1, y1, x2, y2;
} IntRect;


//#define IPRIT_MULTITHREADING

#ifdef IPRIT_MULTITHREADING
#include <QtConcurrentRun>
#include <QFuture>
#endif


#endif // COMMON_H
