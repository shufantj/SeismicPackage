//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisHsyn.hh"

//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//

#if NEED_UNDERSCORE
#define hsyn_wrap_create             hsyn_wrap_create_
#define hsyn_wrap_delete             hsyn_wrap_delete_
#define hsyn_wrap_update             hsyn_wrap_update_
#define hsyn_wrap_wrapup             hsyn_wrap_wrapup_
#define hsyn_wrap_oneset             hsyn_wrap_oneset_
#define hsyn_wrap_twosets            hsyn_wrap_twosets_
#elif NEED_CAPITALS
#define hsyn_wrap_create             HSYN_WRAP_CREATE
#define hsyn_wrap_delete             HSYN_WRAP_DELETE
#define hsyn_wrap_update             HSYN_WRAP_UPDATE
#define hsyn_wrap_wrapup             HSYN_WRAP_WRAPUP
#define hsyn_wrap_oneset             HSYN_WRAP_ONESET
#define hsyn_wrap_twosets            HSYN_WRAP_TWOSETS
#endif

//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//

extern "C"
    {
    CpseisBase::ModuleCreate   hsyn_wrap_create;
    CpseisBase::ModuleDestroy  hsyn_wrap_delete;
    CpseisBase::ModuleUpdate   hsyn_wrap_update;
    CpseisBase::ModuleWrapup   hsyn_wrap_wrapup;
    CpseisBase::ModuleOneset   hsyn_wrap_oneset;
    CpseisBase::ModuleTwosets  hsyn_wrap_twosets;
    }

//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//

CpseisHsyn::CpseisHsyn() : CpseisBase ("HSYN",
                                       hsyn_wrap_create,
                                       hsyn_wrap_delete,
                                       hsyn_wrap_update,
                                       hsyn_wrap_wrapup,
                                       hsyn_wrap_oneset,
                                       hsyn_wrap_twosets) {}

//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
