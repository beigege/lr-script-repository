char* guid_gen(){                         //生成GUID方法
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
	// 定义输出格式
	//sprintf (buf, "{%08lX-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}", // 大写
	//sprintf (buf, "{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",// 小写
	sprintf (buf, "%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",// 小写%08lx-%04x%04x-%02x%02x%02x%02x-%02x%02x%02x%02x
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

// 字符串替换函数.
// 能替换所有的要替换的字符串,被替换的字符串和替换的字符串不一定一样长.
// pInput - 输入字符串.
// pOutput - 输出字符串, 要保证足够的空间可以存储替换后的字符串.
// pSrc - 要被替换的子字符串, 比如%user%
// pDst - 要替换成的字符串, 比如user1
// 注意:以上的字符串均要以'\0'结尾.
//
void Substitute(char *pInput, char *pOutput, char *pSrc, char *pDst)
{
    char    *pi, *po, *p;
    int     nSrcLen, nDstLen, nLen;

    // 指向输入字符串的游动指针.
    pi = pInput;    
    // 指向输出字符串的游动指针.
    po = pOutput;
    // 计算被替换串和替换串的长度.
    nSrcLen = strlen(pSrc);
    nDstLen = strlen(pDst);
 
    // 查找pi指向字符串中第一次出现替换串的位置,并返回指针(找不到则返回null).   
    p = (char*)strstr(pi, pSrc);
    if(p)
    {
        // 找到.
        while(p)
        {
            // 计算被替换串前边字符串的长度.
            nLen = (int)(p - pi);
            // 复制到输出字符串.
            memcpy(po, pi, nLen);
            memcpy(po + nLen, pDst, nDstLen);
            // 跳过被替换串.
            pi = p + nSrcLen;
            // 调整指向输出串的指针位置.
            po = po + nLen + nDstLen;
            // 继续查找.
            p = (char*)strstr(pi, pSrc);
        }
        // 复制剩余字符串.
        strcpy(po, pi);
    }
    else
    {
        // 没有找到则原样复制.
        strcpy(po, pi);
    }
}

/* @param char* dest 目标串，也就是替换后的新串
* @param const char* src 源字符串，被替换的字符串
* @param const char* oldstr 旧的子串，将被替换的子串
* @param const char* newstr 新的子串
* @param int len 将要被替换的前len个字符*/
char *strreplace(char *dest, char *src, const char *oldstr, const char *newstr, size_t len)
{
	//子串位置指针
	char *needle;
	//临时内存区
	char *tmp;

	//如果串相等，则直接返回
	lr_output_message("newStr:%s",newstr);
	if(strcmp(oldstr, newstr)==0)
	{
		return src;
	}

	//把源串地址赋给指针dest，即让dest和src都指向src的内存区域
	dest = src;
	//如果找到子串, 并且子串位置在前len个子串范围内, 则进行替换, 否则直接返回
	while((needle = (char *) strstr(dest, oldstr)) && (needle -dest <= len))
	{
		//分配新的空间: +1 是为了添加串尾的'\0'结束符
		tmp=(char*)malloc(strlen(dest)+(strlen(newstr)-strlen(oldstr))+1);
		//把src内的前needle-dest个内存空间的数据，拷贝到arr
		strncpy(tmp, dest, needle-dest);
		//标识串结束
		tmp[needle-dest]='\0';
		//连接arr和newstr, 即把newstr附在arr尾部, 从而组成新串(或说字符数组)arr
		strcat(tmp, newstr);
		//把src中 从oldstr子串位置后的部分和arr连接在一起，组成新串arr
		strcat(tmp, needle+strlen(oldstr));
		//把用malloc分配的内存，复制给指针retv
		dest = (char *)strdup(tmp);
		//释放malloc分配的内存空间
		free(tmp);
	}
	return dest;
}