print("Using IPv4\nWithout Options\n")
packet_size = int(input("Enter data size in bytes: "))
source_ip = input("Enter source IP: ")
sl = source_ip.split(".")
destination_ip = input("Enter destination IP: ")
dl = destination_ip.split(".")
source_port = int(input("Enter source port: "))
destination_port = int(input("Enter destination port: "))
a0 = f"{format(17,'016b')}"
a1 = f"{format(8+packet_size,'016b')}"
a2 = f"{format(source_port,'016b')}"
a3 = f"{format(destination_port,'016b')}"
a4 = f"{format(packet_size,'016b')}"
a5 = f"{format(0,'016b')}"
a6 = f"{format(int(sl[0]),'08b')}{format(int(sl[1]),'08b')}"
a7 = f"{format(int(sl[2]),'08b')}{format(int(sl[3]),'08b')}"
a8 = f"{format(int(dl[0]),'08b')}{format(int(dl[1]),'08b')}"
a9 = f"{format(int(dl[2]),'08b')}{format(int(dl[3]),'08b')}"
print(f"{a6}\t {sl[0]}.{sl[1]}")
print(f"{a7}\t {sl[2]}.{sl[3]}")
print(f"{a8}\t {dl[0]}.{dl[1]}")
print(f"{a9}\t {dl[2]}.{dl[3]}")
print(f"{a0}\t all 0's + Protocol UDP")
print(f"{a1}\t Total Length")
print(f"{a2}\t Source Port")
print(f"{a3}\t Destination Port")
print(f"{a1}\t UDP Length")
print(f"{a5}\t CSUM")
print(f"{a4}\t Data\n")
Sum = bin(int(a0, 2)+int(a1, 2)+int(a1, 2)+int(a2, 2)+int(a3, 2)+int(a4, 2)+int(a5, 2)+int(a6, 2)+int(a7, 2)+int(a8, 2)+int(a9, 2))[2:]
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
print("The UDP checksum is : -",end='')
print(format(int(Checksum,2),'04x').upper())