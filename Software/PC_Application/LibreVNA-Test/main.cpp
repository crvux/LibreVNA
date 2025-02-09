#include "utiltests.h"
#include "portextensiontests.h"

#include <QtTest>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    int status = 0;
    status |= QTest::qExec(new UtilTests, argc, argv);
    status |= QTest::qExec(new PortExtensionTests, argc, argv);

    return status;
}
