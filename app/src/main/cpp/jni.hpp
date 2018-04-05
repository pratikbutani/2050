#ifndef INC_2050_JNI_HPP
#define INC_2050_JNI_HPP

#include <jni.h>

void game_over(int score, bool new_high_score);
void game_win(int score, bool new_high_score);
std::string get_res_string(const std::string & id);

#endif //INC_2050_JNI_HPP
