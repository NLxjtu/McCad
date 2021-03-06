// File generated by CPPExt (Value)
//
//                     Copyright (C) 1991 - 2000 by
//                      Matra Datavision SA.  All rights reserved.
//
//                     Copyright (C) 2001 - 2004 by
//                     Open CASCADE SA.  All rights reserved.
//
// This file is part of the Open CASCADE Technology software.
//
// This software may be distributed and/or modified under the terms and
// conditions of the Open CASCADE Public License as defined by Open CASCADE SA
// and appearing in the file LICENSE included in the packaging of this file.
//
// This software is distributed on an "AS IS" basis, without warranty of any
// kind, and Open CASCADE SA hereby disclaims all such warranties,
// including without limitation, any warranties of merchantability, fitness
// for a particular purpose or non-infringement. Please see the License for
// the specific terms and conditions governing rights and limitations under the
// License.

#ifndef _McCadDiscretization_Face_HeaderFile
#define _McCadDiscretization_Face_HeaderFile

#ifndef _McCadDiscDs_DiscFace_HeaderFile
#include <McCadDiscDs_DiscFace.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class McCadDiscDs_DiscFace;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

//! \brief Algorithm to discretize a TopoDS_Face


class McCadDiscretization_Face  {

public:

    void* operator new(size_t,void* anAddress)
      {
        return anAddress;
      }
    void* operator new(size_t size)
      {
        return Standard::Allocate(size);
      }
    void  operator delete(void *anAddress)
      {
        if (anAddress) Standard::Free((Standard_Address&)anAddress);
      }
 // Methods PUBLIC
 //

//! face Discretization  class <br>
//!  method implementation <br>
Standard_EXPORT McCadDiscretization_Face();


Standard_EXPORT McCadDiscretization_Face(McCadDiscDs_DiscFace& theDsFace);


Standard_EXPORT   void Init() ;


Standard_EXPORT   void SetFace(McCadDiscDs_DiscFace& theDsFace) ;


Standard_EXPORT   McCadDiscDs_DiscFace GetFace() const;


Standard_EXPORT   Standard_Boolean IsDone() const;


Standard_EXPORT   void SetMinNbPnt(const Standard_Integer theNumb) ;


Standard_EXPORT   Standard_Integer GetMinNbPnt() const;


Standard_EXPORT   void SetMaxNbPnt(const Standard_Integer theNumb) ;


Standard_EXPORT   Standard_Integer GetMaxNbPnt() const;


Standard_EXPORT   void SetXresolution(const Standard_Real theXlen) ;


Standard_EXPORT   Standard_Real GetXresolution() const;


Standard_EXPORT   void SetYresolution(const Standard_Real theYlen) ;


Standard_EXPORT   Standard_Real GetYresolution() const;


Standard_EXPORT   void SetTolerance(const Standard_Real theTol) ;


Standard_EXPORT   Standard_Real GetTolerance() const;





protected:

 // Methods PROTECTED
 //


 // Fields PROTECTED
 //


private:

 // Methods PRIVATE
 //


 // Fields PRIVATE
 //
McCadDiscDs_DiscFace myDiscFace;
Standard_Integer myMaxNbPnt;
Standard_Integer myMinNbPnt;
Standard_Real myXlen;
Standard_Real myYlen;
Standard_Real myRlen;
Standard_Real myTolerance;
Standard_Boolean myIsDone;


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
