void createMap(unordered_map<string, char> *um)
{
    (*um)["0000"] = '0';
    (*um)["0001"] = '1';
    (*um)["0010"] = '2';
    (*um)["0011"] = '3';
    (*um)["0100"] = '4';
    (*um)["0101"] = '5';
    (*um)["0110"] = '6';
    (*um)["0111"] = '7';
    (*um)["1000"] = '8';
    (*um)["1001"] = '9';
    (*um)["1010"] = 'A';
    (*um)["1011"] = 'B';
    (*um)["1100"] = 'C';
    (*um)["1101"] = 'D';
    (*um)["1110"] = 'E';
    (*um)["1111"] = 'F';
}
string binaryHex(string bin)
{
    int l = bin.size();
    int len_left =  l;
    for (int i = 1; i <= (4 - len_left % 4) % 4; i++)
        bin = '0' + bin;  
    unordered_map<string, char> bin_hex_map;
    createMap(&bin_hex_map);
    int i = 0;
    string hex = "";
    while (1){
        hex += bin_hex_map[bin.substr(i, 4)];
        i += 4;
        if (i == bin.size())
            break;
    }
    while(hex[0]=='0' && hex.size() > 1){
        hex.erase(0,1);
    }
    return hex;    
}
