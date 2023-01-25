/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "tests.check" instead.
 */

#include <check.h>
#include "s21_viewer.h"

START_TEST(testparser) {
        char *file = "source_code/obj/easyCube.obj";
        obj_t obj;
        StartPars(file, &obj);
        int facets_count_test = 72;
        int vertex_count_test = 27;
        int facet_line_test = 12;
        int arr_of_facets_test[72] = {0, 6, 6, 4, 4,0,0,2,2,6,6,0,0,3,3,
                                      2,2,0,0,1,1,3,3,0,2,7,7,6,6,2,2,3,3,
                                      7,7,2,4,6,6,7,7,4,4,7,7,5,5,4,
                                      0,4,4,5,5,0,0,5,5,1,1,0,1,5,5,7,7,1,1,7,
                                      7,3,3,1};
        double arr_of_vertexes_test[27] = {
            0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0,
                    0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 9.0, 9.0, 1.0};
        ck_assert_int_eq(facets_count_test, obj.facet_elem);
        ck_assert_int_eq(vertex_count_test, obj.count_of_vertexes*3);
        ck_assert_int_eq(facet_line_test, obj.count_of_facets);
        for (int i = 0; i < facets_count_test; i++) {
            ck_assert_int_eq(arr_of_facets_test[i], obj.polygons[i]);
        }
        for (int i = 0; i < vertex_count_test; i++) {
            ck_assert_int_eq(arr_of_vertexes_test[i], obj.vertexes[i]);
        }

}
END_TEST

int main(void) {
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, testparser);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}