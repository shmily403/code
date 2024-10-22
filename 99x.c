/* 
 * Copyright (c) 2024 白忠建 电子科技大学信息与软件工程学院
 * C语言程序示例 is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2. 
 * You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2 
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PSL v2 for more details. 
 */

/**
 * @file 99x.c
 * @author 白忠建 ^_^ (baizj@uestc.edu.cn)
 * @brief 循环嵌套：打印九九乘法表
 * @version 1.0
 * @date 2024-10-21
 * 
 * @copyright Copyright (C) 2024 白忠建. All rights reserved.
 * 
 */

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 9; ++i) {
        for (j = 1; j <= 9; ++j) {
            printf("%dx%d=%2d  ", i, j, i * j);
        }
        putchar('\n');
    }    
    return 0;
}