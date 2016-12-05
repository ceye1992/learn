#include <memory>
#include <iostream>
#include <string>

 //��ʾ������������ʲô����
struct destination {
    std::string ip;
    int port;
    destination(std::string ip_, int port_) : ip(ip_), port(port_) {}
};
  //ʹ����������Ҫ����Ϣ
struct connection {
    std::string ip;
    int port;
    connection(std::string ip_, int port_) : ip(ip_), port(port_) {}
};
//������
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
    //ʹ������
    //��f�˳�ʱ����ʹ�������쳣�˳���connection �ᱻ��ȷ�ر�
}

int main()
{
    destination dest("202.118.176.67", 3316);
    f(dest);
}
