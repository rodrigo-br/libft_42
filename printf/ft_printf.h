/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 20:14:45 by ralves-b          #+#    #+#             */
/*   Updated: 2022/07/14 18:12:49 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*--------------------------------------------------------------------------\
|					LIBRARY INCLUDES										|
\--------------------------------------------------------------------------*/
# include "../libft/libft.h"
# include "ft_printf.h"
# include <unistd.h>
# include <stdarg.h>

/*--------------------------------------------------------------------------\
|					TYPEDEF DECLARATIONS									|
\--------------------------------------------------------------------------*/
typedef enum e_bool
{
	FALSE,
	TRUE,
}	t_bool;

typedef struct s_flags
{
	int		precision_value;
	int		width_value;
	t_bool	bool_minus;
	t_bool	bool_space;
	t_bool	bool_zero;
	t_bool	bool_hash;
	t_bool	bool_plus;
	t_bool	bool_dot;
	t_bool	bool_end;
	t_bool	null;
	char	spcf;
}	t_flags;

typedef struct s_str
{
	int				size;
	char			*s;
	char			*temp;
}	t_str;

/*--------------------------------------------------------------------------\
|					NEW LIBFT FUNCTIONS										|
\--------------------------------------------------------------------------*/
char				*ft_strtilchr(const char *s, int c);
int					ft_printf(const char *format, ...);
char				*ft_uitohex(unsigned long int nb);
char				*ft_itohex(unsigned int nb);
char				*ft_uitoa(unsigned int n);
char				*ft_strtoupper(char *s);
unsigned long int	ft_ptoi(void *pointer);
/*--------------------------------------------------------------------------\
|					PRINTFT AUX FUNCTIONS									|
\--------------------------------------------------------------------------*/
t_bool				ft_isformat(char c, t_bool *width, const char *format);
t_flags				ft_init_flags(const char *format_parsed);
/*--------------------------------------------------------------------------\
|					SPECIFIERS HANDLERS										|
\--------------------------------------------------------------------------*/
t_str				handle_unsigned(va_list args, int *count, t_flags *flags);
t_str				handle_char(va_list args, int *count, t_flags *flags);
t_str				handle_str(va_list args, int *count, t_flags *flags);
t_str				handle_ptr(va_list args, int *count, t_flags *flags);
t_str				handle_hex(va_list args, int *count, t_flags *flags);
t_str				handle_n(va_list args, int *count, t_flags *flags);
t_str				handle_ph(int *count);
/*--------------------------------------------------------------------------\
|					FLAGS HANDLERS											|
\--------------------------------------------------------------------------*/
void				handle_minus_n_spac(t_str *str, t_flags *flags, int *count);
void				check_flags(t_str *str, t_flags flags, int *count);
void				handle_dot(t_str *str, t_flags *flags, int *count);
void				handle_zero(t_str *str, t_flags *flags);

#endif
