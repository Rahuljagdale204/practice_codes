print("Using IPv4")
packet_size = int(input("Enter packet size: "))
MTU_of_source = int(input("Enter MTU of source: "))
MTU_of_destination = int(input("Enter MTU of destination: "))
source_ip = "201.1.1.1"
print(f"Source IP: {source_ip}")
destination_ip = "210.10.10.10"
print(f"Destination IP: {destination_ip}")
def fragment(p,d):
    temp = p
    for i in range(0 , p-1, d-100):
        if i+d-100-1 < p-1:
            print(f" 4\t 5\t 00\t {d-80}\n 100\t\t 001\t {i//8}\n 1\t 6\t\t HCSUM\n {source_ip}\n {destination_ip}\n {i} to {i+d-100-1}\n\n")
            temp -= d-100
        else:
            print(f" 4\t 5\t 00\t {temp+20}\n 100\t\t 000\t {i//8}\n 1\t 6\t\t HCSUM\n {source_ip}\n {destination_ip}\n {i} to {p-1}\n\n")
#Let identification be 100
if packet_size > MTU_of_destination:
    fragment(packet_size, MTU_of_destination)