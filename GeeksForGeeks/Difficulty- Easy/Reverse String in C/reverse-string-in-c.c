void reverseString(char str[]) {
    // code here
    int len=strlen(str);
    for(int i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
}