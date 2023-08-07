FLAGS=-Wall -Werror -Wextra -std=c11
COVERAGE=

all: clean s21_string.a
deafult: all
s21_string.o:
	gcc $(FLAGS) -c s21_string.c
s21_sprintf.o:
	gcc $(FLAGS) -c s21_sprintf.c
s21_string.a: s21_string.o s21_sprintf.o
	ar cr s21_string.a s21_string.o s21_sprintf.o
clean:
	rm -rf *.a *.o *.out *.html *.css *.gcno *.gcov *.gcda s21_test
test: clean
	gcc $(FLAGS) $(COVERAGE) -o s21_test s21_test.c tests/test* s21_string.c s21_sprintf.c -lcheck
add_coverage_flag:
	$(eval FLAGS += --coverage)
gcov_report: add_coverage_flag test
	./s21_test
	lcov -t "stest" -o s21_test.info -c -d .
	genhtml -o report s21_test.info

