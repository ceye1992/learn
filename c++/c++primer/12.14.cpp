#include <memory>
#include <iostream>
#include <string>

 //表示我们正在连接什么东西
struct destination {
    std::string ip;
    int port;
    destination(std::string ip_, int port_) : ip(ip_), port(port_) {}
};
  //使用连接所需要的信息
struct connection {
    std::string ip;
    int port;
    connection(std::string ip_, int port_) : ip(ip_), port(port_) {}
};
//打开连接
connection connect(destination* pDest)
{
    std::shared_ptr<connection> pConn(new connection(pDest->ip, pDest->port));
    std::cout << "creating connection(" << pConn.use_count() << ")"
              << std::endl;
    return *pConn;
}

void disconnect(connection pConn)
{
    std::cout << "connection close(" << pConn.ip << ":" << pConn.port << ")"
              << std::endl;
}
void end_connection(connection *p){disconnect(*p);}

void f(destination &d)
{
    connection Conn = connect(&d);
    std::shared_ptr<connection> p(&Conn, end_connection);
    //使用连接
    //当f退出时（即使是由于异常退出）connection 会被正确关闭
}

int main()
{
    destination dest("202.118.176.67", 3316);
    f(dest);
}
