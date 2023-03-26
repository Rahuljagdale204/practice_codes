// Rail Fence Cipher
#include<bits/stdc++.h>
using namespace std;
class RailFence
{
public:
    int nrow, ncol;
    int getKey()
    {
        int key;
        cout << "Enter the Key \n";
        cin >> key;
        return key;
    }
    string getMessage()
    {
        string msg;
        cout << "Enter the message \n";
        cin.ignore();
        getline(cin, msg);
        return msg;
    }
    void encrypt(string msg, int key)
    {
        nrow = key;
        ncol = msg.length();
        char rail_matrix[nrow][ncol];
        for (int i = 0; i < nrow; i++)
        {
            for (int j = 0; j < ncol; j++)
            {
                rail_matrix[i][j] = '^';
            }
        }
        bool downward = false;
        int r = 0, c = 0;
        string ciphertext;
        for (int i = 0; i < msg.length(); i++)
        {
            if (r == 0 || r == key - 1)
                downward = !downward;
            rail_matrix[r][c++] = msg[i];
            downward ? r++ : r--;
        }
        for (int i = 0; i < nrow; i++)
        {
            for (int j = 0; j < ncol; j++)
            {
                cout << rail_matrix[i][j] << " ";
            }
            cout << "\n";
        }
        for (int i = 0; i < key; i++)
        {
            for (int j = 0; j < msg.length(); j++)
            {
                if (rail_matrix[i][j] != '^')
                    ciphertext.push_back(rail_matrix[i][j]);
            }
        }
        cout << "\n The Ciphertext is -> " << ciphertext << "\n";
    }
    void decrypt(string msg, int key)
    {
        nrow = key;
        ncol = msg.length();
        char rail_matrix[nrow][ncol];
        string plaintext;
        for (int i = 0; i < nrow; i++)
        {
            for (int j = 0; j < ncol; j++)
            {
                rail_matrix[i][j] = '^';
            }
        }
        bool downward;
        int r = 0, c = 0;
        for (int i = 0; i < msg.length(); i++)
        {
            if (r == 0)
                downward = true;
            if (r == key - 1)
                downward = false;
            rail_matrix[r][c++] = '~';
            downward ? r++ : r--;
        }
        int indx = 0;
        for (int i = 0; i < key; i++)
        {
            for (int j = 0; j < msg.length(); j++)
            {
                if (rail_matrix[i][j] == '~' && indx < msg.length())
                    rail_matrix[i][j] = msg[indx++];
            }
        }
        r = 0, c = 0;
        for (int i = 0; i < msg.length(); i++)
        {
            if (r == 0)
                downward = true;
            if (r == key - 1)
                downward = false;
            if (rail_matrix[r][c] != '~')
                plaintext.push_back(rail_matrix[r][c++]);
            downward ? r++ : r--;
        }
        cout << "The Plaintext is ->" << plaintext << "\n";
    }
};
int main()
{
    int choice;
    char more;
    RailFence rf;
    int k;
    string m;
    do
    {
        cout << "1.Encryption" << endl;
        cout << "2.Decryption" << endl;
        cout << "3.Exit" << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            k = rf.getKey();
            m = rf.getMessage();
            rf.encrypt(m, k);
            break;
        case 2:
            k = rf.getKey();
            m = rf.getMessage();
            rf.decrypt(m, k);
            break;
        case 3:
            exit(1);
        default:
            cout << "\n INVALID CHOICE! \n";
        }
        cout << "\n Do you want to perfrom more ENCRYPTION/DECRYPTION ? (y/n)\n ";
        cin >> more;
    } while (more == 'y' || more == 'Y');
    return 0;
}