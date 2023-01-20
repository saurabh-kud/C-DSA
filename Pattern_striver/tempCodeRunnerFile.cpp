 if(n==1){
                cout<<"*";
             

        }else{
            
                 for(int i=1;i<=n*2-1;i++){
            
            if(i%2==0){
                cout<<endl;
            }else{
                for(int j=1;j<=n;j++){
                    
                    if(i==1|| i==n*2-1){
                        cout<<"*";
                    }else{
                        if(j==1||j==n){
                            cout<<"*";
                        }else{
                            cout<<" ";
                        }
                    }
                }
                
            }
            
        }
            
            
        }