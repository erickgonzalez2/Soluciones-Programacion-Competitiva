#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int N, M, temp;
    string linea;
    cin>>N>>M;
    long long int arr[N][M];
    for(long long int i = 0; i < N; i++){
        for(long long int j = 0; j < M; j++){
            cin>>arr[i][j];
        }
    }
    cin.ignore();
    cin>>linea;
    for(long long int l = 0; l <linea.size(); l++){
        switch(linea[l]){
            case 'N':
                //Recorrer hacia arriba;
                for(long long int j = 0; j < M; j++){
                    for(long long int i = 0; i < N; i++){
                        if(arr[i][j]!=0){
                            for(long long int k = i; k>0; k--){
                                if(arr[k-1][j]==0){
                                    arr[k-1][j] = arr[k][j];
                                    arr[k][j] = 0;
                                }else{
                                    k = -1;
                                }
                            }
                        }
                    }
                }
                for(long long int j = 0; j < M; j++){
                    for(long long int i = 0; i < N-1 ; i++){
                        if(arr[i][j] != 0 && arr[i][j] == arr[i+1][j]){
                            arr[i+1][j] += arr[i][j];
                            arr[i][j] = 0;
                            i++;
                        }
                    }
                }

                for(long long int j = 0; j < M; j++){
                    for(long long int i = 0; i < N; i++){
                        if(arr[i][j]!=0){
                            for(long long int k = i; k>0; k--){
                                if(arr[k-1][j]==0){
                                    arr[k-1][j] = arr[k][j];
                                    arr[k][j] = 0;
                                }else{
                                    k = -1;
                                }
                            }
                        }
                    }
                }
                break;
            case 'S':
                for(long long int j = 0; j < M; j++){
                    for(long long int i = N-1; i >=0; i--){
                        if(arr[i][j]!=0){
                            for(long long int k = i; k<N-1; k++){
                                if(arr[k+1][j]==0){
                                    arr[k+1][j] = arr[k][j];
                                    arr[k][j] = 0;
                                }else{
                                    k = N;
                                }
                            }
                        }
                    }
                }

                for(long long int j = 0; j < M; j++){
                    for(long long int i = N-1; i > 0; i--){
                        if(arr[i][j] != 0 && arr[i][j] == arr[i-1][j]){
                            arr[i-1][j] += arr[i][j];
                            arr[i][j] = 0;
                            i--;
                        }
                    }
                }

                for(long long int j = 0; j < M; j++){
                    for(long long int i = N-1; i >=0; i--){
                        if(arr[i][j]!=0){
                            for(long long int k = i; k<N-1; k++){
                                if(arr[k+1][j]==0){
                                    arr[k+1][j] = arr[k][j];
                                    arr[k][j] = 0;
                                }else{
                                    k = N;
                                }
                            }
                        }
                    }
                }
                break;
            case 'E':
                for(long long int i = 0; i < N; i++){
                    for(long long int j = M-1; j >=0; j--){
                        if(arr[i][j]!=0){
                            for(long long int k = j; k<M-1; k++){
                                if(arr[i][k+1]==0){
                                    arr[i][k+1] = arr[i][k];
                                    arr[i][k] = 0;
                                }else{
                                    k = M;
                                }
                            }
                        }
                    }
                }
                for(long long int i = 0; i<N; i++){
                    for(long long int j = M-1; j>0; j--){
                        if(arr[i][j] == arr[i][j-1]){
                            arr[i][j-1] += arr[i][j];
                            arr[i][j] = 0;
                            j--;
                        }
                    }
                }

                for(long long int i = 0; i < N; i++){
                    for(long long int j = M-1; j >=0; j--){
                        if(arr[i][j]!=0){
                            for(long long int k = j; k<M-1; k++){
                                if(arr[i][k+1]==0){
                                    arr[i][k+1] = arr[i][k];
                                    arr[i][k] = 0;
                                }else{
                                    k = M;
                                }
                            }
                        }
                    }
                }
                break;
            case 'O':
                for(long long int i = 0; i < N; i++){
                    for(long long int j = 0; j < M; j++){
                        if(arr[i][j]!=0){
                            for(long long int k = j; k>0; k--){
                                if(arr[i][k-1]==0){
                                    arr[i][k-1] = arr[i][k];
                                    arr[i][k] = 0;
                                }else{
                                    k = -1;
                                }
                            }
                        }
                    }
                }
                for(long long int i = 0; i<N; i++){
                    for(long long int j = 0; j<M-1; j++){
                        if(arr[i][j] == arr[i][j+1]){
                            arr[i][j+1] += arr[i][j];
                            arr[i][j] = 0;
                            j++;
                        }
                    }
                }
                for(long long int i = 0; i<N; i++){
                    for(long long int j = M-1; j>0; j--){
                        if(arr[i][j] == arr[i][j-1]){
                            arr[i][j-1] += arr[i][j];
                            arr[i][j] = 0;
                            j--;
                        }
                    }
                }
                for(long long int i = 0; i < N; i++){
                    for(long long int j = 0; j < M; j++){
                        if(arr[i][j]!=0){
                            for(long long int k = j; k>0; k--){
                                if(arr[i][k-1]==0){
                                    arr[i][k-1] = arr[i][k];
                                    arr[i][k] = 0;
                                }else{
                                    k = -1;
                                }
                            }
                        }
                    }
                }
                break;
        }
    }
    for(long long int i = 0; i < N; i++){
        long long int mayor = 0;
        for(long long int j = 0; j < M; j++)
            if(mayor<arr[i][j])
                mayor = arr[i][j];
        if(mayor != 0)
            cout<<mayor<<endl;
    }
    return 0;
}
