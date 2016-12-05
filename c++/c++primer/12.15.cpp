#include <memory>
#include <iostream>
#include <string>
//ʹ��lambda������12.14�е�end_connection
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


void f(destination &d)
{
    connection Conn = connect(&d);
    std::shared_ptr<connection> p(&Conn, [](connection *p) {disconnect(*p);});
    //ʹ������
    //��f�˳�ʱ����ʹ�������쳣�˳���connection �ᱻ��ȷ�ر�
}

int main()
{
    destination dest("202.118.176.67", 3316);
    f(dest);
}
