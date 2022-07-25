// input - given string
// You need to update in the given string itself. No need to print or return anything

void reverseStringWordWise(char input[]) {
    // Write your code here
    
    int count=0,i=0,j;
    for(int i=0;input[i]!='\0';i++)
        count++;
    j=count-1;
    while(i<j){
        
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        
        i++;
        j--;
    }
    
    int start=0,end,space;
    
    for(int i=0;i<=count;i++){
        
        if(input[i]==' ' || input[i]=='\0'){
            
            space=i;
            end=space-1;
            
            while(start<end){
               
                int temp = input[start];
                input[start] = input[end];
                input[end] = temp;
        
                start++;
                end--;
                
            }
            
            start = space+1;
            
        }
    }
}