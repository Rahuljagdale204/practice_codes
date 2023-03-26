print("Using IPv4\nWithout Options\nIdentification -> 100")
print("Normal Datagram\n")
packet_size = int(input("Enter packet size: "))
payload = int(input("Enter payload value: "))
cross = int(input("Enter number of routers crossed: "))
source_ip = "192.16.32.15"
sl = source_ip.split(".")
print(f"Source IP: {source_ip}")
destination_ip = "195.64.4.9"
dl = destination_ip.split(".")
print(f"Destination IP: {destination_ip}\n")
a0 = f"{format(4,'04b')}{format(5,'04b')}00000000"
a1 = f"{format(packet_size+20,'016b')}"
a2 = f"{format(100,'016b')}"
a3 = f"{format(0,'016b')}"
a4 = f"{format(cross*2,'08b')}{format(payload,'08b')}"
a5 = f"{format(0,'016b')}"
a6 = f"{format(int(sl[0]),'08b')}{format(int(sl[1]),'08b')}"
a7 = f"{format(int(sl[2]),'08b')}{format(int(sl[3]),'08b')}"
a8 = f"{format(int(dl[0]),'08b')}{format(int(dl[1]),'08b')}"
a9 = f"{format(int(dl[2]),'08b')}{format(int(dl[3]),'08b')}"
print(f"{a0}\t 4 5 00")
print(f"{a1}\t {packet_size+20}")
print(f"{a2}\t 100")
print(f"{a3}\t Flag & Offset")
print(f"{a4}\t TTL & Payload")
print(f"{a5}\t HCSUM")
print(f"{a6}\t {sl[0]}.{sl[1]}")
print(f"{a7}\t {sl[2]}.{sl[3]}")
print(f"{a8}\t {dl[0]}.{dl[1]}")
print(f"{a9}\t {dl[2]}.{dl[3]}\n")

Sum = bin(int(a0, 2)+int(a1, 2)+int(a2, 2)+int(a3, 2)+int(a4, 2)+int(a5, 2)+int(a6, 2)+int(a7, 2)+int(a8, 2)+int(a9, 2))[2:]
if(len(Sum) > 16):
    x = len(Sum)-16
    Sum = bin(int(Sum[0:x], 2)+int(Sum[x:], 2))[2:]
if(len(Sum) < 16):
    Sum = '0'*(16-len(Sum))+Sum
    
Checksum = ''
for i in Sum:
    if(i == '1'):
        Checksum += '0'
    else:
        Checksum += '1'
        
print("The checksum of IP is: - ",end='')
print(format(int(Checksum,2),'04x').upper())