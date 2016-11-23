#ifndef EX7_57_H_INCLUDED
#define EX7_57_H_INCLUDED
class Account{
public:
    void calculate() {amount += amount * interestRate; }
    static double rate() {return  interestRate; }
    static void rate(double)
private:
    std::string owner;
    double amount;
    static double interestRate;
    static constexpr double todayRate = 42.42;  //在内部定义静态变量
    static double initRate(){return todayRate;};
};
void Account::rate(double newRate)
{
    interestRate = newRate;
}
double Account::interestRate = initRate();  //在外部定义静态变量

#endif // EX7_57_H_INCLUDED
