/*
	Writes [a] character to a stream.
*/
__fputc()
{
	char * filename = "D:\\roadTest\\roadTest3.txt"; 
    long file; 
    char * p, str[] = "this is the first line of the log file"; 
    int c; 
    // Create a new file 
    if ((file = fopen(filename, "w+" )) == NULL) { 
		lr_output_message ("Unable to create %s", filename); 
		return -1; 
	}
	// Print string to the log file 
	p = str; // p points to the first character in str 
	while ((*p != NULL) && fputc(*(p++), file) != -1); // Use -1 for EOF 
				 fclose(file); 
//		while (*p != NULL){
//			fputc(*p, file);
//			p++;
	//	}

		fclose(file);
	return 0;
}
