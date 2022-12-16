CFLAGS=-Wall -Wextra
all: tcpclient tcpserver udpclient udpserver
tcpclient: tcpclient.c gcc $(CFLAGS) -D BUFSIZE=2 -D SADDR='struct sockaddr' -D
SIZE='sizeof(struct sockaddr_in)' tcpclient.c -o tcpclient.out
tcpserver: tcpserver.c
gcc $(CFLAGS) -D SERV_PORT=10050 -D BUFSIZE=100 -D SADDR='struct sockaddr' tcpserver.c -o tcpserver.out
udpclient: udpclient.c
gcc $(CFLAGS) -D SERV_PORT=20001 -D BUFSIZE=1024 -D SADDR='struct sockaddr' -D SLEN='sizeof(struct sockaddr_in)' udpclient.c -o udpclient.out
udpserver: udpserver.c
gcc $(CFLAGS) -D SERV_PORT=20001 -D BUFSIZE=1024 -D SADDR='struct sockaddr' -D SLEN='sizeof(struct sockaddr_in)' udpserver.c -o udpserver.out
