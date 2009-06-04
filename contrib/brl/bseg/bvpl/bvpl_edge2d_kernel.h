// This is//Projects/vxl/src/contrib/brl/bseg/bvpl/bvpl_edge2d_kernel.h
#ifndef bvpl_edge2d_kernel_h_
#define bvpl_edge2d_kernel_h_
//
//:
// \file
// \brief 
//
// \author Isabel Restrepo mir@lems.brown.edu
//
// \date  5/29/09
//
// \verbatim
//  Modifications
//   <none yet>
// \endverbatim

#include "bvpl_kernel_base.h"
#include <vnl/vnl_matrix_fixed.h>
#include <vnl/vnl_rotation_matrix.h>
#include <vnl/vnl_vector_fixed.h>
#include <vcl_iostream.h>



class bvpl_edge2d_kernel : public bvpl_kernel_base 
{

public: 
  //:Default Constructors
  bvpl_edge2d_kernel();

  //:Creates a 2d edge kernel of specified type
  bool create(unsigned height, unsigned width, vnl_vector_fixed<double,3> const& rotations);
  unsigned height() {return height_;}
  unsigned width() {return width_;}
  virtual vcl_string name() {return "edge2d";};
  
private:
 
  unsigned height_;
  unsigned width_;
  static const unsigned max_size_ = 15;
  
};

#endif
  