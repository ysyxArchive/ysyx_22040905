#define pmem_size 32768
u_int32_t pmem_inst[pmem_size];
u_int64_t  pmem_data[pmem_size];
u_int32_t pmem_inst_read(u_int64_t pc){
  return pmem_inst[(pc-0x80000000)/4];
}
void pmem_init(char *s){ 
  //init inst
  FILE *fp;
  fp=fopen(s,"r");
  assert(fp!=NULL);
  fseek(fp, 0, SEEK_END);
  int size = ftell(fp);
  size=size/4;
  fseek(fp,0,SEEK_SET);
  int ret=fread(pmem,4,size,fp);
  assert(ret!=0);
  fclose(fp);

  //inst data
  for(int i=0;i<pmem_size;i++){
    pmem_data[i]=0;
  }
  /*for(int i=0;i<size;i++){
    printf("%08x\n",pmem[i]);
  }*/
}
u_int64_t pmem_data_read(u_int64_t addr){
  return pmem_data[addr-0x80000000];
}
void pmem_data_write(u_int64_t addr,u_int64_t val){
  pmem_data[addr-0x80000000]=val;
}


