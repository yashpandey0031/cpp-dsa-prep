    #include <iostream>
    #include <vector>
    #include <String>
    using namespace std;

    //the function for checking if the number is magical or not 
    
    bool is_magical(string number){
        for(int i = 0;i<(int)number.size();i++)
            if(number[i] != '1' && number[i] != '4')
                return false;
        if(number[0] == '4') //checkinf the first number is 4
            return false;
        
        if(number.find("444") != number.npos)//.find finds the number and number.npos is used to check if a substring was not found in a string.
            return false;
        return true;

    }
    //main function yo create for taking the function of solving ( good pracitise )
    int main(){
        string number;
        cin >> number;

        if(is_magical(number))
            cout <<"YES";
        else
            cout <<"NO";

    return  0;
    }

        
        

        
        
        
    
