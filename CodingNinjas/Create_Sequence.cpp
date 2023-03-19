// AUTHOR :: RAHUL MISTRY
// DATE   :: 19/03/2023

vector<long long> createSequence(long long n){
    vector <long long> res;

    for(int i=2; i<n; i++){
        long long num = i;
        bool valid = true;

        while (num > 0)
        {
            long long digit = num % 10;
            
            if(digit != 2 && digit != 5){
                valid =false;
                break;
            }
            num /= 10;
        }

        if(valid){
            res.push_back(num);
        }
        
    }

    return num;
}