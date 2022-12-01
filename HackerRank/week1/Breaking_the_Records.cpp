

//Breaking Records


vector<int> breakingRecords(vector<int> scores) {
 int min{scores[0]};
    int max{scores[0]};
    int mincount{};
    int maxcount{};
    vector<int> records;
    
    for (int i = 0; i < scores.size(); ++i) {
        if (min > scores[i]) {
            min = scores[i];
            ++mincount;
        }
        if (max < scores[i]) {
            max = scores[i];
            ++maxcount;
        }
    }
    
    records.push_back(maxcount);
    records.push_back(mincount);
    
    return records;
}