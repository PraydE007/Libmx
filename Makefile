NAME = libmx.a

HEADERS = libmx.h

FILES = mx_printchar \
	mx_print_unicode \
	mx_printstr \
	mx_strlen \
	mx_printint \
	mx_pow \
	mx_sqrt \
	mx_hex_to_nbr \
	mx_foreach \
	mx_strcmp \
	mx_binary_search \
	mx_strnew \
	mx_strcpy \
	mx_strdup \
	mx_print_strarr \
	mx_itoa \
	mx_nbrlen \
	mx_swap_char \
	mx_str_reverse \
	mx_nbr_to_hex \
	mx_hexstrlen \
	mx_strdel \
	mx_del_strarr \
	mx_get_char_index \
	mx_strndup \
	mx_strncpy \
	mx_strcat \
	mx_strstr \
	mx_get_substr_index \
	mx_count_substr \
	mx_count_words \
	mx_isspace \
	mx_strtrim \
	mx_del_extra_spaces \
	mx_isprint \
	mx_clean_strlen \
	mx_strsplit \
	mx_get_subchar_index \
	mx_strjoin \
	mx_file_to_str \
	mx_strncmp \
	mx_replace_substr \
	mx_replace_strlen \
	mx_memset \
	mx_memcpy \
	mx_memccpy \
	mx_memcmp \
	mx_memchr \
	mx_memrchr \
	mx_memmem \
	mx_memmove \
	mx_realloc \
	mx_create_node \
	mx_push_front \
	mx_push_back \
	mx_pop_front \
	mx_pop_back \
	mx_list_size \
	mx_sort_list \
	mx_quicksort \
	mx_read_line \
	mx_bubble_sort \
	mx_get_arrstr_index \
	mx_atoi \
	mx_arr_size \

INC_H = $(addprefix "inc/", $(HEADERS))

ROOT_C = $(addsuffix ".c", $(FILES))
SRC_C = $(addprefix "src/", $(ROOT_C))

ROOT_O = $(addsuffix ".o", $(FILES))

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean

install:
	@cp $(SRC_C) .
	@cp $(INC_H) .
	@clang $(CFLAGS) $(ROOT_C) -c $(SRCS)
	@rm -rf $(ROOT_C)
	@rm -rf $(HEADERS)
	@mkdir -p obj
	@cp $(ROOT_O) obj/
	@ar -rc $(NAME) $(ROOT_O)
	@rm -rf $(ROOT_O)

uninstall: clean
	@rm -rf $(NAME)

clean:
	@rm -rf obj

reinstall: all 