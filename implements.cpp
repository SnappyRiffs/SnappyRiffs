void def(mode, int var[num]){
    int len = sizeof(myNumbers) / sizeof(myNumbers[0]);
    for(int i = 0;i<len;i++){
        def(mode,var[i]);
    }
}
void def(mode,var)(
    pinMode(var,mode);
)
