#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

int		ft_strlen(char *s);
char	*ft_strcpy(char *s, char *d);
int		ft_strcmp(char *s, char *s1);
size_t	ft_write(int fd, const void *buf, size_t count);
size_t ft_read(int fd, void *buf, size_t count);
char	*ft_strdup(const char *s);
int		main(void)
{	
	char *s;
	s = "Hello World";
	char *s2;
	char *s3;
	char *s4;
	char *s5;
	s5 = "123456789";
	s2 = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	printf("%s\n", "____________strcpy____________");
	s2 = ft_strcpy(s2, s5);
	printf("'%s''%s' \n", s5, s2);
	s2 = ft_strcpy(s2, s);
	printf("'%s''%s' \n", s, s2);
	printf("%s\n", "____________strlen____________");
	printf("LEN:S2=%d S=%d\n", ft_strlen(s2), ft_strlen(s));
	printf("LEN:S5=%d\n", ft_strlen(s5));
	printf("%s\n", "____________strrcmp____________");
	printf("MOYA %d \n", ft_strcmp("","1"));
	printf("ORIG %d \n", strcmp("", "1"));
	printf("MOYA %d \n", ft_strcmp("1",""));
	printf("ORIG %d \n", strcmp("1", ""));
	printf("MOYA %d \n", ft_strcmp(s, s2));
	printf("ORIG %d \n", strcmp(s, s2));
	printf("%s\n", "____________write____________");
	printf("MOYA: %zd\n", ft_write(1, "444\n", 4));
	printf("ORIG: %zd\n", write(1, "444\n", 4));
	printf("MOYA: %zd, strerror: '%s'\n", ft_write(-1, "444\n", 4), strerror(errno));
	printf("ORIG: %zd, strerror: '%s'\n", write(-1, "444\n", 4), strerror(errno));
	printf("%s\n", "____________read____________");
	char buf[100];
	printf("%zd\n", ft_read(0, buf, 1));
	//printf("%zd\n", read(0, buf, 1));
	printf("%s\n", "____________strdup____________");
	s3 = ft_strdup(s);
	s4 = "Data";
	printf("'%s' '%s'\n", s3, s);
	printf("S3 ='%p' S ='%p'\n", s3, s);
	printf("'%s' '%s'\n", ft_strdup(s4), s4);
	printf("S4 ='%p' S ='%p'\n", ft_strdup(s4), s4);
	printf("'%s' '%s'\n", ft_strdup(s4), s4);
	printf("S5 ='%p' S ='%p'\n", ft_strdup(s4), s4);
	free(s3);
	free(s2);
}