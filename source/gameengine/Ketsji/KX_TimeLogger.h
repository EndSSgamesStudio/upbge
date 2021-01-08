/*
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 *
 * The Original Code is: all of this file.
 *
 * Contributor(s): none yet.
 *
 * ***** END GPL LICENSE BLOCK *****
 */

/** \file KX_TimeLogger.h
 *  \ingroup ketsji
 */

#pragma once


#ifdef _MSC_VER
#  pragma warning(disable : 4786) /* suppress stl-MSVC debug info warning */
#endif

#include <deque>

/**
 * Stores and manages time measurements.
 */
class KX_TimeLogger {
 public:
  /**
   * Constructor.
   * \param maxNumMesasurements Maximum number of measurements stored (>1).
   */
  KX_TimeLogger(unsigned int maxNumMeasurements = 10);

  /**
   * Destructor.
   */
  ~KX_TimeLogger();

  /**
   * Changes the maximum number of measurements that can be stored.
   */
  void SetMaxNumMeasurements(unsigned int maxNumMeasurements);

  /**
   * Changes the maximum number of measurements that can be stored.
   */
  unsigned int GetMaxNumMeasurements() const;

  /**
   * Starts logging in current measurement.
   * \param now	The current time.
   */
  void StartLog(double now);

  /**
   * End logging in current measurement.
   * \param now	The current time.
   */
  void EndLog(double now);

  /**
   * Logs time in next measurement.
   * \param now	The current time.
   */
  void NextMeasurement(double now);

  /**
   * Returns average of all but the current measurement.
   * \return The average of all but the current measurement.
   */
  double GetAverage() const;

 protected:
  /// Storage for the measurements.
  std::deque<double> m_measurements;

  /// Maximum number of measurements.
  unsigned int m_maxNumMeasurements;

  /// Time at start of logging.
  double m_logStart;

  /// State of logging.
  bool m_logging;
};

