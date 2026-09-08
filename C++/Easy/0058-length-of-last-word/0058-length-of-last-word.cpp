class Solution {
public:
    int lengthOfLastWord(string s) {
        //is problem m apn ko last word ki length btani h to best approach rhegi ki aapn reverse m start kre 
        int i=s.length()-1; // isliye i ko insitialise kiya or last pr rkh diya 
        //s.length()=11;
        //so i=11-1
        //i=10
        // H e l l o   W o r l d
           //0 1 2 3 4 5 6 7 8 9 10

        int count=0; //idr apn n count variable ko initialise krdiya taaki apn last s word ko count krna h isliye

        //ab ye while loop spaces k liye h agar last m spaces hote h unko count nhi kre apn ko spacce ko count nhi krne h isliye agar string s last m space hote h to wo count na ho isliye i fr backward aata rhega
        while(s[i]==' '){ 
            i--;
        }

        //idr i agar 0 s bada h ya fr bada  h and i ko backward laa rhe to string s ka koi bi charaacter space nhi aaye tb tk count krte rhna h 
        while(i>=0 && s[i]!=' '){
            count++;
            i--;
        }
        return count; //idr count ko return krdiya h
    }
};