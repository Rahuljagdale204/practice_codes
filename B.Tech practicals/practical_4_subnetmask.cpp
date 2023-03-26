#include <bits/stdc++.h>
using namespace std;
int subnets = 1, bitschange = 1;
class IP_decimal
{
public:
    int octates[4];
    char cls;
    IP_decimal(string dec)
    {
        int i = 0, j = 1;
        int c = 0;
        while (j <= dec.size())
        {
            if (dec[j] == '.' || j == dec.size())
            {
                this->octates[c] = stoi(dec.substr(i, j - i));
                c++;
                i = j + 1;
                j++;
            }
            j++;
        }
        if (this->octates[0] >= 0 && this->octates[0] <= 127)
        {
            this->cls = 'A';
            long long z = 32 - 24 - bitschange;
            z = pow(2, z);
            cout << "Subnet mask is :"
                 << "255." << 256 - z << ".0.0" << endl;

            int k = 0;
            cout << "Ranges of subnetworks:" << endl;
            while (k <= 255)
            {
                cout << octates[0] << "." << k << "."
                     << "0"
                     << "."
                     << "0"
                     << "  to  " << octates[0] << "." << k + z - 1 << "."
                     << "255"
                     << "."
                     << "255";
                cout << endl;
                k += z;
            }
        }
        else if (this->octates[0] >= 128 && this->octates[0] <= 191)
        {
            this->cls = 'B';
            long long z = 32 - 24 - bitschange;
            z = pow(2, z);
            cout << "Subnet mask is :"
                 << "255.255." << 256 - z << ".0" << endl;
            int k = 0;
            cout << "Ranges of subnetworks:" << endl;
            while (k <= 255)
            {
                cout << octates[0] << "." << octates[1] << "." << k << "."
                     << "0"
                     << "  to  " << octates[0] << "." << octates[1] << "." << k + z - 1 << "."
                     << "255";
                cout << endl;
                k += z;
            }
        }
        else if (this->octates[0] >= 192 && this->octates[0] <= 223)
        {
            this->cls = 'C';
            long long z = 32 - 24 - bitschange;
            z = pow(2, z);
            cout << "Subnet mask is :"
                 << "255.255.255." << 256 - z << endl;
            int k = 0;
            cout << "Ranges of subnetworks:" << endl;
            while (k <= 255)
            {
                cout << octates[0] << "." << octates[1] << "." << octates[2] << "." << k << "  to  " << octates[0] << "." << octates[1] << "." << octates[2] << "." << k + z - 1;
                cout << endl;
                k += z;
            }
        }
    }
    bool is_valid()
    {
        for (int i = 0; i < 4; i++)
        {
            if (octates[i] < 0 || octates[i] > 255)
            {
                return false;
            }
        }
        return true;
        }
};
int main()
{
    string ip;
    cout << "Enter the IP address: -" << endl;cin >> ip;

    cout << "Enter the number of subnets: -" << endl; cin >> subnets;
    bitschange = log2(subnets);
    IP_decimal decip(ip);
    return 0;
}