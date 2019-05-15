#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <conio.h>
#include <ctype.h>

typedef struct
{
 int id;
 int isEmpty;
 char name[51];
 char lastName[51];
 float salary;
 int sector;

}eEmployee;

/** \brief Muestra el menu para los empleados.
 *Devuelve un entero
 *No recibe ningun parametro formal.
 * \return int
 *Retorna un entero.
 */
int menuEmpleyee();
/** \brief Inicializa a los empleados.
 *Devuelve un entero.
 * \param list[] eEmployee Lo que pasa como parametro formal.
 * \param len int Lo que pasa como parametro formal.
 * \return void
 *No rotorna nada.
 */
void initEmployees(eEmployee list[],int len);
/** \brief Busca libre.
 * Devuelve un entero.
 * \param list[] eEmployee Lo que recibe como parametro formal.
 * \param len int Lo que recibe como parametro formal.
 * \return int
 * Retorna un entero.
 */
int searchFree(eEmployee list[],int len);
/** \brief Busca el empleado por el id.
 *Devuelve un entero.
 * \param list[] eEmployee Lo que recibe como parametro formal.
 * \param len int lo que recibe como parametro formal.
 * \param id int Lo que recibe como parametro formal.
 * \return int
 * Retorna un entero.
 */
int findEmployeeById(eEmployee list[],int len,int id);
/** \brief Alt del empleado.
 * No devuelve nada.
 * \param list[] eEmployee lo que recibe como parametro formal.
 * \param len int lo que recibe como parametro formal.
 * \return void
 * No retorna nada
 */
void addEmployee(eEmployee list[],int len);
/** \brief Modificacion del empleado.
 * No devuelve nada.
 * \param list[] eEmployee lo que recibe como parametro formal.
 * \param len int lo que recibe como parametro formal.
 * \return void
 * No retorna nada.
 */
void modificationEmployee(eEmployee list[],int len);
/** \brief Baja del empleado.
 * No devuelve nada.
 * \param list[] eEmployee lo que recibe como parametro formal.
 * \param len int lo que recibe como parametro formal.
 * \return void
 * No retona nada
 */
void removeEmployee(eEmployee list[],int len);
/** \brief muestra un empleado.
 *No devuelve nada.
 * \param list[] eEmployee lo que recibe como parametro formal.
 * \param i int lo que recibe como parametro formal.
 * \return void
 *No retorna nada.
 */
void printEmployee(eEmployee list[],int i);
/** \brief Muestra los empleados.
 * No devuelve nada.
 * \param list[] eEmployee lo que recibe como parametro formal.
 * \param len int lo que recibe como parametro formal.
 * \return void
 *No retorna nada.
 */
void printEmployees(eEmployee list[],int len);
/** \brief Ordena a los empleados por sus apellidos y sus sectores.
 * No devuelve nada.
 * \param list[] eEmployee lo que recibe como parametro formal.
 * \param len int lo que recibe como parametro formal.
 * \return void
 *No retorna nada.
 */
void sortEmployees(eEmployee list[],int len);
