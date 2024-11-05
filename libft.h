/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtran <jtran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:32:05 by jtran             #+#    #+#             */
/*   Updated: 2024/10/31 15:39:14 by jtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int	ft_atoi(char *str);
void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t n, size_t size);
int	ft_isalnum(char c);
int	ft_isalpha(char c);
int	ft_isascii(char c);
int	ft_isdigit(char c);
int	ft_isprint(char c);
char	*ft_itoa(int n);
void	*ft_memchr(void *ptr, int c, size_t n);
int	ft_memcmp(void *ptr1, void *ptr2, size_t n);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char *str, char *charset);
char	*ft_strchr(char *str, int search_str);
int	ft_strcmp(char *s1, char *s2);
char	*ft_strdup(const char *str);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlcat(char *dest, char *src, size_t n);
size_t	ft_strlcpy(char *dest, char *src, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int	ft_strncmp(char *s1, char *s2, int n);
char	*ft_strnstr(char *str, char *search, int n);
char	*ft_strrchr(char *str, int chr);
char	*ft_strtrim(const char *str, const char *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	ft_tolower(char c);
char	ft_toupper(char c);

#endif
