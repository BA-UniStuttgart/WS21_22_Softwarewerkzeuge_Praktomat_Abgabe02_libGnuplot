/*
 * gnuplot.h
 *
 *  Created on: 17.11.2017
 *      Author: student
 */

#ifndef GNUPLOT_H_
#define GNUPLOT_H_

/*
 *
 */

void GnuPlotOpen(char * title,char * filename);
/*
 *
 */

void GnuPlotClose(void);
/*
 *
 */

void GnuPlotValue(float v1, float v2);


#endif /* GNUPLOT_H_ */
