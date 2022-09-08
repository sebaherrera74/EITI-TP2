/* All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef ALUMNO_H   /*! @cond    */
#define ALUMNO_H   /*! @endcond */

/** @file alumno.h
 **
 ** @brief Achivos de cabecera 
 **
 ** 
 ** | RV | YYYY.MM.DD | Autor       | Descripción de los cambios              |
 ** |----|------------|-------------|-----------------------------------------|
 ** |  1 | 2022.08.27 | sherrera    | Version inicial del archivo             |
 ** 
 ** @defgroup 
 ** @brief 
 ** @{ 
 */

/* === Inclusiones de archivos externos ==================================== */

/* === Cabecera C++ ======================================================== */
#ifdef __cplusplus
extern "C" {
#endif

/* === Definicion y Macros publicos ======================================== */

/* == Declaraciones de tipos de datos publicos ============================= */
struct alumno_s {
    char apellido[25];
     char nombres[25];
    char dni[20];
};

/* === Declaraciones de variables publicas ================================= */
struct alumno_s alumno;

/* === Declaraciones de funciones publicas ================================= */
void nombre(const struct alumno_s * alumno);
/* === Ciere de documentacion ============================================== */
#ifdef __cplusplus
}
#endif

/** @} Final de la definición del modulo para doxygen */

#endif   /* ALUMNO_H */
