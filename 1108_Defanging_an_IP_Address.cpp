class Solution {
public:
    string defangIPaddr(string address) {
        string defangedAddress;
        for(int i=0; i<address.length(); i++)
        {
            if(address[i] == '.') //find all '.' characters
            {
                defangedAddress+="[.]"; //change the format in the final string
                i++;
            }
            defangedAddress+=to_string(address[i]-'0'); // and add the number
        }
        return defangedAddress;
    }
};
