/*this file is used to storage the data to a txt file*/

void data_storage(double data1,double data2){
    FILE *fp;
    fp = fopen("MPC_data.txt","w+");
    fprintf(fp,"\nx=%f y=%f",data1,data2);
    fclose(fp);
    }
