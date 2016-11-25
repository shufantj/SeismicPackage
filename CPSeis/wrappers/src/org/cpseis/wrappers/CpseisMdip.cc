//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisMdip.hh"

//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//

#if NEED_UNDERSCORE
#define mdip_wrap_create             mdip_wrap_create_
#define mdip_wrap_delete             mdip_wrap_delete_
#define mdip_wrap_update             mdip_wrap_update_
#define mdip_wrap_wrapup             mdip_wrap_wrapup_
#define mdip_wrap_oneset             mdip_wrap_oneset_
#define mdip_wrap_twosets            mdip_wrap_twosets_
#elif NEED_CAPITALS
#define mdip_wrap_create             MDIP_WRAP_CREATE
#define mdip_wrap_delete             MDIP_WRAP_DELETE
#define mdip_wrap_update             MDIP_WRAP_UPDATE
#define mdip_wrap_wrapup             MDIP_WRAP_WRAPUP
#define mdip_wrap_oneset             MDIP_WRAP_ONESET
#define mdip_wrap_twosets            MDIP_WRAP_TWOSETS
#endif

//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//

extern "C"
    {
    CpseisBase::ModuleCreate   mdip_wrap_create;
    CpseisBase::ModuleDestroy  mdip_wrap_delete;
    CpseisBase::ModuleUpdate   mdip_wrap_update;
    CpseisBase::ModuleWrapup   mdip_wrap_wrapup;
    CpseisBase::ModuleOneset   mdip_wrap_oneset;
    CpseisBase::ModuleTwosets  mdip_wrap_twosets;
    }

//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//

CpseisMdip::CpseisMdip() : CpseisBase ("MDIP",
                                       mdip_wrap_create,
                                       mdip_wrap_delete,
                                       mdip_wrap_update,
                                       mdip_wrap_wrapup,
                                       mdip_wrap_oneset,
                                       mdip_wrap_twosets) {}

//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//