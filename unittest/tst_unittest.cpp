#include <QtTest>
#include "../server12/Func_for_server.cpp"
#include "../server12/Funcs_for_server.h"
// add necessary includes here

class unittest : public QObject
{
    Q_OBJECT

public:
    unittest()= default;
    ~unittest()= default;

private slots:
    void test_case1();
    void test_case2();
    void test_case3();
    void test_case3();
    void test_case5();
    void test_case6();
    void test_case7();
    void test_case8();
    void test_case9();
    void test_case10();
};

unittest::unittest()
{

}

unittest::~unittest()
{

}

void unittest::test_case1()
{
    int key = 2;
    QString message = "abc";
    QString expected = "cde";
    QString result = Cesar(key, message);
    QCOMPARE(result, expected);
}

void unittest::test_case2()
{
    int key = 4;
    QString message = "1234";
    QString expected = "5678";
    QString result = Cesar(key, message);
    QCOMPARE(result, expected);
}

void unittest::test_case3()
{
    int key = 2;
    QString message = "ABCDE";
    QString expected = "CDEFG";
    QString result = Cesar(key, message);
    QCOMPARE(result, expected);
}

void unittest::test_case4()
{
    int key = 10;
    QString message = "!qwer";
    QString expected = "+{!o|";
    QString result = Cesar(key, message);
    QCOMPARE(result, expected);
}

void unittest::test_case5()
{
    int key = 5;
    QString message = "ascdeiqz";
    QString expected = "fxhijn";
    QString result = Cesar(key, message);
    QCOMPARE(result, expected);
}

void unittest::test_case6()
{
    int key = 33;
    QString message = "abc";
    QString expected = "\"#$";
    QString result = Cesar(key, message);
    QCOMPARE(result, expected);
}

void unittest::test_case7()
{
    int key = 62;
    QString message = "abd";
    QString expected = "?@B";
    QString result = Cesar(key, message);
    QCOMPARE(result, expected);
}

void unittest::test_case8()
{
    int key = 76;
    QString message = "ytur";
    QString expected = "e`a^";
    QString result = Cesar(key, message);
    QCOMPARE(result, expected);
}

void unittest::test_case9()
{
    int key = 23;
    QString message = "985";
    QString expected = "POL";
    QString result = Cesar(key, message);
    QCOMPARE(result, expected);
}

void unittest::test_case10()
{
    int key = 100;
    QString message = "zzzz";
    QString expected = "~~~~";
    QString result = Cesar(key, message);
    QCOMPARE(result, expected);
}



QTEST_APPLESS_MAIN(unittest)

#include "tst_unittest.moc"
