/* -*- c++ -*- */
/* 
 * Copyright 2013,2014,2015 <Bogdan Diaconescu, yo3iiu@yo3iiu.ro>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_DVBT_INNER_CODER_H
#define INCLUDED_DVBT_INNER_CODER_H

#include <dvbt/api.h>
#include <gnuradio/block.h>
#include <dvbt/dvbt_config.h>

namespace gr {
  namespace dvbt {

    /*!
     * \brief Inner coder with Puncturing.
     * \ingroup dvbt
     *
     */
    class DVBT_API inner_coder : virtual public block
    {
    public:
       typedef boost::shared_ptr<inner_coder> sptr;

       /*!
        * \brief Return a shared_ptr to a new instance of dvbt::inner_coder.
        *
        * To avoid accidental use of raw pointers, dvbt::inner_coder's
        * constructor is in a private implementation
        * class. dvbt::inner_coder::make is the public interface for
        * creating new instances.
        */
       static sptr make(int ninput, int noutput, dvbt_constellation_t constellation, \
        dvbt_hierarchy_t hierarchy, dvbt_code_rate_t coderate);
    };

  } // namespace dvbt
} // namespace gr

#endif /* INCLUDED_DVBT_INNER_CODER_H */

