import socket
s = socket.socket()
print ("Socket successfully created!!!")
port = 12345
s.bind(('', port))
print ("socket binded to %s" %(port))
s.listen(5)
print ("socket is listening")
while True:
    c, addr = s.accept()
    print ('connected client Address: - ', addr )
    c.send('Client connected successfully'.encode())
    c.close()
    break