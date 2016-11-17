char* guid_gen(){                         //����GUID����
	typedef struct _GUID    {
		unsigned long Data1;
		unsigned short Data2;
		unsigned short Data3;
		unsigned char Data4[8];
	} GUID;
	GUID m_guid;
	char buf[50];
	char pNameStr[50];
	CoCreateGuid(&m_guid);
	// ���������ʽ
	//sprintf (buf, "{%08lX-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}", // ��д
	//sprintf (buf, "{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",// Сд
	sprintf (buf, "%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",// Сд%08lx-%04x%04x-%02x%02x%02x%02x-%02x%02x%02x%02x
	m_guid.Data1, m_guid.Data2, m_guid.Data3,
	m_guid.Data4[0], m_guid.Data4[1], m_guid.Data4[2], m_guid.Data4[3],
	m_guid.Data4[4], m_guid.Data4[5], m_guid.Data4[6], m_guid.Data4[7]);
	//lr_save_string(buf, paramName);
	//sprintf(pNameStr,"{%s}",paramName);
	return lr_eval_string(buf);
}

char* join(char *s1, char *s2)  
{  
    char *result = (char*)malloc(strlen(s1)+strlen(s2)+1);//+1 for the zero-terminator  
    //in real code you would check for errors in malloc here  
    if (result == NULL) exit (1);  
  
    strcpy(result, s1);  
    strcat(result, s2);  
  
    return result;  
}

// �ַ����滻����.
// ���滻���е�Ҫ�滻���ַ���,���滻���ַ������滻���ַ�����һ��һ����.
// pInput - �����ַ���.
// pOutput - ����ַ���, Ҫ��֤�㹻�Ŀռ���Դ洢�滻����ַ���.
// pSrc - Ҫ���滻�����ַ���, ����%user%
// pDst - Ҫ�滻�ɵ��ַ���, ����user1
// ע��:���ϵ��ַ�����Ҫ��'\0'��β.
//
void Substitute(char *pInput, char *pOutput, char *pSrc, char *pDst)
{
    char    *pi, *po, *p;
    int     nSrcLen, nDstLen, nLen;

    // ָ�������ַ������ζ�ָ��.
    pi = pInput;    
    // ָ������ַ������ζ�ָ��.
    po = pOutput;
    // ���㱻�滻�����滻���ĳ���.
    nSrcLen = strlen(pSrc);
    nDstLen = strlen(pDst);
 
    // ����piָ���ַ����е�һ�γ����滻����λ��,������ָ��(�Ҳ����򷵻�null).   
    p = (char*)strstr(pi, pSrc);
    if(p)
    {
        // �ҵ�.
        while(p)
        {
            // ���㱻�滻��ǰ���ַ����ĳ���.
            nLen = (int)(p - pi);
            // ���Ƶ�����ַ���.
            memcpy(po, pi, nLen);
            memcpy(po + nLen, pDst, nDstLen);
            // �������滻��.
            pi = p + nSrcLen;
            // ����ָ���������ָ��λ��.
            po = po + nLen + nDstLen;
            // ��������.
            p = (char*)strstr(pi, pSrc);
        }
        // ����ʣ���ַ���.
        strcpy(po, pi);
    }
    else
    {
        // û���ҵ���ԭ������.
        strcpy(po, pi);
    }
}

/* @param char* dest Ŀ�괮��Ҳ�����滻����´�
* @param const char* src Դ�ַ��������滻���ַ���
* @param const char* oldstr �ɵ��Ӵ��������滻���Ӵ�
* @param const char* newstr �µ��Ӵ�
* @param int len ��Ҫ���滻��ǰlen���ַ�*/
char *strreplace(char *dest, char *src, const char *oldstr, const char *newstr, size_t len)
{
	//�Ӵ�λ��ָ��
	char *needle;
	//��ʱ�ڴ���
	char *tmp;

	//�������ȣ���ֱ�ӷ���
	lr_output_message("newStr:%s",newstr);
	if(strcmp(oldstr, newstr)==0)
	{
		return src;
	}

	//��Դ����ַ����ָ��dest������dest��src��ָ��src���ڴ�����
	dest = src;
	//����ҵ��Ӵ�, �����Ӵ�λ����ǰlen���Ӵ���Χ��, ������滻, ����ֱ�ӷ���
	while((needle = (char *) strstr(dest, oldstr)) && (needle -dest <= len))
	{
		//�����µĿռ�: +1 ��Ϊ����Ӵ�β��'\0'������
		tmp=(char*)malloc(strlen(dest)+(strlen(newstr)-strlen(oldstr))+1);
		//��src�ڵ�ǰneedle-dest���ڴ�ռ�����ݣ�������arr
		strncpy(tmp, dest, needle-dest);
		//��ʶ������
		tmp[needle-dest]='\0';
		//����arr��newstr, ����newstr����arrβ��, �Ӷ�����´�(��˵�ַ�����)arr
		strcat(tmp, newstr);
		//��src�� ��oldstr�Ӵ�λ�ú�Ĳ��ֺ�arr������һ������´�arr
		strcat(tmp, needle+strlen(oldstr));
		//����malloc������ڴ棬���Ƹ�ָ��retv
		dest = (char *)strdup(tmp);
		//�ͷ�malloc������ڴ�ռ�
		free(tmp);
	}
	return dest;
}