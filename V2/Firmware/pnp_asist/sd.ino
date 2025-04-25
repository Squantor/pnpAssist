

void getFields( const char *delim = " " )
{
  fieldCount = 0;
  field[ fieldCount ] = strtok( fullMsg, delim );
  
  while (field[ fieldCount ]) {
    fieldCount++;
    if (fieldCount >= MAX_FIELD_COUNT)
    break;
    field[ fieldCount ] = strtok( nullptr, delim );
  }
}

void parseCommand(void){
  getFields();
}
