/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:46:36 by vfuster-          #+#    #+#             */
/*   Updated: 2023/07/19 13:05:33 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{

}

#include <stdio.h>
#include <string.h>

size_t ft_strcspn(const char *s, const char *reject);

int main(void)
{
    char str1[] = "Hello world";
    char str2[] = "Hello";
    char str3[] = "world";
    char str4[] = "12345";
    char str5[] = "67890";
    char str6[] = "1234567890";
    char reject1[] = " ";
    char reject2[] = "lo";
    char reject3[] = "789";

    printf("ft_strcspn: %zu\n", ft_strcspn(str1, reject1));
    printf("strcspn: %zu\n", strcspn(str1, reject1));

    printf("ft_strcspn: %zu\n", ft_strcspn(str1, reject2));
    printf("strcspn: %zu\n", strcspn(str1, reject2));

    printf("ft_strcspn: %zu\n", ft_strcspn(str1, reject3));
    printf("strcspn: %zu\n", strcspn(str1, reject3));

    printf("ft_strcspn: %zu\n", ft_strcspn(str2, str3));
    printf("strcspn: %zu\n", strcspn(str2, str3));

    printf("ft_strcspn: %zu\n", ft_strcspn(str4, str5));
    printf("strcspn: %zu\n", strcspn(str4, str5));

    printf("ft_strcspn: %zu\n", ft_strcspn(str6, reject3));
    printf("strcspn: %zu\n", strcspn(str6, reject3));

    return 0;
}
