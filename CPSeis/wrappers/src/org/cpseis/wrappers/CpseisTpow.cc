//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisTpow.hh"

//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//

#if NEED_UNDERSCORE
#define tpow_wrap_create             tpow_wrap_create_
#define tpow_wrap_delete             tpow_wrap_delete_
#define tpow_wrap_update             tpow_wrap_update_
#define tpow_wrap_wrapup             tpow_wrap_wrapup_
#define tpow_wrap_oneset             tpow_wrap_oneset_
#define tpow_wrap_twosets            tpow_wrap_twosets_
#elif NEED_CAPITALS
#define tpow_wrap_create             TPOW_WRAP_CREATE
#define tpow_wrap_delete             TPOW_WRAP_DELETE
#define tpow_wrap_update             TPOW_WRAP_UPDATE
#define tpow_wrap_wrapup             TPOW_WRAP_WRAPUP
#define tpow_wrap_oneset             TPOW_WRAP_ONESET
#define tpow_wrap_twosets            TPOW_WRAP_TWOSETS
#endif

//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//

extern "C"
    {
    CpseisBase::ModuleCreate   tpow_wrap_create;
    CpseisBase::ModuleDestroy  tpow_wrap_delete;
    CpseisBase::ModuleUpdate   tpow_wrap_update;
    CpseisBase::ModuleWrapup   tpow_wrap_wrapup;
    CpseisBase::ModuleOneset   tpow_wrap_oneset;
    CpseisBase::ModuleTwosets  tpow_wrap_twosets;
    }

//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//

CpseisTpow::CpseisTpow() : CpseisBase ("TPOW",
                                       tpow_wrap_create,
                                       tpow_wrap_delete,
                                       tpow_wrap_update,
                                       tpow_wrap_wrapup,
                                       tpow_wrap_oneset,
                                       tpow_wrap_twosets) {}

//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//