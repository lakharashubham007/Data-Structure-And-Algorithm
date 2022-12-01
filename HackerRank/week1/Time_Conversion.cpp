



string timeConversion(string s) {
    string ret;
    if (s[8]=='P'){
        int hour = stoi(s.substr(0,2));
        if (hour==12){
            return s.substr(0,8);
        } else {
            ret = to_string(hour+12) + ":" + s.substr(3,s.length()-5);
        return ret;
        }
    } else {
        int hour = stoi(s.substr(0,2));
        if (hour==12){
            ret = "00:" + s.substr(3,s.length()-5);
            return ret;
        } else {
            return s.substr(0,8);
        }
        
    }

}