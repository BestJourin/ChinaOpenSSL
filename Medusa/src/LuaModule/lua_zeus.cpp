/*
** Lua binding: zeus
** Generated automatically by tolua++-1.0.92 on Sun May 23 23:22:35 2021.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_zeus_open (lua_State* tolua_S);

#include <iostream>
#include <iomanip>
#include <cmath>
#include <geometry.h>
#include "Global.h"
#include <geometry.h>
#include "WorldDefine.h"
#include "OptionModule.h"
#include "VisionModule.h"
#include <singleton.h>
#include "WorldModel.h"
#include "staticparams.h"
#include <WorldDefine.h>
#include <PlayerCommand.h>
#include "BallPredictor.h"
#include "RobotPredictor.h"
#include <game_state.h>
#include <ServerInterface.h>
#include <OptionModule.h>
#include "utils.h"
#include <VisionModule.h>
#include <singleton.h>
#include <geometry.h>
#include <queue>
#include "GDebugEngine.h"
#include "staticparams.h"
#include <singleton.h>
#include "KickStatus.h"
#include <singleton.h>
#include <geometry.h>
#include "staticparams.h"
#include <skill/PlayerTask.h>
#include "utils.h"
#include "TaskMediator.h"
#include "referee_commands.h"
#include "game_state.h"
#include "staticparams.h"
#include <geometry.h>
#include <singleton.h>
#include <DribbleStatus.h>
#include <geometry.h>
#include "staticparams.h"
#include "rolematch/munkres.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_CVector (lua_State* tolua_S)
{
 CVector* self = (CVector*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_PlayerPoseT (lua_State* tolua_S)
{
 PlayerPoseT* self = (PlayerPoseT*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_CGeoLineRectangleIntersection (lua_State* tolua_S)
{
 CGeoLineRectangleIntersection* self = (CGeoLineRectangleIntersection*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_CGeoLine (lua_State* tolua_S)
{
 CGeoLine* self = (CGeoLine*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_CGeoSegment (lua_State* tolua_S)
{
 CGeoSegment* self = (CGeoSegment*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_CKickStatus (lua_State* tolua_S)
{
 CKickStatus* self = (CKickStatus*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_CVisionModule (lua_State* tolua_S)
{
 CVisionModule* self = (CVisionModule*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Munkres (lua_State* tolua_S)
{
 Munkres* self = (Munkres*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Matrix_double_ (lua_State* tolua_S)
{
 Matrix<double>* self = (Matrix<double>*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_CGeoPoint (lua_State* tolua_S)
{
 CGeoPoint* self = (CGeoPoint*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_GameState (lua_State* tolua_S)
{
 GameState* self = (GameState*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_ObjectPoseT (lua_State* tolua_S)
{
 ObjectPoseT* self = (ObjectPoseT*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_CDribbleStatus (lua_State* tolua_S)
{
 CDribbleStatus* self = (CDribbleStatus*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_CTaskMediator (lua_State* tolua_S)
{
 CTaskMediator* self = (CTaskMediator*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_CGeoLineLineIntersection (lua_State* tolua_S)
{
 CGeoLineLineIntersection* self = (CGeoLineLineIntersection*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_CGDebugEngine (lua_State* tolua_S)
{
 CGDebugEngine* self = (CGDebugEngine*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_CWorldModel (lua_State* tolua_S)
{
 CWorldModel* self = (CWorldModel*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_CGeoRectangle (lua_State* tolua_S)
{
 CGeoRectangle* self = (CGeoRectangle*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"PlayerTypeT");
 tolua_usertype(tolua_S,"Munkres");
 tolua_usertype(tolua_S,"CVector");
 tolua_usertype(tolua_S,"PlayerCapabilityT");
 tolua_usertype(tolua_S,"Matrix<double>");
 tolua_usertype(tolua_S,"RobotRawVisionData");
 tolua_usertype(tolua_S,"PlayerPoseT");
 tolua_usertype(tolua_S,"CGeoLineRectangleIntersection");
 tolua_usertype(tolua_S,"CGeoLine");
 tolua_usertype(tolua_S,"CGeoSegment");
 tolua_usertype(tolua_S,"CPlayerCommand");
 tolua_usertype(tolua_S,"PlayerVisionT");
 tolua_usertype(tolua_S,"CPlayerTask");
 tolua_usertype(tolua_S,"CKickStatus");
 tolua_usertype(tolua_S,"CVisionModule");
 tolua_usertype(tolua_S,"CTaskMediator");
 tolua_usertype(tolua_S,"CGDebugEngine");
 tolua_usertype(tolua_S,"CGeoPoint");
 tolua_usertype(tolua_S,"GameState");
 tolua_usertype(tolua_S,"ObjectPoseT");
 tolua_usertype(tolua_S,"CDribbleStatus");
 tolua_usertype(tolua_S,"MobileVisionT");
 tolua_usertype(tolua_S,"CGeoLineLineIntersection");
 tolua_usertype(tolua_S,"VisionObjectT");
 tolua_usertype(tolua_S,"CWorldModel");
 tolua_usertype(tolua_S,"CGeoRectangle");
}

/* method: new of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector_new00
static int tolua_zeus_CVector_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CVector* tolua_ret = (CVector*)  Mtolua_new((CVector)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CVector");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector_new00_local
static int tolua_zeus_CVector_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CVector* tolua_ret = (CVector*)  Mtolua_new((CVector)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector_delete00
static int tolua_zeus_CVector_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CVector* self = (CVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector_new01
static int tolua_zeus_CVector_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CVector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double tolua_var_1 = ((double)  tolua_tonumber(tolua_S,2,0));
  double tolua_var_2 = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   CVector* tolua_ret = (CVector*)  Mtolua_new((CVector)(tolua_var_1,tolua_var_2));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CVector");
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CVector_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector_new01_local
static int tolua_zeus_CVector_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CVector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double tolua_var_1 = ((double)  tolua_tonumber(tolua_S,2,0));
  double tolua_var_2 = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   CVector* tolua_ret = (CVector*)  Mtolua_new((CVector)(tolua_var_1,tolua_var_2));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CVector_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector_new02
static int tolua_zeus_CVector_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CVector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CVector* tolua_var_3 = ((const CVector*)  tolua_tousertype(tolua_S,2,0));
  {
   CVector* tolua_ret = (CVector*)  Mtolua_new((CVector)(*tolua_var_3));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CVector");
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CVector_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector_new02_local
static int tolua_zeus_CVector_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CVector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CVector* tolua_var_3 = ((const CVector*)  tolua_tousertype(tolua_S,2,0));
  {
   CVector* tolua_ret = (CVector*)  Mtolua_new((CVector)(*tolua_var_3));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CVector_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: mod of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector_mod00
static int tolua_zeus_CVector_mod00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVector* self = (const CVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'mod'", NULL);
#endif
  {
   double tolua_ret = (double)  self->mod();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'mod'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: mod2 of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector_mod200
static int tolua_zeus_CVector_mod200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVector* self = (const CVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'mod2'", NULL);
#endif
  {
   double tolua_ret = (double)  self->mod2();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'mod2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dir of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector_dir00
static int tolua_zeus_CVector_dir00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVector* self = (const CVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dir'", NULL);
#endif
  {
   double tolua_ret = (double)  self->dir();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dir'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: x of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector_x00
static int tolua_zeus_CVector_x00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVector* self = (const CVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'x'", NULL);
#endif
  {
   double tolua_ret = (double)  self->x();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'x'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: y of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector_y00
static int tolua_zeus_CVector_y00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVector* self = (const CVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'y'", NULL);
#endif
  {
   double tolua_ret = (double)  self->y();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'y'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: value of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector_value00
static int tolua_zeus_CVector_value00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVector* self = (const CVector*)  tolua_tousertype(tolua_S,1,0);
  double tolua_var_4 = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'value'", NULL);
#endif
  {
   double tolua_ret = (double)  self->value(tolua_var_4);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'value'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector__add00
static int tolua_zeus_CVector__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVector* self = (const CVector*)  tolua_tousertype(tolua_S,1,0);
  const CVector* tolua_var_5 = ((const CVector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   CVector tolua_ret = (CVector)  self->operator+(*tolua_var_5);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CVector));
     tolua_pushusertype(tolua_S,tolua_obj,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector__sub00
static int tolua_zeus_CVector__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVector* self = (const CVector*)  tolua_tousertype(tolua_S,1,0);
  const CVector* tolua_var_6 = ((const CVector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   CVector tolua_ret = (CVector)  self->operator-(*tolua_var_6);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CVector));
     tolua_pushusertype(tolua_S,tolua_obj,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector__mul00
static int tolua_zeus_CVector__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVector* self = (const CVector*)  tolua_tousertype(tolua_S,1,0);
  double tolua_var_7 = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   CVector tolua_ret = (CVector)  self->operator*(tolua_var_7);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CVector));
     tolua_pushusertype(tolua_S,tolua_obj,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector__div00
static int tolua_zeus_CVector__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVector* self = (const CVector*)  tolua_tousertype(tolua_S,1,0);
  double tolua_var_8 = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   CVector tolua_ret = (CVector)  self->operator/(tolua_var_8);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CVector));
     tolua_pushusertype(tolua_S,tolua_obj,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector__sub01
static int tolua_zeus_CVector__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CVector* self = (const CVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   CVector tolua_ret = (CVector)  self->operator-();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CVector));
     tolua_pushusertype(tolua_S,tolua_obj,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CVector__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: rotate of class  CVector */
#ifndef TOLUA_DISABLE_tolua_zeus_CVector_rotate00
static int tolua_zeus_CVector_rotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVector* self = (const CVector*)  tolua_tousertype(tolua_S,1,0);
  double tolua_var_9 = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'rotate'", NULL);
#endif
  {
   CVector tolua_ret = (CVector)  self->rotate(tolua_var_9);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CVector));
     tolua_pushusertype(tolua_S,tolua_obj,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGeoPoint */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoPoint_new00
static int tolua_zeus_CGeoPoint_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGeoPoint* tolua_ret = (CGeoPoint*)  Mtolua_new((CGeoPoint)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGeoPoint */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoPoint_new00_local
static int tolua_zeus_CGeoPoint_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGeoPoint* tolua_ret = (CGeoPoint*)  Mtolua_new((CGeoPoint)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CGeoPoint */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoPoint_delete00
static int tolua_zeus_CGeoPoint_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGeoPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGeoPoint* self = (CGeoPoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGeoPoint */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoPoint_new01
static int tolua_zeus_CGeoPoint_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoPoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   CGeoPoint* tolua_ret = (CGeoPoint*)  Mtolua_new((CGeoPoint)(x,y));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoPoint");
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CGeoPoint_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGeoPoint */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoPoint_new01_local
static int tolua_zeus_CGeoPoint_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoPoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   CGeoPoint* tolua_ret = (CGeoPoint*)  Mtolua_new((CGeoPoint)(x,y));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CGeoPoint_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGeoPoint */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoPoint_new02
static int tolua_zeus_CGeoPoint_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoPoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
  {
   CGeoPoint* tolua_ret = (CGeoPoint*)  Mtolua_new((CGeoPoint)(*p));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoPoint");
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CGeoPoint_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGeoPoint */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoPoint_new02_local
static int tolua_zeus_CGeoPoint_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoPoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
  {
   CGeoPoint* tolua_ret = (CGeoPoint*)  Mtolua_new((CGeoPoint)(*p));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CGeoPoint_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  CGeoPoint */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoPoint__eq00
static int tolua_zeus_CGeoPoint__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGeoPoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGeoPoint* self = (CGeoPoint*)  tolua_tousertype(tolua_S,1,0);
  const CGeoPoint* rhs = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*rhs);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: x of class  CGeoPoint */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoPoint_x00
static int tolua_zeus_CGeoPoint_x00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGeoPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoPoint* self = (const CGeoPoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'x'", NULL);
#endif
  {
   double tolua_ret = (double)  self->x();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'x'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: y of class  CGeoPoint */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoPoint_y00
static int tolua_zeus_CGeoPoint_y00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGeoPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoPoint* self = (const CGeoPoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'y'", NULL);
#endif
  {
   double tolua_ret = (double)  self->y();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'y'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dist of class  CGeoPoint */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoPoint_dist00
static int tolua_zeus_CGeoPoint_dist00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGeoPoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoPoint* self = (const CGeoPoint*)  tolua_tousertype(tolua_S,1,0);
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dist'", NULL);
#endif
  {
   double tolua_ret = (double)  self->dist(*p);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dist'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dist2 of class  CGeoPoint */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoPoint_dist200
static int tolua_zeus_CGeoPoint_dist200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGeoPoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoPoint* self = (const CGeoPoint*)  tolua_tousertype(tolua_S,1,0);
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dist2'", NULL);
#endif
  {
   double tolua_ret = (double)  self->dist2(*p);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dist2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  CGeoPoint */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoPoint__add00
static int tolua_zeus_CGeoPoint__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGeoPoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoPoint* self = (const CGeoPoint*)  tolua_tousertype(tolua_S,1,0);
  const CVector* v = ((const CVector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   CGeoPoint tolua_ret = (CGeoPoint)  self->operator+(*v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CGeoPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CGeoPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  CGeoPoint */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoPoint__mul00
static int tolua_zeus_CGeoPoint__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGeoPoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoPoint* self = (const CGeoPoint*)  tolua_tousertype(tolua_S,1,0);
  const double a = ((const double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   CGeoPoint tolua_ret = (CGeoPoint)  self->operator*(a);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CGeoPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CGeoPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
   tolua_pushnumber(tolua_S,(lua_Number)a);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  CGeoPoint */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoPoint__sub00
static int tolua_zeus_CGeoPoint__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGeoPoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoPoint* self = (const CGeoPoint*)  tolua_tousertype(tolua_S,1,0);
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   CVector tolua_ret = (CVector)  self->operator-(*p);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CVector));
     tolua_pushusertype(tolua_S,tolua_obj,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGeoLine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLine_new00
static int tolua_zeus_CGeoLine_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoLine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGeoLine* tolua_ret = (CGeoLine*)  Mtolua_new((CGeoLine)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoLine");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGeoLine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLine_new00_local
static int tolua_zeus_CGeoLine_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoLine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGeoLine* tolua_ret = (CGeoLine*)  Mtolua_new((CGeoLine)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoLine");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGeoLine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLine_new01
static int tolua_zeus_CGeoLine_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoLine",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CGeoPoint* p1 = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
  const CGeoPoint* p2 = ((const CGeoPoint*)  tolua_tousertype(tolua_S,3,0));
  {
   CGeoLine* tolua_ret = (CGeoLine*)  Mtolua_new((CGeoLine)(*p1,*p2));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoLine");
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CGeoLine_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGeoLine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLine_new01_local
static int tolua_zeus_CGeoLine_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoLine",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CGeoPoint* p1 = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
  const CGeoPoint* p2 = ((const CGeoPoint*)  tolua_tousertype(tolua_S,3,0));
  {
   CGeoLine* tolua_ret = (CGeoLine*)  Mtolua_new((CGeoLine)(*p1,*p2));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoLine");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CGeoLine_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGeoLine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLine_new02
static int tolua_zeus_CGeoLine_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoLine",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
  double angle = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   CGeoLine* tolua_ret = (CGeoLine*)  Mtolua_new((CGeoLine)(*p,angle));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoLine");
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CGeoLine_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGeoLine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLine_new02_local
static int tolua_zeus_CGeoLine_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoLine",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
  double angle = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   CGeoLine* tolua_ret = (CGeoLine*)  Mtolua_new((CGeoLine)(*p,angle));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoLine");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CGeoLine_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: calABC of class  CGeoLine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLine_calABC00
static int tolua_zeus_CGeoLine_calABC00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGeoLine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGeoLine* self = (CGeoLine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'calABC'", NULL);
#endif
  {
   self->calABC();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'calABC'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: projection of class  CGeoLine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLine_projection00
static int tolua_zeus_CGeoLine_projection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGeoLine",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoLine* self = (const CGeoLine*)  tolua_tousertype(tolua_S,1,0);
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'projection'", NULL);
#endif
  {
   CGeoPoint tolua_ret = (CGeoPoint)  self->projection(*p);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CGeoPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CGeoPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'projection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: point1 of class  CGeoLine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLine_point100
static int tolua_zeus_CGeoLine_point100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGeoLine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoLine* self = (const CGeoLine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'point1'", NULL);
#endif
  {
   CGeoPoint tolua_ret = (CGeoPoint)  self->point1();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CGeoPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CGeoPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'point1'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: point2 of class  CGeoLine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLine_point200
static int tolua_zeus_CGeoLine_point200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGeoLine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoLine* self = (const CGeoLine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'point2'", NULL);
#endif
  {
   CGeoPoint tolua_ret = (CGeoPoint)  self->point2();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CGeoPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CGeoPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'point2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  CGeoLine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLine__eq00
static int tolua_zeus_CGeoLine__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGeoLine",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoLine",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGeoLine* self = (CGeoLine*)  tolua_tousertype(tolua_S,1,0);
  const CGeoLine* rhs = ((const CGeoLine*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*rhs);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: a of class  CGeoLine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLine_a00
static int tolua_zeus_CGeoLine_a00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGeoLine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoLine* self = (const CGeoLine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'a'", NULL);
#endif
  {
   const double tolua_ret = (const double)  self->a();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'a'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: b of class  CGeoLine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLine_b00
static int tolua_zeus_CGeoLine_b00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGeoLine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoLine* self = (const CGeoLine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'b'", NULL);
#endif
  {
   const double tolua_ret = (const double)  self->b();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'b'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: c of class  CGeoLine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLine_c00
static int tolua_zeus_CGeoLine_c00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGeoLine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoLine* self = (const CGeoLine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'c'", NULL);
#endif
  {
   const double tolua_ret = (const double)  self->c();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'c'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGeoSegment */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoSegment_new00
static int tolua_zeus_CGeoSegment_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoSegment",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGeoSegment* tolua_ret = (CGeoSegment*)  Mtolua_new((CGeoSegment)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoSegment");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGeoSegment */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoSegment_new00_local
static int tolua_zeus_CGeoSegment_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoSegment",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGeoSegment* tolua_ret = (CGeoSegment*)  Mtolua_new((CGeoSegment)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoSegment");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGeoSegment */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoSegment_new01
static int tolua_zeus_CGeoSegment_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoSegment",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CGeoPoint* p1 = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
  const CGeoPoint* p2 = ((const CGeoPoint*)  tolua_tousertype(tolua_S,3,0));
  {
   CGeoSegment* tolua_ret = (CGeoSegment*)  Mtolua_new((CGeoSegment)(*p1,*p2));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoSegment");
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CGeoSegment_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGeoSegment */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoSegment_new01_local
static int tolua_zeus_CGeoSegment_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoSegment",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CGeoPoint* p1 = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
  const CGeoPoint* p2 = ((const CGeoPoint*)  tolua_tousertype(tolua_S,3,0));
  {
   CGeoSegment* tolua_ret = (CGeoSegment*)  Mtolua_new((CGeoSegment)(*p1,*p2));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoSegment");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CGeoSegment_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsPointOnLineOnSegment of class  CGeoSegment */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoSegment_IsPointOnLineOnSegment00
static int tolua_zeus_CGeoSegment_IsPointOnLineOnSegment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGeoSegment",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoSegment* self = (const CGeoSegment*)  tolua_tousertype(tolua_S,1,0);
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsPointOnLineOnSegment'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsPointOnLineOnSegment(*p);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsPointOnLineOnSegment'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: start of class  CGeoSegment */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoSegment_start00
static int tolua_zeus_CGeoSegment_start00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGeoSegment",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoSegment* self = (const CGeoSegment*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'start'", NULL);
#endif
  {
   const CGeoPoint& tolua_ret = (const CGeoPoint&)  self->start();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CGeoPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'start'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: end of class  CGeoSegment */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoSegment_end00
static int tolua_zeus_CGeoSegment_end00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGeoSegment",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoSegment* self = (const CGeoSegment*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'end'", NULL);
#endif
  {
   const CGeoPoint& tolua_ret = (const CGeoPoint&)  self->end();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CGeoPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'end'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGeoLineLineIntersection */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLineLineIntersection_new00
static int tolua_zeus_CGeoLineLineIntersection_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoLineLineIntersection",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoLine",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CGeoLine",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoLine* line_1 = ((const CGeoLine*)  tolua_tousertype(tolua_S,2,0));
  const CGeoLine* line_2 = ((const CGeoLine*)  tolua_tousertype(tolua_S,3,0));
  {
   CGeoLineLineIntersection* tolua_ret = (CGeoLineLineIntersection*)  Mtolua_new((CGeoLineLineIntersection)(*line_1,*line_2));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoLineLineIntersection");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGeoLineLineIntersection */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLineLineIntersection_new00_local
static int tolua_zeus_CGeoLineLineIntersection_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoLineLineIntersection",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoLine",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CGeoLine",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoLine* line_1 = ((const CGeoLine*)  tolua_tousertype(tolua_S,2,0));
  const CGeoLine* line_2 = ((const CGeoLine*)  tolua_tousertype(tolua_S,3,0));
  {
   CGeoLineLineIntersection* tolua_ret = (CGeoLineLineIntersection*)  Mtolua_new((CGeoLineLineIntersection)(*line_1,*line_2));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoLineLineIntersection");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Intersectant of class  CGeoLineLineIntersection */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLineLineIntersection_Intersectant00
static int tolua_zeus_CGeoLineLineIntersection_Intersectant00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGeoLineLineIntersection",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoLineLineIntersection* self = (const CGeoLineLineIntersection*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Intersectant'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Intersectant();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Intersectant'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IntersectPoint of class  CGeoLineLineIntersection */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLineLineIntersection_IntersectPoint00
static int tolua_zeus_CGeoLineLineIntersection_IntersectPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGeoLineLineIntersection",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoLineLineIntersection* self = (const CGeoLineLineIntersection*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IntersectPoint'", NULL);
#endif
  {
   const CGeoPoint& tolua_ret = (const CGeoPoint&)  self->IntersectPoint();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CGeoPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IntersectPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGeoRectangle */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoRectangle_new00
static int tolua_zeus_CGeoRectangle_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoRectangle",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoPoint* leftTop = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
  const CGeoPoint* rightDown = ((const CGeoPoint*)  tolua_tousertype(tolua_S,3,0));
  {
   CGeoRectangle* tolua_ret = (CGeoRectangle*)  Mtolua_new((CGeoRectangle)(*leftTop,*rightDown));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoRectangle");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGeoRectangle */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoRectangle_new00_local
static int tolua_zeus_CGeoRectangle_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoRectangle",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoPoint* leftTop = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
  const CGeoPoint* rightDown = ((const CGeoPoint*)  tolua_tousertype(tolua_S,3,0));
  {
   CGeoRectangle* tolua_ret = (CGeoRectangle*)  Mtolua_new((CGeoRectangle)(*leftTop,*rightDown));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoRectangle");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGeoLineRectangleIntersection */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLineRectangleIntersection_new00
static int tolua_zeus_CGeoLineRectangleIntersection_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoLineRectangleIntersection",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoLine",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CGeoRectangle",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoLine* line = ((const CGeoLine*)  tolua_tousertype(tolua_S,2,0));
  const CGeoRectangle* rect = ((const CGeoRectangle*)  tolua_tousertype(tolua_S,3,0));
  {
   CGeoLineRectangleIntersection* tolua_ret = (CGeoLineRectangleIntersection*)  Mtolua_new((CGeoLineRectangleIntersection)(*line,*rect));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoLineRectangleIntersection");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGeoLineRectangleIntersection */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLineRectangleIntersection_new00_local
static int tolua_zeus_CGeoLineRectangleIntersection_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGeoLineRectangleIntersection",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoLine",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CGeoRectangle",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoLine* line = ((const CGeoLine*)  tolua_tousertype(tolua_S,2,0));
  const CGeoRectangle* rect = ((const CGeoRectangle*)  tolua_tousertype(tolua_S,3,0));
  {
   CGeoLineRectangleIntersection* tolua_ret = (CGeoLineRectangleIntersection*)  Mtolua_new((CGeoLineRectangleIntersection)(*line,*rect));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGeoLineRectangleIntersection");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersectant of class  CGeoLineRectangleIntersection */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLineRectangleIntersection_intersectant00
static int tolua_zeus_CGeoLineRectangleIntersection_intersectant00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGeoLineRectangleIntersection",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGeoLineRectangleIntersection* self = (CGeoLineRectangleIntersection*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'intersectant'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->intersectant();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'intersectant'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: point1 of class  CGeoLineRectangleIntersection */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLineRectangleIntersection_point100
static int tolua_zeus_CGeoLineRectangleIntersection_point100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGeoLineRectangleIntersection",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGeoLineRectangleIntersection* self = (CGeoLineRectangleIntersection*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'point1'", NULL);
#endif
  {
   const CGeoPoint& tolua_ret = (const CGeoPoint&)  self->point1();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CGeoPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'point1'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: point2 of class  CGeoLineRectangleIntersection */
#ifndef TOLUA_DISABLE_tolua_zeus_CGeoLineRectangleIntersection_point200
static int tolua_zeus_CGeoLineRectangleIntersection_point200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGeoLineRectangleIntersection",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGeoLineRectangleIntersection* self = (CGeoLineRectangleIntersection*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'point2'", NULL);
#endif
  {
   const CGeoPoint& tolua_ret = (const CGeoPoint&)  self->point2();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CGeoPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'point2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: vision */
#ifndef TOLUA_DISABLE_tolua_get_vision_ptr
static int tolua_get_vision_ptr(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)vision,"CVisionModule");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: vision */
#ifndef TOLUA_DISABLE_tolua_set_vision_ptr
static int tolua_set_vision_ptr(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!tolua_isusertype(tolua_S,2,"CVisionModule",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  vision = ((CVisionModule*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: kickStatus */
#ifndef TOLUA_DISABLE_tolua_get_kickStatus_ptr
static int tolua_get_kickStatus_ptr(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)kickStatus,"CKickStatus");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: kickStatus */
#ifndef TOLUA_DISABLE_tolua_set_kickStatus_ptr
static int tolua_set_kickStatus_ptr(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!tolua_isusertype(tolua_S,2,"CKickStatus",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  kickStatus = ((CKickStatus*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dribbleStatus */
#ifndef TOLUA_DISABLE_tolua_get_dribbleStatus_ptr
static int tolua_get_dribbleStatus_ptr(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)dribbleStatus,"CDribbleStatus");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dribbleStatus */
#ifndef TOLUA_DISABLE_tolua_set_dribbleStatus_ptr
static int tolua_set_dribbleStatus_ptr(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!tolua_isusertype(tolua_S,2,"CDribbleStatus",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  dribbleStatus = ((CDribbleStatus*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: debugEngine */
#ifndef TOLUA_DISABLE_tolua_get_debugEngine_ptr
static int tolua_get_debugEngine_ptr(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)debugEngine,"CGDebugEngine");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: debugEngine */
#ifndef TOLUA_DISABLE_tolua_set_debugEngine_ptr
static int tolua_set_debugEngine_ptr(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!tolua_isusertype(tolua_S,2,"CGDebugEngine",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  debugEngine = ((CGDebugEngine*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: world */
#ifndef TOLUA_DISABLE_tolua_get_world_ptr
static int tolua_get_world_ptr(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)world,"CWorldModel");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: world */
#ifndef TOLUA_DISABLE_tolua_set_world_ptr
static int tolua_set_world_ptr(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!tolua_isusertype(tolua_S,2,"CWorldModel",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  world = ((CWorldModel*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  ObjectPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_ObjectPoseT_new00
static int tolua_zeus_ObjectPoseT_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ObjectPoseT",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ObjectPoseT* tolua_ret = (ObjectPoseT*)  Mtolua_new((ObjectPoseT)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ObjectPoseT");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  ObjectPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_ObjectPoseT_new00_local
static int tolua_zeus_ObjectPoseT_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ObjectPoseT",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ObjectPoseT* tolua_ret = (ObjectPoseT*)  Mtolua_new((ObjectPoseT)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ObjectPoseT");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Pos of class  ObjectPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_ObjectPoseT_Pos00
static int tolua_zeus_ObjectPoseT_Pos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ObjectPoseT",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ObjectPoseT* self = (const ObjectPoseT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Pos'", NULL);
#endif
  {
   const CGeoPoint& tolua_ret = (const CGeoPoint&)  self->Pos();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CGeoPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Pos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPos of class  ObjectPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_ObjectPoseT_SetPos00
static int tolua_zeus_ObjectPoseT_SetPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ObjectPoseT",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ObjectPoseT* self = (ObjectPoseT*)  tolua_tousertype(tolua_S,1,0);
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPos'", NULL);
#endif
  {
   self->SetPos(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPos of class  ObjectPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_ObjectPoseT_SetPos01
static int tolua_zeus_ObjectPoseT_SetPos01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ObjectPoseT",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  ObjectPoseT* self = (ObjectPoseT*)  tolua_tousertype(tolua_S,1,0);
  const CGeoPoint* pos = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPos'", NULL);
#endif
  {
   self->SetPos(*pos);
  }
 }
 return 0;
tolua_lerror:
 return tolua_zeus_ObjectPoseT_SetPos00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: X of class  ObjectPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_ObjectPoseT_X00
static int tolua_zeus_ObjectPoseT_X00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ObjectPoseT",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ObjectPoseT* self = (const ObjectPoseT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'X'", NULL);
#endif
  {
   double tolua_ret = (double)  self->X();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'X'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Y of class  ObjectPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_ObjectPoseT_Y00
static int tolua_zeus_ObjectPoseT_Y00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ObjectPoseT",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ObjectPoseT* self = (const ObjectPoseT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Y'", NULL);
#endif
  {
   double tolua_ret = (double)  self->Y();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Y'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetVel of class  ObjectPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_ObjectPoseT_SetVel00
static int tolua_zeus_ObjectPoseT_SetVel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ObjectPoseT",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ObjectPoseT* self = (ObjectPoseT*)  tolua_tousertype(tolua_S,1,0);
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetVel'", NULL);
#endif
  {
   self->SetVel(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetVel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetVel of class  ObjectPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_ObjectPoseT_SetVel01
static int tolua_zeus_ObjectPoseT_SetVel01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ObjectPoseT",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  ObjectPoseT* self = (ObjectPoseT*)  tolua_tousertype(tolua_S,1,0);
  const CVector* vel = ((const CVector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetVel'", NULL);
#endif
  {
   self->SetVel(*vel);
  }
 }
 return 0;
tolua_lerror:
 return tolua_zeus_ObjectPoseT_SetVel00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Vel of class  ObjectPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_ObjectPoseT_Vel00
static int tolua_zeus_ObjectPoseT_Vel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ObjectPoseT",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ObjectPoseT* self = (const ObjectPoseT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Vel'", NULL);
#endif
  {
   const CVector& tolua_ret = (const CVector&)  self->Vel();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CVector");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Vel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: VelX of class  ObjectPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_ObjectPoseT_VelX00
static int tolua_zeus_ObjectPoseT_VelX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ObjectPoseT",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ObjectPoseT* self = (const ObjectPoseT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'VelX'", NULL);
#endif
  {
   double tolua_ret = (double)  self->VelX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'VelX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: VelY of class  ObjectPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_ObjectPoseT_VelY00
static int tolua_zeus_ObjectPoseT_VelY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ObjectPoseT",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ObjectPoseT* self = (const ObjectPoseT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'VelY'", NULL);
#endif
  {
   double tolua_ret = (double)  self->VelY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'VelY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetValid of class  ObjectPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_ObjectPoseT_SetValid00
static int tolua_zeus_ObjectPoseT_SetValid00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ObjectPoseT",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ObjectPoseT* self = (ObjectPoseT*)  tolua_tousertype(tolua_S,1,0);
  bool v = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetValid'", NULL);
#endif
  {
   self->SetValid(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetValid'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Valid of class  ObjectPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_ObjectPoseT_Valid00
static int tolua_zeus_ObjectPoseT_Valid00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ObjectPoseT",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ObjectPoseT* self = (const ObjectPoseT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Valid'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Valid();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Valid'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RawPos of class  VisionObjectT */
#ifndef TOLUA_DISABLE_tolua_zeus_VisionObjectT_RawPos00
static int tolua_zeus_VisionObjectT_RawPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const VisionObjectT",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const VisionObjectT* self = (const VisionObjectT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RawPos'", NULL);
#endif
  {
   const CGeoPoint& tolua_ret = (const CGeoPoint&)  self->RawPos();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CGeoPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RawPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetRawPos of class  VisionObjectT */
#ifndef TOLUA_DISABLE_tolua_zeus_VisionObjectT_SetRawPos00
static int tolua_zeus_VisionObjectT_SetRawPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"VisionObjectT",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  VisionObjectT* self = (VisionObjectT*)  tolua_tousertype(tolua_S,1,0);
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetRawPos'", NULL);
#endif
  {
   self->SetRawPos(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetRawPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetRawPos of class  VisionObjectT */
#ifndef TOLUA_DISABLE_tolua_zeus_VisionObjectT_SetRawPos01
static int tolua_zeus_VisionObjectT_SetRawPos01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"VisionObjectT",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  VisionObjectT* self = (VisionObjectT*)  tolua_tousertype(tolua_S,1,0);
  const CGeoPoint* pos = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetRawPos'", NULL);
#endif
  {
   self->SetRawPos(*pos);
  }
 }
 return 0;
tolua_lerror:
 return tolua_zeus_VisionObjectT_SetRawPos00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __VisionObjectT__ of class  MobileVisionT */
#ifndef TOLUA_DISABLE_tolua_get_MobileVisionT___VisionObjectT__
static int tolua_get_MobileVisionT___VisionObjectT__(lua_State* tolua_S)
{
  MobileVisionT* self = (MobileVisionT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__VisionObjectT__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<VisionObjectT*>(self), "VisionObjectT");
#else
   tolua_pushusertype(tolua_S,(void*)((VisionObjectT*)self), "VisionObjectT");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  PlayerPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_PlayerPoseT_new00
static int tolua_zeus_PlayerPoseT_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"PlayerPoseT",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   PlayerPoseT* tolua_ret = (PlayerPoseT*)  Mtolua_new((PlayerPoseT)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"PlayerPoseT");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  PlayerPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_PlayerPoseT_new00_local
static int tolua_zeus_PlayerPoseT_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"PlayerPoseT",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   PlayerPoseT* tolua_ret = (PlayerPoseT*)  Mtolua_new((PlayerPoseT)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"PlayerPoseT");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Dir of class  PlayerPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_PlayerPoseT_Dir00
static int tolua_zeus_PlayerPoseT_Dir00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const PlayerPoseT",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const PlayerPoseT* self = (const PlayerPoseT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Dir'", NULL);
#endif
  {
   double tolua_ret = (double)  self->Dir();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Dir'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetDir of class  PlayerPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_PlayerPoseT_SetDir00
static int tolua_zeus_PlayerPoseT_SetDir00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PlayerPoseT",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PlayerPoseT* self = (PlayerPoseT*)  tolua_tousertype(tolua_S,1,0);
  double d = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetDir'", NULL);
#endif
  {
   self->SetDir(d);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetDir'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RotVel of class  PlayerPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_PlayerPoseT_RotVel00
static int tolua_zeus_PlayerPoseT_RotVel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const PlayerPoseT",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const PlayerPoseT* self = (const PlayerPoseT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RotVel'", NULL);
#endif
  {
   double tolua_ret = (double)  self->RotVel();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RotVel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetRotVel of class  PlayerPoseT */
#ifndef TOLUA_DISABLE_tolua_zeus_PlayerPoseT_SetRotVel00
static int tolua_zeus_PlayerPoseT_SetRotVel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PlayerPoseT",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PlayerPoseT* self = (PlayerPoseT*)  tolua_tousertype(tolua_S,1,0);
  double d = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetRotVel'", NULL);
#endif
  {
   self->SetRotVel(d);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetRotVel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetType of class  PlayerTypeT */
#ifndef TOLUA_DISABLE_tolua_zeus_PlayerTypeT_SetType00
static int tolua_zeus_PlayerTypeT_SetType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PlayerTypeT",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PlayerTypeT* self = (PlayerTypeT*)  tolua_tousertype(tolua_S,1,0);
  int t = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetType'", NULL);
#endif
  {
   self->SetType(t);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Type of class  PlayerTypeT */
#ifndef TOLUA_DISABLE_tolua_zeus_PlayerTypeT_Type00
static int tolua_zeus_PlayerTypeT_Type00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const PlayerTypeT",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const PlayerTypeT* self = (const PlayerTypeT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Type'", NULL);
#endif
  {
   int tolua_ret = (int)  self->Type();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Type'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __VisionObjectT__ of class  PlayerVisionT */
#ifndef TOLUA_DISABLE_tolua_get_PlayerVisionT___VisionObjectT__
static int tolua_get_PlayerVisionT___VisionObjectT__(lua_State* tolua_S)
{
  PlayerVisionT* self = (PlayerVisionT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__VisionObjectT__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<VisionObjectT*>(self), "VisionObjectT");
#else
   tolua_pushusertype(tolua_S,(void*)((VisionObjectT*)self), "VisionObjectT");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __PlayerTypeT__ of class  PlayerVisionT */
#ifndef TOLUA_DISABLE_tolua_get_PlayerVisionT___PlayerTypeT__
static int tolua_get_PlayerVisionT___PlayerTypeT__(lua_State* tolua_S)
{
  PlayerVisionT* self = (PlayerVisionT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__PlayerTypeT__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<PlayerTypeT*>(self), "PlayerTypeT");
#else
   tolua_pushusertype(tolua_S,(void*)((PlayerTypeT*)self), "PlayerTypeT");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: maxAccel of class  PlayerCapabilityT */
#ifndef TOLUA_DISABLE_tolua_get_PlayerCapabilityT_maxAccel
static int tolua_get_PlayerCapabilityT_maxAccel(lua_State* tolua_S)
{
  PlayerCapabilityT* self = (PlayerCapabilityT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxAccel'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->maxAccel);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: maxAccel of class  PlayerCapabilityT */
#ifndef TOLUA_DISABLE_tolua_set_PlayerCapabilityT_maxAccel
static int tolua_set_PlayerCapabilityT_maxAccel(lua_State* tolua_S)
{
  PlayerCapabilityT* self = (PlayerCapabilityT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxAccel'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->maxAccel = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: maxSpeed of class  PlayerCapabilityT */
#ifndef TOLUA_DISABLE_tolua_get_PlayerCapabilityT_maxSpeed
static int tolua_get_PlayerCapabilityT_maxSpeed(lua_State* tolua_S)
{
  PlayerCapabilityT* self = (PlayerCapabilityT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxSpeed'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->maxSpeed);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: maxSpeed of class  PlayerCapabilityT */
#ifndef TOLUA_DISABLE_tolua_set_PlayerCapabilityT_maxSpeed
static int tolua_set_PlayerCapabilityT_maxSpeed(lua_State* tolua_S)
{
  PlayerCapabilityT* self = (PlayerCapabilityT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxSpeed'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->maxSpeed = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: maxAngularAccel of class  PlayerCapabilityT */
#ifndef TOLUA_DISABLE_tolua_get_PlayerCapabilityT_maxAngularAccel
static int tolua_get_PlayerCapabilityT_maxAngularAccel(lua_State* tolua_S)
{
  PlayerCapabilityT* self = (PlayerCapabilityT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxAngularAccel'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->maxAngularAccel);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: maxAngularAccel of class  PlayerCapabilityT */
#ifndef TOLUA_DISABLE_tolua_set_PlayerCapabilityT_maxAngularAccel
static int tolua_set_PlayerCapabilityT_maxAngularAccel(lua_State* tolua_S)
{
  PlayerCapabilityT* self = (PlayerCapabilityT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxAngularAccel'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->maxAngularAccel = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: maxAngularSpeed of class  PlayerCapabilityT */
#ifndef TOLUA_DISABLE_tolua_get_PlayerCapabilityT_maxAngularSpeed
static int tolua_get_PlayerCapabilityT_maxAngularSpeed(lua_State* tolua_S)
{
  PlayerCapabilityT* self = (PlayerCapabilityT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxAngularSpeed'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->maxAngularSpeed);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: maxAngularSpeed of class  PlayerCapabilityT */
#ifndef TOLUA_DISABLE_tolua_set_PlayerCapabilityT_maxAngularSpeed
static int tolua_set_PlayerCapabilityT_maxAngularSpeed(lua_State* tolua_S)
{
  PlayerCapabilityT* self = (PlayerCapabilityT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxAngularSpeed'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->maxAngularSpeed = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: maxDec of class  PlayerCapabilityT */
#ifndef TOLUA_DISABLE_tolua_get_PlayerCapabilityT_maxDec
static int tolua_get_PlayerCapabilityT_maxDec(lua_State* tolua_S)
{
  PlayerCapabilityT* self = (PlayerCapabilityT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxDec'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->maxDec);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: maxDec of class  PlayerCapabilityT */
#ifndef TOLUA_DISABLE_tolua_set_PlayerCapabilityT_maxDec
static int tolua_set_PlayerCapabilityT_maxDec(lua_State* tolua_S)
{
  PlayerCapabilityT* self = (PlayerCapabilityT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxDec'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->maxDec = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: maxAngularDec of class  PlayerCapabilityT */
#ifndef TOLUA_DISABLE_tolua_get_PlayerCapabilityT_maxAngularDec
static int tolua_get_PlayerCapabilityT_maxAngularDec(lua_State* tolua_S)
{
  PlayerCapabilityT* self = (PlayerCapabilityT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxAngularDec'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->maxAngularDec);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: maxAngularDec of class  PlayerCapabilityT */
#ifndef TOLUA_DISABLE_tolua_set_PlayerCapabilityT_maxAngularDec
static int tolua_set_PlayerCapabilityT_maxAngularDec(lua_State* tolua_S)
{
  PlayerCapabilityT* self = (PlayerCapabilityT*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxAngularDec'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->maxAngularDec = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CWorldModel */
#ifndef TOLUA_DISABLE_tolua_zeus_CWorldModel_new00
static int tolua_zeus_CWorldModel_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CWorldModel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CWorldModel* tolua_ret = (CWorldModel*)  Mtolua_new((CWorldModel)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CWorldModel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CWorldModel */
#ifndef TOLUA_DISABLE_tolua_zeus_CWorldModel_new00_local
static int tolua_zeus_CWorldModel_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CWorldModel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CWorldModel* tolua_ret = (CWorldModel*)  Mtolua_new((CWorldModel)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CWorldModel");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: vision of class  CWorldModel */
#ifndef TOLUA_DISABLE_tolua_zeus_CWorldModel_vision00
static int tolua_zeus_CWorldModel_vision00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWorldModel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWorldModel* self = (CWorldModel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'vision'", NULL);
#endif
  {
   const CVisionModule* tolua_ret = (const CVisionModule*)  self->vision();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const CVisionModule");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'vision'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SPlayFSMSwitchClearAll of class  CWorldModel */
#ifndef TOLUA_DISABLE_tolua_zeus_CWorldModel_SPlayFSMSwitchClearAll00
static int tolua_zeus_CWorldModel_SPlayFSMSwitchClearAll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWorldModel",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWorldModel* self = (CWorldModel*)  tolua_tousertype(tolua_S,1,0);
  bool clear_flag = ((bool)  tolua_toboolean(tolua_S,2,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SPlayFSMSwitchClearAll'", NULL);
#endif
  {
   self->SPlayFSMSwitchClearAll(clear_flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SPlayFSMSwitchClearAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: KickDirArrived of class  CWorldModel */
#ifndef TOLUA_DISABLE_tolua_zeus_CWorldModel_KickDirArrived00
static int tolua_zeus_CWorldModel_KickDirArrived00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWorldModel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWorldModel* self = (CWorldModel*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_10 = ((int)  tolua_tonumber(tolua_S,2,0));
  double tolua_var_11 = ((double)  tolua_tonumber(tolua_S,3,0));
  double tolua_var_12 = ((double)  tolua_tonumber(tolua_S,4,0));
  int tolua_var_13 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'KickDirArrived'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->KickDirArrived(tolua_var_10,tolua_var_11,tolua_var_12,tolua_var_13);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'KickDirArrived'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsBallKicked of class  CWorldModel */
#ifndef TOLUA_DISABLE_tolua_zeus_CWorldModel_IsBallKicked00
static int tolua_zeus_CWorldModel_IsBallKicked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWorldModel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWorldModel* self = (CWorldModel*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_14 = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsBallKicked'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsBallKicked(tolua_var_14);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsBallKicked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsInfraredOn of class  CWorldModel */
#ifndef TOLUA_DISABLE_tolua_zeus_CWorldModel_IsInfraredOn00
static int tolua_zeus_CWorldModel_IsInfraredOn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWorldModel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWorldModel* self = (CWorldModel*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_15 = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsInfraredOn'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsInfraredOn(tolua_var_15);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsInfraredOn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: InfraredOnCount of class  CWorldModel */
#ifndef TOLUA_DISABLE_tolua_zeus_CWorldModel_InfraredOnCount00
static int tolua_zeus_CWorldModel_InfraredOnCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWorldModel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWorldModel* self = (CWorldModel*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_16 = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'InfraredOnCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->InfraredOnCount(tolua_var_16);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'InfraredOnCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: InfraredOffCount of class  CWorldModel */
#ifndef TOLUA_DISABLE_tolua_zeus_CWorldModel_InfraredOffCount00
static int tolua_zeus_CWorldModel_InfraredOffCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWorldModel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWorldModel* self = (CWorldModel*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_17 = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'InfraredOffCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->InfraredOffCount(tolua_var_17);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'InfraredOffCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_new00
static int tolua_zeus_CVisionModule_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CVisionModule* tolua_ret = (CVisionModule*)  Mtolua_new((CVisionModule)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CVisionModule");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_new00_local
static int tolua_zeus_CVisionModule_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CVisionModule* tolua_ret = (CVisionModule*)  Mtolua_new((CVisionModule)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CVisionModule");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_delete00
static int tolua_zeus_CVisionModule_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CVisionModule* self = (CVisionModule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getValidNum of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_getValidNum00
static int tolua_zeus_CVisionModule_getValidNum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getValidNum'", NULL);
#endif
  {
   const int tolua_ret = (const int)  self->getValidNum();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getValidNum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTheirValidNum of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_getTheirValidNum00
static int tolua_zeus_CVisionModule_getTheirValidNum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTheirValidNum'", NULL);
#endif
  {
   const int tolua_ret = (const int)  self->getTheirValidNum();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTheirValidNum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: allPlayer of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_allPlayer00
static int tolua_zeus_CVisionModule_allPlayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'allPlayer'", NULL);
#endif
  {
   const PlayerVisionT& tolua_ret = (const PlayerVisionT&)  self->allPlayer(num);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const PlayerVisionT");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'allPlayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ourPlayer of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_ourPlayer00
static int tolua_zeus_CVisionModule_ourPlayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ourPlayer'", NULL);
#endif
  {
   const PlayerVisionT& tolua_ret = (const PlayerVisionT&)  self->ourPlayer(num);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const PlayerVisionT");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ourPlayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: theirPlayer of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_theirPlayer00
static int tolua_zeus_CVisionModule_theirPlayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'theirPlayer'", NULL);
#endif
  {
   const PlayerVisionT& tolua_ret = (const PlayerVisionT&)  self->theirPlayer(num);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const PlayerVisionT");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'theirPlayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ball of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_ball00
static int tolua_zeus_CVisionModule_ball00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ball'", NULL);
#endif
  {
   const MobileVisionT& tolua_ret = (const MobileVisionT&)  self->ball();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const MobileVisionT");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ball'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ourPlayer of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_ourPlayer01
static int tolua_zeus_CVisionModule_ourPlayer01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
  int cycle = ((int)  tolua_tonumber(tolua_S,2,0));
  int num = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ourPlayer'", NULL);
#endif
  {
   const PlayerVisionT& tolua_ret = (const PlayerVisionT&)  self->ourPlayer(cycle,num);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const PlayerVisionT");
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CVisionModule_ourPlayer00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: theirPlayer of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_theirPlayer01
static int tolua_zeus_CVisionModule_theirPlayer01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
  int cycle = ((int)  tolua_tonumber(tolua_S,2,0));
  int num = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'theirPlayer'", NULL);
#endif
  {
   const PlayerVisionT& tolua_ret = (const PlayerVisionT&)  self->theirPlayer(cycle,num);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const PlayerVisionT");
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CVisionModule_theirPlayer00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: ball of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_ball01
static int tolua_zeus_CVisionModule_ball01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
  int cycle = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ball'", NULL);
#endif
  {
   const MobileVisionT& tolua_ret = (const MobileVisionT&)  self->ball(cycle);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const MobileVisionT");
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CVisionModule_ball00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: rawBall of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_rawBall00
static int tolua_zeus_CVisionModule_rawBall00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'rawBall'", NULL);
#endif
  {
   const ObjectPoseT& tolua_ret = (const ObjectPoseT&)  self->rawBall();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const ObjectPoseT");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rawBall'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBallPlacementPosition of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_getBallPlacementPosition00
static int tolua_zeus_CVisionModule_getBallPlacementPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBallPlacementPosition'", NULL);
#endif
  {
   const CGeoPoint& tolua_ret = (const CGeoPoint&)  self->getBallPlacementPosition();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CGeoPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBallPlacementPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ourRawPlayer of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_ourRawPlayer00
static int tolua_zeus_CVisionModule_ourRawPlayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ourRawPlayer'", NULL);
#endif
  {
   const RobotRawVisionData& tolua_ret = (const RobotRawVisionData&)  self->ourRawPlayer(num);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const RobotRawVisionData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ourRawPlayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: theirRawPlayer of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_theirRawPlayer00
static int tolua_zeus_CVisionModule_theirRawPlayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'theirRawPlayer'", NULL);
#endif
  {
   const RobotRawVisionData& tolua_ret = (const RobotRawVisionData&)  self->theirRawPlayer(num);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const RobotRawVisionData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'theirRawPlayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPlayerCommand of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_setPlayerCommand00
static int tolua_zeus_CVisionModule_setPlayerCommand00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CVisionModule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const CPlayerCommand",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CVisionModule* self = (CVisionModule*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
  const CPlayerCommand* pCmd = ((const CPlayerCommand*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPlayerCommand'", NULL);
#endif
  {
   self->setPlayerCommand(num,pCmd);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPlayerCommand'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: gameState of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_gameState00
static int tolua_zeus_CVisionModule_gameState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'gameState'", NULL);
#endif
  {
   const GameState& tolua_ret = (const GameState&)  self->gameState();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const GameState");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gameState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: playerLostTime of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_playerLostTime00
static int tolua_zeus_CVisionModule_playerLostTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
  const int number = ((const int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'playerLostTime'", NULL);
#endif
  {
   int tolua_ret = (int)  self->playerLostTime(number);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'playerLostTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurrentRefereeMsg of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_getCurrentRefereeMsg00
static int tolua_zeus_CVisionModule_getCurrentRefereeMsg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentRefereeMsg'", NULL);
#endif
  {
   const string tolua_ret = (const string)  self->getCurrentRefereeMsg();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentRefereeMsg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNextRefereeMsg of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_getNextRefereeMsg00
static int tolua_zeus_CVisionModule_getNextRefereeMsg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNextRefereeMsg'", NULL);
#endif
  {
   const string tolua_ret = (const string)  self->getNextRefereeMsg();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNextRefereeMsg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLuaRefereeMsg of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_getLuaRefereeMsg00
static int tolua_zeus_CVisionModule_getLuaRefereeMsg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLuaRefereeMsg'", NULL);
#endif
  {
   const string tolua_ret = (const string)  self->getLuaRefereeMsg();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLuaRefereeMsg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCycle of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_getCycle00
static int tolua_zeus_CVisionModule_getCycle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCycle'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getCycle();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCycle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLastCycle of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_getLastCycle00
static int tolua_zeus_CVisionModule_getLastCycle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLastCycle'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getLastCycle();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLastCycle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSide of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_getSide00
static int tolua_zeus_CVisionModule_getSide00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* self = (const CVisionModule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSide'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getSide();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSide'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOurGoal of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_getOurGoal00
static int tolua_zeus_CVisionModule_getOurGoal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CVisionModule* self = (CVisionModule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOurGoal'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getOurGoal();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOurGoal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTheirGoal of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_getTheirGoal00
static int tolua_zeus_CVisionModule_getTheirGoal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CVisionModule* self = (CVisionModule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTheirGoal'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getTheirGoal();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTheirGoal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTimeRemain of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_getTimeRemain00
static int tolua_zeus_CVisionModule_getTimeRemain00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CVisionModule* self = (CVisionModule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTimeRemain'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getTimeRemain();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTimeRemain'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBallVelStable of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_getBallVelStable00
static int tolua_zeus_CVisionModule_getBallVelStable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CVisionModule* self = (CVisionModule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBallVelStable'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getBallVelStable();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBallVelStable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ballVelValid of class  CVisionModule */
#ifndef TOLUA_DISABLE_tolua_zeus_CVisionModule_ballVelValid00
static int tolua_zeus_CVisionModule_ballVelValid00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CVisionModule",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CVisionModule* self = (CVisionModule*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ballVelValid'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ballVelValid();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ballVelValid'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGDebugEngine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGDebugEngine_new00
static int tolua_zeus_CGDebugEngine_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGDebugEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGDebugEngine* tolua_ret = (CGDebugEngine*)  Mtolua_new((CGDebugEngine)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGDebugEngine");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGDebugEngine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGDebugEngine_new00_local
static int tolua_zeus_CGDebugEngine_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGDebugEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGDebugEngine* tolua_ret = (CGDebugEngine*)  Mtolua_new((CGDebugEngine)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGDebugEngine");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CGDebugEngine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGDebugEngine_delete00
static int tolua_zeus_CGDebugEngine_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGDebugEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGDebugEngine* self = (CGDebugEngine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: gui_debug_x of class  CGDebugEngine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGDebugEngine_gui_debug_x00
static int tolua_zeus_CGDebugEngine_gui_debug_x00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGDebugEngine",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGDebugEngine* self = (CGDebugEngine*)  tolua_tousertype(tolua_S,1,0);
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
  char debug_color = ((char)  tolua_tonumber(tolua_S,3,1));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'gui_debug_x'", NULL);
#endif
  {
   self->gui_debug_x(*p,debug_color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gui_debug_x'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: gui_debug_line of class  CGDebugEngine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGDebugEngine_gui_debug_line00
static int tolua_zeus_CGDebugEngine_gui_debug_line00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGDebugEngine",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGDebugEngine* self = (CGDebugEngine*)  tolua_tousertype(tolua_S,1,0);
  const CGeoPoint* p1 = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
  const CGeoPoint* p2 = ((const CGeoPoint*)  tolua_tousertype(tolua_S,3,0));
  char debug_color = ((char)  tolua_tonumber(tolua_S,4,1));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'gui_debug_line'", NULL);
#endif
  {
   self->gui_debug_line(*p1,*p2,debug_color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gui_debug_line'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: gui_debug_arc of class  CGDebugEngine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGDebugEngine_gui_debug_arc00
static int tolua_zeus_CGDebugEngine_gui_debug_arc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGDebugEngine",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGDebugEngine* self = (CGDebugEngine*)  tolua_tousertype(tolua_S,1,0);
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
  double r = ((double)  tolua_tonumber(tolua_S,3,0));
  double start_angle = ((double)  tolua_tonumber(tolua_S,4,0));
  double span_angle = ((double)  tolua_tonumber(tolua_S,5,0));
  char debug_color = ((char)  tolua_tonumber(tolua_S,6,1));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'gui_debug_arc'", NULL);
#endif
  {
   self->gui_debug_arc(*p,r,start_angle,span_angle,debug_color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gui_debug_arc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: gui_debug_triangle of class  CGDebugEngine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGDebugEngine_gui_debug_triangle00
static int tolua_zeus_CGDebugEngine_gui_debug_triangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGDebugEngine",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CGeoPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGDebugEngine* self = (CGDebugEngine*)  tolua_tousertype(tolua_S,1,0);
  const CGeoPoint* p1 = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
  const CGeoPoint* p2 = ((const CGeoPoint*)  tolua_tousertype(tolua_S,3,0));
  const CGeoPoint* p3 = ((const CGeoPoint*)  tolua_tousertype(tolua_S,4,0));
  char debug_color = ((char)  tolua_tonumber(tolua_S,5,1));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'gui_debug_triangle'", NULL);
#endif
  {
   self->gui_debug_triangle(*p1,*p2,*p3,debug_color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gui_debug_triangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: gui_debug_robot of class  CGDebugEngine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGDebugEngine_gui_debug_robot00
static int tolua_zeus_CGDebugEngine_gui_debug_robot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGDebugEngine",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGDebugEngine* self = (CGDebugEngine*)  tolua_tousertype(tolua_S,1,0);
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
  double robot_dir = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'gui_debug_robot'", NULL);
#endif
  {
   self->gui_debug_robot(*p,robot_dir);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gui_debug_robot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: gui_debug_msg of class  CGDebugEngine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGDebugEngine_gui_debug_msg00
static int tolua_zeus_CGDebugEngine_gui_debug_msg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGDebugEngine",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGDebugEngine* self = (CGDebugEngine*)  tolua_tousertype(tolua_S,1,0);
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
  const char* msgstr = ((const char*)  tolua_tostring(tolua_S,3,0));
  char debug_color = ((char)  tolua_tonumber(tolua_S,4,1));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'gui_debug_msg'", NULL);
#endif
  {
   self->gui_debug_msg(*p,msgstr,debug_color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gui_debug_msg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: gui_debug_curve of class  CGDebugEngine */
#ifndef TOLUA_DISABLE_tolua_zeus_CGDebugEngine_gui_debug_curve00
static int tolua_zeus_CGDebugEngine_gui_debug_curve00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGDebugEngine",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGDebugEngine* self = (CGDebugEngine*)  tolua_tousertype(tolua_S,1,0);
  const double num = ((const double)  tolua_tonumber(tolua_S,2,0));
  const double maxLimit = ((const double)  tolua_tonumber(tolua_S,3,0));
  const double minLimit = ((const double)  tolua_tonumber(tolua_S,4,0));
  char debug_color = ((char)  tolua_tonumber(tolua_S,5,1));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'gui_debug_curve'", NULL);
#endif
  {
   self->gui_debug_curve(num,maxLimit,minLimit,debug_color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gui_debug_curve'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CKickStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CKickStatus_new00
static int tolua_zeus_CKickStatus_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CKickStatus",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CKickStatus* tolua_ret = (CKickStatus*)  Mtolua_new((CKickStatus)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CKickStatus");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CKickStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CKickStatus_new00_local
static int tolua_zeus_CKickStatus_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CKickStatus",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CKickStatus* tolua_ret = (CKickStatus*)  Mtolua_new((CKickStatus)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CKickStatus");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setKick of class  CKickStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CKickStatus_setKick00
static int tolua_zeus_CKickStatus_setKick00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CKickStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CKickStatus* self = (CKickStatus*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
  double power = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setKick'", NULL);
#endif
  {
   self->setKick(num,power);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setKick'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setChipKick of class  CKickStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CKickStatus_setChipKick00
static int tolua_zeus_CKickStatus_setChipKick00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CKickStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CKickStatus* self = (CKickStatus*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
  double power = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setChipKick'", NULL);
#endif
  {
   self->setChipKick(num,power);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setChipKick'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBothKick of class  CKickStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CKickStatus_setBothKick00
static int tolua_zeus_CKickStatus_setBothKick00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CKickStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CKickStatus* self = (CKickStatus*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
  double kick = ((double)  tolua_tonumber(tolua_S,3,0));
  double chip = ((double)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBothKick'", NULL);
#endif
  {
   self->setBothKick(num,kick,chip);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBothKick'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAllKick of class  CKickStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CKickStatus_setAllKick00
static int tolua_zeus_CKickStatus_setAllKick00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CKickStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CKickStatus* self = (CKickStatus*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
  double kick = ((double)  tolua_tonumber(tolua_S,3,0));
  double chip = ((double)  tolua_tonumber(tolua_S,4,0));
  double pass = ((double)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAllKick'", NULL);
#endif
  {
   self->setAllKick(num,kick,chip,pass);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAllKick'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: needKick of class  CKickStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CKickStatus_needKick00
static int tolua_zeus_CKickStatus_needKick00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CKickStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CKickStatus* self = (const CKickStatus*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'needKick'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->needKick(num);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'needKick'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getKickPower of class  CKickStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CKickStatus_getKickPower00
static int tolua_zeus_CKickStatus_getKickPower00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CKickStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CKickStatus* self = (const CKickStatus*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getKickPower'", NULL);
#endif
  {
   double tolua_ret = (double)  self->getKickPower(num);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getKickPower'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChipKickDist of class  CKickStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CKickStatus_getChipKickDist00
static int tolua_zeus_CKickStatus_getChipKickDist00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CKickStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CKickStatus* self = (const CKickStatus*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChipKickDist'", NULL);
#endif
  {
   double tolua_ret = (double)  self->getChipKickDist(num);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChipKickDist'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPassDist of class  CKickStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CKickStatus_getPassDist00
static int tolua_zeus_CKickStatus_getPassDist00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CKickStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CKickStatus* self = (const CKickStatus*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPassDist'", NULL);
#endif
  {
   double tolua_ret = (double)  self->getPassDist(num);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPassDist'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getKiker of class  CKickStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CKickStatus_getKiker00
static int tolua_zeus_CKickStatus_getKiker00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CKickStatus",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CKickStatus* self = (const CKickStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getKiker'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getKiker();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getKiker'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clearAll of class  CKickStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CKickStatus_clearAll00
static int tolua_zeus_CKickStatus_clearAll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CKickStatus",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CKickStatus* self = (CKickStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clearAll'", NULL);
#endif
  {
   self->clearAll();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resetKick2ForceClose of class  CKickStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CKickStatus_resetKick2ForceClose00
static int tolua_zeus_CKickStatus_resetKick2ForceClose00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CKickStatus",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CKickStatus* self = (CKickStatus*)  tolua_tousertype(tolua_S,1,0);
  bool forceClose = ((bool)  tolua_toboolean(tolua_S,2,false));
  int forceCloseCycle = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resetKick2ForceClose'", NULL);
#endif
  {
   self->resetKick2ForceClose(forceClose,forceCloseCycle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resetKick2ForceClose'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateForceClose of class  CKickStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CKickStatus_updateForceClose00
static int tolua_zeus_CKickStatus_updateForceClose00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CKickStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CKickStatus* self = (CKickStatus*)  tolua_tousertype(tolua_S,1,0);
  int currentCycle = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateForceClose'", NULL);
#endif
  {
   self->updateForceClose(currentCycle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateForceClose'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isForceClosed of class  CKickStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CKickStatus_isForceClosed00
static int tolua_zeus_CKickStatus_isForceClosed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CKickStatus",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CKickStatus* self = (CKickStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isForceClosed'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isForceClosed();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isForceClosed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CTaskMediator */
#ifndef TOLUA_DISABLE_tolua_zeus_CTaskMediator_new00
static int tolua_zeus_CTaskMediator_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CTaskMediator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CTaskMediator* tolua_ret = (CTaskMediator*)  Mtolua_new((CTaskMediator)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CTaskMediator");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CTaskMediator */
#ifndef TOLUA_DISABLE_tolua_zeus_CTaskMediator_new00_local
static int tolua_zeus_CTaskMediator_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CTaskMediator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CTaskMediator* tolua_ret = (CTaskMediator*)  Mtolua_new((CTaskMediator)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CTaskMediator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBallHandler of class  CTaskMediator */
#ifndef TOLUA_DISABLE_tolua_zeus_CTaskMediator_setBallHandler00
static int tolua_zeus_CTaskMediator_setBallHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTaskMediator",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTaskMediator* self = (CTaskMediator*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBallHandler'", NULL);
#endif
  {
   self->setBallHandler(num);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBallHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ballHandler of class  CTaskMediator */
#ifndef TOLUA_DISABLE_tolua_zeus_CTaskMediator_ballHandler00
static int tolua_zeus_CTaskMediator_ballHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CTaskMediator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CTaskMediator* self = (const CTaskMediator*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ballHandler'", NULL);
#endif
  {
   int tolua_ret = (int)  self->ballHandler();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ballHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: goalie of class  CTaskMediator */
#ifndef TOLUA_DISABLE_tolua_zeus_CTaskMediator_goalie00
static int tolua_zeus_CTaskMediator_goalie00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTaskMediator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTaskMediator* self = (CTaskMediator*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'goalie'", NULL);
#endif
  {
   int tolua_ret = (int)  self->goalie();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'goalie'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPlayerTask of class  CTaskMediator */
#ifndef TOLUA_DISABLE_tolua_zeus_CTaskMediator_setPlayerTask00
static int tolua_zeus_CTaskMediator_setPlayerTask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTaskMediator",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CPlayerTask",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTaskMediator* self = (CTaskMediator*)  tolua_tousertype(tolua_S,1,0);
  const int num = ((const int)  tolua_tonumber(tolua_S,2,0));
  CPlayerTask* pTask = ((CPlayerTask*)  tolua_tousertype(tolua_S,3,0));
  const int priority = ((const int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPlayerTask'", NULL);
#endif
  {
   self->setPlayerTask(num,pTask,priority);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPlayerTask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPlayerTask of class  CTaskMediator */
#ifndef TOLUA_DISABLE_tolua_zeus_CTaskMediator_getPlayerTask00
static int tolua_zeus_CTaskMediator_getPlayerTask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CTaskMediator",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CTaskMediator* self = (const CTaskMediator*)  tolua_tousertype(tolua_S,1,0);
  const int num = ((const int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPlayerTask'", NULL);
#endif
  {
   CPlayerTask* tolua_ret = (CPlayerTask*)  self->getPlayerTask(num);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CPlayerTask");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPlayerTask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPlayerTaskPriority of class  CTaskMediator */
#ifndef TOLUA_DISABLE_tolua_zeus_CTaskMediator_getPlayerTaskPriority00
static int tolua_zeus_CTaskMediator_getPlayerTaskPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CTaskMediator",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CTaskMediator* self = (const CTaskMediator*)  tolua_tousertype(tolua_S,1,0);
  const int num = ((const int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPlayerTaskPriority'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getPlayerTaskPriority(num);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPlayerTaskPriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  GameState */
#ifndef TOLUA_DISABLE_tolua_zeus_GameState_new00
static int tolua_zeus_GameState_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GameState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GameState* tolua_ret = (GameState*)  Mtolua_new((GameState)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameState");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  GameState */
#ifndef TOLUA_DISABLE_tolua_zeus_GameState_new00_local
static int tolua_zeus_GameState_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GameState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GameState* tolua_ret = (GameState*)  Mtolua_new((GameState)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameState");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: gameOn of class  GameState */
#ifndef TOLUA_DISABLE_tolua_zeus_GameState_gameOn00
static int tolua_zeus_GameState_gameOn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const GameState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const GameState* self = (const GameState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'gameOn'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->gameOn();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gameOn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: gameOff of class  GameState */
#ifndef TOLUA_DISABLE_tolua_zeus_GameState_gameOff00
static int tolua_zeus_GameState_gameOff00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const GameState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const GameState* self = (const GameState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'gameOff'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->gameOff();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gameOff'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: gameOver of class  GameState */
#ifndef TOLUA_DISABLE_tolua_zeus_GameState_gameOver00
static int tolua_zeus_GameState_gameOver00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const GameState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const GameState* self = (const GameState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'gameOver'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->gameOver();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gameOver'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: restart of class  GameState */
#ifndef TOLUA_DISABLE_tolua_zeus_GameState_restart00
static int tolua_zeus_GameState_restart00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const GameState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const GameState* self = (const GameState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'restart'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->restart();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'restart'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ourRestart of class  GameState */
#ifndef TOLUA_DISABLE_tolua_zeus_GameState_ourRestart00
static int tolua_zeus_GameState_ourRestart00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const GameState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const GameState* self = (const GameState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ourRestart'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ourRestart();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ourRestart'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: theirRestart of class  GameState */
#ifndef TOLUA_DISABLE_tolua_zeus_GameState_theirRestart00
static int tolua_zeus_GameState_theirRestart00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const GameState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const GameState* self = (const GameState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'theirRestart'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->theirRestart();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'theirRestart'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: canKickBall of class  GameState */
#ifndef TOLUA_DISABLE_tolua_zeus_GameState_canKickBall00
static int tolua_zeus_GameState_canKickBall00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const GameState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const GameState* self = (const GameState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'canKickBall'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->canKickBall();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'canKickBall'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: canEitherKickBall of class  GameState */
#ifndef TOLUA_DISABLE_tolua_zeus_GameState_canEitherKickBall00
static int tolua_zeus_GameState_canEitherKickBall00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const GameState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const GameState* self = (const GameState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'canEitherKickBall'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->canEitherKickBall();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'canEitherKickBall'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_new00
static int tolua_zeus_CDribbleStatus_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CDribbleStatus",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CDribbleStatus* tolua_ret = (CDribbleStatus*)  Mtolua_new((CDribbleStatus)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CDribbleStatus");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_new00_local
static int tolua_zeus_CDribbleStatus_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CDribbleStatus",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CDribbleStatus* tolua_ret = (CDribbleStatus*)  Mtolua_new((CDribbleStatus)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CDribbleStatus");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dribbleOn of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_dribbleOn00
static int tolua_zeus_CDribbleStatus_dribbleOn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CDribbleStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CDribbleStatus* self = (const CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
  int number = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dribbleOn'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->dribbleOn(number);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dribbleOn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ballController of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_ballController00
static int tolua_zeus_CDribbleStatus_ballController00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CDribbleStatus",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CDribbleStatus* self = (const CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ballController'", NULL);
#endif
  {
   int tolua_ret = (int)  self->ballController();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ballController'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ballControlled of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_ballControlled00
static int tolua_zeus_CDribbleStatus_ballControlled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CDribbleStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CDribbleStatus* self = (const CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
  int number = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ballControlled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ballControlled(number);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ballControlled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dribbleStartPosValid of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_dribbleStartPosValid00
static int tolua_zeus_CDribbleStatus_dribbleStartPosValid00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CDribbleStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CDribbleStatus* self = (const CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
  int number = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dribbleStartPosValid'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->dribbleStartPosValid(number);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dribbleStartPosValid'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lastBallController of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_lastBallController00
static int tolua_zeus_CDribbleStatus_lastBallController00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CDribbleStatus",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CDribbleStatus* self = (const CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lastBallController'", NULL);
#endif
  {
   int tolua_ret = (int)  self->lastBallController();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lastBallController'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lastBallController of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_lastBallController01
static int tolua_zeus_CDribbleStatus_lastBallController01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CDribbleStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CDribbleStatus* self = (const CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
  int number = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lastBallController'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->lastBallController(number);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CDribbleStatus_lastBallController00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLastBallController of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_setLastBallController00
static int tolua_zeus_CDribbleStatus_setLastBallController00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CDribbleStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CDribbleStatus* self = (CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
  int number = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLastBallController'", NULL);
#endif
  {
   self->setLastBallController(number);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLastBallController'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dribbleStartPos of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_dribbleStartPos00
static int tolua_zeus_CDribbleStatus_dribbleStartPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CDribbleStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CDribbleStatus* self = (const CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
  int number = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dribbleStartPos'", NULL);
#endif
  {
   const CGeoPoint& tolua_ret = (const CGeoPoint&)  self->dribbleStartPos(number);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CGeoPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dribbleStartPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dribbleStartCycle of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_dribbleStartCycle00
static int tolua_zeus_CDribbleStatus_dribbleStartCycle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CDribbleStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CDribbleStatus* self = (const CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
  int number = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dribbleStartCycle'", NULL);
#endif
  {
   int tolua_ret = (int)  self->dribbleStartCycle(number);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dribbleStartCycle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDribbleOn of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_setDribbleOn00
static int tolua_zeus_CDribbleStatus_setDribbleOn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CDribbleStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CDribbleStatus* self = (CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
  int number = ((int)  tolua_tonumber(tolua_S,2,0));
  int cycle = ((int)  tolua_tonumber(tolua_S,3,0));
  const CGeoPoint* pos = ((const CGeoPoint*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDribbleOn'", NULL);
#endif
  {
   self->setDribbleOn(number,cycle,*pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDribbleOn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDribbleOff of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_setDribbleOff00
static int tolua_zeus_CDribbleStatus_setDribbleOff00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CDribbleStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CDribbleStatus* self = (CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
  int number = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDribbleOff'", NULL);
#endif
  {
   self->setDribbleOff(number);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDribbleOff'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDribbleStartPosLost of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_setDribbleStartPosLost00
static int tolua_zeus_CDribbleStatus_setDribbleStartPosLost00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CDribbleStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CDribbleStatus* self = (CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
  int number = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDribbleStartPosLost'", NULL);
#endif
  {
   self->setDribbleStartPosLost(number);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDribbleStartPosLost'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBallControlled of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_setBallControlled00
static int tolua_zeus_CDribbleStatus_setBallControlled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CDribbleStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CDribbleStatus* self = (CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
  int number = ((int)  tolua_tonumber(tolua_S,2,0));
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBallControlled'", NULL);
#endif
  {
   self->setBallControlled(number,*p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBallControlled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBallLost of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_setBallLost00
static int tolua_zeus_CDribbleStatus_setBallLost00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CDribbleStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CDribbleStatus* self = (CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
  int number = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBallLost'", NULL);
#endif
  {
   self->setBallLost(number);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBallLost'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ballControlStarPos of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_ballControlStarPos00
static int tolua_zeus_CDribbleStatus_ballControlStarPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CDribbleStatus",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CDribbleStatus* self = (const CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ballControlStarPos'", NULL);
#endif
  {
   const CGeoPoint& tolua_ret = (const CGeoPoint&)  self->ballControlStarPos();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CGeoPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ballControlStarPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: needReleaseBall of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_needReleaseBall00
static int tolua_zeus_CDribbleStatus_needReleaseBall00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CDribbleStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CDribbleStatus* self = (const CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
  int number = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'needReleaseBall'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->needReleaseBall(number);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'needReleaseBall'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNeedNotReleaseBall of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_setNeedNotReleaseBall00
static int tolua_zeus_CDribbleStatus_setNeedNotReleaseBall00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CDribbleStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CDribbleStatus* self = (CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
  int number = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNeedNotReleaseBall'", NULL);
#endif
  {
   self->setNeedNotReleaseBall(number);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNeedNotReleaseBall'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMayNeedReleaseBall of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_setMayNeedReleaseBall00
static int tolua_zeus_CDribbleStatus_setMayNeedReleaseBall00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CDribbleStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CDribbleStatus* self = (CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
  int number = ((int)  tolua_tonumber(tolua_S,2,0));
  const CGeoPoint* pos = ((const CGeoPoint*)  tolua_tousertype(tolua_S,3,0));
  bool dribbling = ((bool)  tolua_toboolean(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMayNeedReleaseBall'", NULL);
#endif
  {
   self->setMayNeedReleaseBall(number,*pos,dribbling);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMayNeedReleaseBall'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clearDribbleCommand of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_clearDribbleCommand00
static int tolua_zeus_CDribbleStatus_clearDribbleCommand00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CDribbleStatus",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CDribbleStatus* self = (CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clearDribbleCommand'", NULL);
#endif
  {
   self->clearDribbleCommand();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearDribbleCommand'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDribbleCommand of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_setDribbleCommand00
static int tolua_zeus_CDribbleStatus_setDribbleCommand00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CDribbleStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CDribbleStatus* self = (CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
  unsigned char power = ((unsigned char)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDribbleCommand'", NULL);
#endif
  {
   self->setDribbleCommand(num,power);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDribbleCommand'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDribbleCommand of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_getDribbleCommand00
static int tolua_zeus_CDribbleStatus_getDribbleCommand00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CDribbleStatus",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CDribbleStatus* self = (CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDribbleCommand'", NULL);
#endif
  {
   unsigned char tolua_ret = (unsigned char)  self->getDribbleCommand(num);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDribbleCommand'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ballControlled of class  CDribbleStatus */
#ifndef TOLUA_DISABLE_tolua_zeus_CDribbleStatus_ballControlled01
static int tolua_zeus_CDribbleStatus_ballControlled01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CDribbleStatus",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CDribbleStatus* self = (CDribbleStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ballControlled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ballControlled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_CDribbleStatus_ballControlled00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::Normalize */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_Normalize00
static int tolua_zeus_Utils_Normalize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double angle = ((double)  tolua_tonumber(tolua_S,1,0));
  {
   double tolua_ret = (double)  Utils::Normalize(angle);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Normalize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::Polar2Vector */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_Polar2Vector00
static int tolua_zeus_Utils_Polar2Vector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double m = ((double)  tolua_tonumber(tolua_S,1,0));
  double angle = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   CVector tolua_ret = (CVector)  Utils::Polar2Vector(m,angle);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CVector));
     tolua_pushusertype(tolua_S,tolua_obj,"CVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Polar2Vector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::VectorDot */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_VectorDot00
static int tolua_zeus_Utils_VectorDot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CVector",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVector* v1 = ((const CVector*)  tolua_tousertype(tolua_S,1,0));
  const CVector* v2 = ((const CVector*)  tolua_tousertype(tolua_S,2,0));
  {
   double tolua_ret = (double)  Utils::VectorDot(*v1,*v2);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'VectorDot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::InBetween */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_InBetween00
static int tolua_zeus_Utils_InBetween00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CGeoPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CGeoPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,1,0));
  const CGeoPoint* p1 = ((const CGeoPoint*)  tolua_tousertype(tolua_S,2,0));
  const CGeoPoint* p2 = ((const CGeoPoint*)  tolua_tousertype(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  Utils::InBetween(*p,*p1,*p2);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'InBetween'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::InBetween */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_InBetween01
static int tolua_zeus_Utils_InBetween01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double v = ((double)  tolua_tonumber(tolua_S,1,0));
  double v1 = ((double)  tolua_tonumber(tolua_S,2,0));
  double v2 = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  Utils::InBetween(v,v1,v2);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_Utils_InBetween00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::AngleBetween */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_AngleBetween00
static int tolua_zeus_Utils_AngleBetween00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double d = ((double)  tolua_tonumber(tolua_S,1,0));
  double d1 = ((double)  tolua_tonumber(tolua_S,2,0));
  double d2 = ((double)  tolua_tonumber(tolua_S,3,0));
  double buffer = ((double)  tolua_tonumber(tolua_S,4,PARAM::Math::PI/30));
  {
   bool tolua_ret = (bool)  Utils::AngleBetween(d,d1,d2,buffer);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AngleBetween'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::InBetween */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_InBetween02
static int tolua_zeus_Utils_InBetween02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CVector",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CVector",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CVector",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CVector* v = ((const CVector*)  tolua_tousertype(tolua_S,1,0));
  const CVector* v1 = ((const CVector*)  tolua_tousertype(tolua_S,2,0));
  const CVector* v2 = ((const CVector*)  tolua_tousertype(tolua_S,3,0));
  double buffer = ((double)  tolua_tonumber(tolua_S,4,PARAM::Math::PI/30));
  {
   bool tolua_ret = (bool)  Utils::InBetween(*v,*v1,*v2,buffer);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_Utils_InBetween01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::Deg2Rad */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_Deg2Rad00
static int tolua_zeus_Utils_Deg2Rad00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double angle = ((double)  tolua_tonumber(tolua_S,1,0));
  {
   double tolua_ret = (double)  Utils::Deg2Rad(angle);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Deg2Rad'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::Rad2Deg */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_Rad2Deg00
static int tolua_zeus_Utils_Rad2Deg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double angle = ((double)  tolua_tonumber(tolua_S,1,0));
  {
   double tolua_ret = (double)  Utils::Rad2Deg(angle);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Rad2Deg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::MakeInField */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_MakeInField00
static int tolua_zeus_Utils_MakeInField00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,1,0));
  const double buffer = ((const double)  tolua_tonumber(tolua_S,2,0));
  {
   CGeoPoint tolua_ret = (CGeoPoint)  Utils::MakeInField(*p,buffer);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CGeoPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CGeoPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MakeInField'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::IsInField */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_IsInField00
static int tolua_zeus_Utils_IsInField00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoPoint p = *((const CGeoPoint*)  tolua_tousertype(tolua_S,1,0));
  double buffer = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  Utils::IsInField(p,buffer);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsInField'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::IsInFieldV2 */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_IsInFieldV200
static int tolua_zeus_Utils_IsInFieldV200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoPoint p = *((const CGeoPoint*)  tolua_tousertype(tolua_S,1,0));
  double buffer = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  Utils::IsInFieldV2(p,buffer);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsInFieldV2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::FieldLeft */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_FieldLeft00
static int tolua_zeus_Utils_FieldLeft00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   double tolua_ret = (double)  Utils::FieldLeft();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FieldLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::FieldRight */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_FieldRight00
static int tolua_zeus_Utils_FieldRight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   double tolua_ret = (double)  Utils::FieldRight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FieldRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::FieldTop */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_FieldTop00
static int tolua_zeus_Utils_FieldTop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   double tolua_ret = (double)  Utils::FieldTop();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FieldTop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::FieldBottom */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_FieldBottom00
static int tolua_zeus_Utils_FieldBottom00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   double tolua_ret = (double)  Utils::FieldBottom();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FieldBottom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::LeftTop */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_LeftTop00
static int tolua_zeus_Utils_LeftTop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGeoPoint tolua_ret = (CGeoPoint)  Utils::LeftTop();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CGeoPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CGeoPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LeftTop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::RightBottom */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_RightBottom00
static int tolua_zeus_Utils_RightBottom00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGeoPoint tolua_ret = (CGeoPoint)  Utils::RightBottom();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CGeoPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CGeoPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RightBottom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::Sign */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_Sign00
static int tolua_zeus_Utils_Sign00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double d = ((double)  tolua_tonumber(tolua_S,1,0));
  {
   int tolua_ret = (int)  Utils::Sign(d);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Sign'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::MakeOutOfOurPenaltyArea */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_MakeOutOfOurPenaltyArea00
static int tolua_zeus_Utils_MakeOutOfOurPenaltyArea00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,1,0));
  const double buffer = ((const double)  tolua_tonumber(tolua_S,2,0));
  {
   CGeoPoint tolua_ret = (CGeoPoint)  Utils::MakeOutOfOurPenaltyArea(*p,buffer);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CGeoPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CGeoPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MakeOutOfOurPenaltyArea'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::MakeOutOfCircleAndInField */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_MakeOutOfCircleAndInField00
static int tolua_zeus_Utils_MakeOutOfCircleAndInField00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoPoint* center = ((const CGeoPoint*)  tolua_tousertype(tolua_S,1,0));
  const double radius = ((const double)  tolua_tonumber(tolua_S,2,0));
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,3,0));
  const double buffer = ((const double)  tolua_tonumber(tolua_S,4,0));
  {
   CGeoPoint tolua_ret = (CGeoPoint)  Utils::MakeOutOfCircleAndInField(*center,radius,*p,buffer);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CGeoPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CGeoPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MakeOutOfCircleAndInField'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::InOurPenaltyArea */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_InOurPenaltyArea00
static int tolua_zeus_Utils_InOurPenaltyArea00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,1,0));
  const double buffer = ((const double)  tolua_tonumber(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  Utils::InOurPenaltyArea(*p,buffer);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'InOurPenaltyArea'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::InTheirPenaltyArea */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_InTheirPenaltyArea00
static int tolua_zeus_Utils_InTheirPenaltyArea00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoPoint* p = ((const CGeoPoint*)  tolua_tousertype(tolua_S,1,0));
  const double buffer = ((const double)  tolua_tonumber(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  Utils::InTheirPenaltyArea(*p,buffer);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'InTheirPenaltyArea'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::PlayerNumValid */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_PlayerNumValid00
static int tolua_zeus_Utils_PlayerNumValid00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int num = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  Utils::PlayerNumValid(num);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PlayerNumValid'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Utils::canGo */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_canGo00
static int tolua_zeus_Utils_canGo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CVisionModule",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CVisionModule* pVision = ((const CVisionModule*)  tolua_tousertype(tolua_S,1,0));
  const int num = ((const int)  tolua_tonumber(tolua_S,2,0));
  const CGeoPoint* target = ((const CGeoPoint*)  tolua_tousertype(tolua_S,3,0));
  const int flag = ((const int)  tolua_tonumber(tolua_S,4,0));
  const double avoidBuffer = ((const double)  tolua_tonumber(tolua_S,5,0));
  {
   bool tolua_ret = (bool)  Utils::canGo(pVision,num,*target,flag,avoidBuffer);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'canGo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Matrix<double> */
#ifndef TOLUA_DISABLE_tolua_zeus_Matrix_double__new00
static int tolua_zeus_Matrix_double__new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Matrix<double>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Matrix<double>* tolua_ret = (Matrix<double>*)  Mtolua_new((Matrix<double>)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Matrix<double>");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Matrix<double> */
#ifndef TOLUA_DISABLE_tolua_zeus_Matrix_double__new00_local
static int tolua_zeus_Matrix_double__new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Matrix<double>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Matrix<double>* tolua_ret = (Matrix<double>*)  Mtolua_new((Matrix<double>)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Matrix<double>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Matrix<double> */
#ifndef TOLUA_DISABLE_tolua_zeus_Matrix_double__delete00
static int tolua_zeus_Matrix_double__delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Matrix<double>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Matrix<double>* self = (Matrix<double>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Matrix<double> */
#ifndef TOLUA_DISABLE_tolua_zeus_Matrix_double__new01
static int tolua_zeus_Matrix_double__new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Matrix<double>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int rows = ((int)  tolua_tonumber(tolua_S,2,0));
  int columns = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   Matrix<double>* tolua_ret = (Matrix<double>*)  Mtolua_new((Matrix<double>)(rows,columns));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Matrix<double>");
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_Matrix_double__new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Matrix<double> */
#ifndef TOLUA_DISABLE_tolua_zeus_Matrix_double__new01_local
static int tolua_zeus_Matrix_double__new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Matrix<double>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int rows = ((int)  tolua_tonumber(tolua_S,2,0));
  int columns = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   Matrix<double>* tolua_ret = (Matrix<double>*)  Mtolua_new((Matrix<double>)(rows,columns));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Matrix<double>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_zeus_Matrix_double__new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setValue of class  Matrix<double> */
#ifndef TOLUA_DISABLE_tolua_zeus_Matrix_double__setValue00
static int tolua_zeus_Matrix_double__setValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Matrix<double>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Matrix<double>* self = (Matrix<double>*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  double value = ((double)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setValue'", NULL);
#endif
  {
   self->setValue(x,y,value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getValue of class  Matrix<double> */
#ifndef TOLUA_DISABLE_tolua_zeus_Matrix_double__getValue00
static int tolua_zeus_Matrix_double__getValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Matrix<double>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Matrix<double>* self = (Matrix<double>*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getValue'", NULL);
#endif
  {
   double tolua_ret = (double)  self->getValue(x,y);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Munkres */
#ifndef TOLUA_DISABLE_tolua_zeus_Munkres_new00
static int tolua_zeus_Munkres_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Munkres",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Munkres* tolua_ret = (Munkres*)  Mtolua_new((Munkres)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Munkres");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Munkres */
#ifndef TOLUA_DISABLE_tolua_zeus_Munkres_new00_local
static int tolua_zeus_Munkres_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Munkres",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Munkres* tolua_ret = (Munkres*)  Mtolua_new((Munkres)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Munkres");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Munkres */
#ifndef TOLUA_DISABLE_tolua_zeus_Munkres_delete00
static int tolua_zeus_Munkres_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Munkres",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Munkres* self = (Munkres*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: solve of class  Munkres */
#ifndef TOLUA_DISABLE_tolua_zeus_Munkres_solve00
static int tolua_zeus_Munkres_solve00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Munkres",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Matrix<double>",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Munkres* self = (Munkres*)  tolua_tousertype(tolua_S,1,0);
  Matrix<double>* tolua_var_18 = ((Matrix<double>*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'solve'", NULL);
#endif
  {
   self->solve(*tolua_var_18);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'solve'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE









////////////////////////////
/* function: Utils::MakeOutOfCircleAndInField */
#ifndef TOLUA_DISABLE_tolua_zeus_Utils_GetPoint00
static int tolua_zeus_Utils_GetPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CGeoPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGeoPoint* targetPoint1 = ((const CGeoPoint*)  tolua_tousertype(tolua_S,1,0));
  const double dir1 = ((const double)  tolua_tonumber(tolua_S,2,0));
  const CGeoPoint* targetPoint2 = ((const CGeoPoint*)  tolua_tousertype(tolua_S,3,0));
  const double dir2 = ((const double)  tolua_tonumber(tolua_S,4,0));
  {
   CGeoPoint tolua_ret = (CGeoPoint)  Utils::GetPoint(*targetPoint1,dir1,*targetPoint2,dir2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CGeoPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CGeoPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CGeoPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/////////////////////////////////

















/* Open function */
TOLUA_API int tolua_zeus_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,1);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CVector","CVector","",tolua_collect_CVector);
  #else
  tolua_cclass(tolua_S,"CVector","CVector","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CVector");
   tolua_function(tolua_S,"new",tolua_zeus_CVector_new00);
   tolua_function(tolua_S,"new_local",tolua_zeus_CVector_new00_local);
   tolua_function(tolua_S,".call",tolua_zeus_CVector_new00_local);
   tolua_function(tolua_S,"delete",tolua_zeus_CVector_delete00);
   tolua_function(tolua_S,"new",tolua_zeus_CVector_new01);
   tolua_function(tolua_S,"new_local",tolua_zeus_CVector_new01_local);
   tolua_function(tolua_S,".call",tolua_zeus_CVector_new01_local);
   tolua_function(tolua_S,"new",tolua_zeus_CVector_new02);
   tolua_function(tolua_S,"new_local",tolua_zeus_CVector_new02_local);
   tolua_function(tolua_S,".call",tolua_zeus_CVector_new02_local);
   tolua_function(tolua_S,"mod",tolua_zeus_CVector_mod00);
   tolua_function(tolua_S,"mod2",tolua_zeus_CVector_mod200);
   tolua_function(tolua_S,"dir",tolua_zeus_CVector_dir00);
   tolua_function(tolua_S,"x",tolua_zeus_CVector_x00);
   tolua_function(tolua_S,"y",tolua_zeus_CVector_y00);
   tolua_function(tolua_S,"value",tolua_zeus_CVector_value00);
   tolua_function(tolua_S,".add",tolua_zeus_CVector__add00);
   tolua_function(tolua_S,".sub",tolua_zeus_CVector__sub00);
   tolua_function(tolua_S,".mul",tolua_zeus_CVector__mul00);
   tolua_function(tolua_S,".div",tolua_zeus_CVector__div00);
   tolua_function(tolua_S,".sub",tolua_zeus_CVector__sub01);
   tolua_function(tolua_S,"rotate",tolua_zeus_CVector_rotate00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CGeoPoint","CGeoPoint","",tolua_collect_CGeoPoint);
  #else
  tolua_cclass(tolua_S,"CGeoPoint","CGeoPoint","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CGeoPoint");
   tolua_function(tolua_S,"new",tolua_zeus_CGeoPoint_new00);
   tolua_function(tolua_S,"new_local",tolua_zeus_CGeoPoint_new00_local);
   tolua_function(tolua_S,".call",tolua_zeus_CGeoPoint_new00_local);
   tolua_function(tolua_S,"delete",tolua_zeus_CGeoPoint_delete00);
   tolua_function(tolua_S,"new",tolua_zeus_CGeoPoint_new01);
   tolua_function(tolua_S,"new_local",tolua_zeus_CGeoPoint_new01_local);
   tolua_function(tolua_S,".call",tolua_zeus_CGeoPoint_new01_local);
   tolua_function(tolua_S,"new",tolua_zeus_CGeoPoint_new02);
   tolua_function(tolua_S,"new_local",tolua_zeus_CGeoPoint_new02_local);
   tolua_function(tolua_S,".call",tolua_zeus_CGeoPoint_new02_local);
   tolua_function(tolua_S,".eq",tolua_zeus_CGeoPoint__eq00);
   tolua_function(tolua_S,"x",tolua_zeus_CGeoPoint_x00);
   tolua_function(tolua_S,"y",tolua_zeus_CGeoPoint_y00);
   tolua_function(tolua_S,"dist",tolua_zeus_CGeoPoint_dist00);
   tolua_function(tolua_S,"dist2",tolua_zeus_CGeoPoint_dist200);
   tolua_function(tolua_S,".add",tolua_zeus_CGeoPoint__add00);
   tolua_function(tolua_S,".mul",tolua_zeus_CGeoPoint__mul00);
   tolua_function(tolua_S,".sub",tolua_zeus_CGeoPoint__sub00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CGeoLine","CGeoLine","",tolua_collect_CGeoLine);
  #else
  tolua_cclass(tolua_S,"CGeoLine","CGeoLine","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CGeoLine");
   tolua_function(tolua_S,"new",tolua_zeus_CGeoLine_new00);
   tolua_function(tolua_S,"new_local",tolua_zeus_CGeoLine_new00_local);
   tolua_function(tolua_S,".call",tolua_zeus_CGeoLine_new00_local);
   tolua_function(tolua_S,"new",tolua_zeus_CGeoLine_new01);
   tolua_function(tolua_S,"new_local",tolua_zeus_CGeoLine_new01_local);
   tolua_function(tolua_S,".call",tolua_zeus_CGeoLine_new01_local);
   tolua_function(tolua_S,"new",tolua_zeus_CGeoLine_new02);
   tolua_function(tolua_S,"new_local",tolua_zeus_CGeoLine_new02_local);
   tolua_function(tolua_S,".call",tolua_zeus_CGeoLine_new02_local);
   tolua_function(tolua_S,"calABC",tolua_zeus_CGeoLine_calABC00);
   tolua_function(tolua_S,"projection",tolua_zeus_CGeoLine_projection00);
   tolua_function(tolua_S,"point1",tolua_zeus_CGeoLine_point100);
   tolua_function(tolua_S,"point2",tolua_zeus_CGeoLine_point200);
   tolua_function(tolua_S,".eq",tolua_zeus_CGeoLine__eq00);
   tolua_function(tolua_S,"a",tolua_zeus_CGeoLine_a00);
   tolua_function(tolua_S,"b",tolua_zeus_CGeoLine_b00);
   tolua_function(tolua_S,"c",tolua_zeus_CGeoLine_c00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CGeoSegment","CGeoSegment","CGeoLine",tolua_collect_CGeoSegment);
  #else
  tolua_cclass(tolua_S,"CGeoSegment","CGeoSegment","CGeoLine",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CGeoSegment");
   tolua_function(tolua_S,"new",tolua_zeus_CGeoSegment_new00);
   tolua_function(tolua_S,"new_local",tolua_zeus_CGeoSegment_new00_local);
   tolua_function(tolua_S,".call",tolua_zeus_CGeoSegment_new00_local);
   tolua_function(tolua_S,"new",tolua_zeus_CGeoSegment_new01);
   tolua_function(tolua_S,"new_local",tolua_zeus_CGeoSegment_new01_local);
   tolua_function(tolua_S,".call",tolua_zeus_CGeoSegment_new01_local);
   tolua_function(tolua_S,"IsPointOnLineOnSegment",tolua_zeus_CGeoSegment_IsPointOnLineOnSegment00);
   tolua_function(tolua_S,"start",tolua_zeus_CGeoSegment_start00);
   tolua_function(tolua_S,"end",tolua_zeus_CGeoSegment_end00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CGeoLineLineIntersection","CGeoLineLineIntersection","",tolua_collect_CGeoLineLineIntersection);
  #else
  tolua_cclass(tolua_S,"CGeoLineLineIntersection","CGeoLineLineIntersection","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CGeoLineLineIntersection");
   tolua_function(tolua_S,"new",tolua_zeus_CGeoLineLineIntersection_new00);
   tolua_function(tolua_S,"new_local",tolua_zeus_CGeoLineLineIntersection_new00_local);
   tolua_function(tolua_S,".call",tolua_zeus_CGeoLineLineIntersection_new00_local);
   tolua_function(tolua_S,"Intersectant",tolua_zeus_CGeoLineLineIntersection_Intersectant00);
   tolua_function(tolua_S,"IntersectPoint",tolua_zeus_CGeoLineLineIntersection_IntersectPoint00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CGeoRectangle","CGeoRectangle","",tolua_collect_CGeoRectangle);
  #else
  tolua_cclass(tolua_S,"CGeoRectangle","CGeoRectangle","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CGeoRectangle");
   tolua_function(tolua_S,"new",tolua_zeus_CGeoRectangle_new00);
   tolua_function(tolua_S,"new_local",tolua_zeus_CGeoRectangle_new00_local);
   tolua_function(tolua_S,".call",tolua_zeus_CGeoRectangle_new00_local);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CGeoLineRectangleIntersection","CGeoLineRectangleIntersection","",tolua_collect_CGeoLineRectangleIntersection);
  #else
  tolua_cclass(tolua_S,"CGeoLineRectangleIntersection","CGeoLineRectangleIntersection","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CGeoLineRectangleIntersection");
   tolua_function(tolua_S,"new",tolua_zeus_CGeoLineRectangleIntersection_new00);
   tolua_function(tolua_S,"new_local",tolua_zeus_CGeoLineRectangleIntersection_new00_local);
   tolua_function(tolua_S,".call",tolua_zeus_CGeoLineRectangleIntersection_new00_local);
   tolua_function(tolua_S,"intersectant",tolua_zeus_CGeoLineRectangleIntersection_intersectant00);
   tolua_function(tolua_S,"point1",tolua_zeus_CGeoLineRectangleIntersection_point100);
   tolua_function(tolua_S,"point2",tolua_zeus_CGeoLineRectangleIntersection_point200);
  tolua_endmodule(tolua_S);
  tolua_variable(tolua_S,"vision",tolua_get_vision_ptr,tolua_set_vision_ptr);
  tolua_variable(tolua_S,"kickStatus",tolua_get_kickStatus_ptr,tolua_set_kickStatus_ptr);
  tolua_variable(tolua_S,"dribbleStatus",tolua_get_dribbleStatus_ptr,tolua_set_dribbleStatus_ptr);
  tolua_variable(tolua_S,"debugEngine",tolua_get_debugEngine_ptr,tolua_set_debugEngine_ptr);
  tolua_variable(tolua_S,"world",tolua_get_world_ptr,tolua_set_world_ptr);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ObjectPoseT","ObjectPoseT","",tolua_collect_ObjectPoseT);
  #else
  tolua_cclass(tolua_S,"ObjectPoseT","ObjectPoseT","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ObjectPoseT");
   tolua_function(tolua_S,"new",tolua_zeus_ObjectPoseT_new00);
   tolua_function(tolua_S,"new_local",tolua_zeus_ObjectPoseT_new00_local);
   tolua_function(tolua_S,".call",tolua_zeus_ObjectPoseT_new00_local);
   tolua_function(tolua_S,"Pos",tolua_zeus_ObjectPoseT_Pos00);
   tolua_function(tolua_S,"SetPos",tolua_zeus_ObjectPoseT_SetPos00);
   tolua_function(tolua_S,"SetPos",tolua_zeus_ObjectPoseT_SetPos01);
   tolua_function(tolua_S,"X",tolua_zeus_ObjectPoseT_X00);
   tolua_function(tolua_S,"Y",tolua_zeus_ObjectPoseT_Y00);
   tolua_function(tolua_S,"SetVel",tolua_zeus_ObjectPoseT_SetVel00);
   tolua_function(tolua_S,"SetVel",tolua_zeus_ObjectPoseT_SetVel01);
   tolua_function(tolua_S,"Vel",tolua_zeus_ObjectPoseT_Vel00);
   tolua_function(tolua_S,"VelX",tolua_zeus_ObjectPoseT_VelX00);
   tolua_function(tolua_S,"VelY",tolua_zeus_ObjectPoseT_VelY00);
   tolua_function(tolua_S,"SetValid",tolua_zeus_ObjectPoseT_SetValid00);
   tolua_function(tolua_S,"Valid",tolua_zeus_ObjectPoseT_Valid00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"VisionObjectT","VisionObjectT","",NULL);
  tolua_beginmodule(tolua_S,"VisionObjectT");
   tolua_function(tolua_S,"RawPos",tolua_zeus_VisionObjectT_RawPos00);
   tolua_function(tolua_S,"SetRawPos",tolua_zeus_VisionObjectT_SetRawPos00);
   tolua_function(tolua_S,"SetRawPos",tolua_zeus_VisionObjectT_SetRawPos01);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"MobileVisionT","MobileVisionT","ObjectPoseT",NULL);
  tolua_beginmodule(tolua_S,"MobileVisionT");
   tolua_variable(tolua_S,"__VisionObjectT__",tolua_get_MobileVisionT___VisionObjectT__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"PlayerPoseT","PlayerPoseT","ObjectPoseT",tolua_collect_PlayerPoseT);
  #else
  tolua_cclass(tolua_S,"PlayerPoseT","PlayerPoseT","ObjectPoseT",NULL);
  #endif
  tolua_beginmodule(tolua_S,"PlayerPoseT");
   tolua_function(tolua_S,"new",tolua_zeus_PlayerPoseT_new00);
   tolua_function(tolua_S,"new_local",tolua_zeus_PlayerPoseT_new00_local);
   tolua_function(tolua_S,".call",tolua_zeus_PlayerPoseT_new00_local);
   tolua_function(tolua_S,"Dir",tolua_zeus_PlayerPoseT_Dir00);
   tolua_function(tolua_S,"SetDir",tolua_zeus_PlayerPoseT_SetDir00);
   tolua_function(tolua_S,"RotVel",tolua_zeus_PlayerPoseT_RotVel00);
   tolua_function(tolua_S,"SetRotVel",tolua_zeus_PlayerPoseT_SetRotVel00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"PlayerTypeT","PlayerTypeT","",NULL);
  tolua_beginmodule(tolua_S,"PlayerTypeT");
   tolua_function(tolua_S,"SetType",tolua_zeus_PlayerTypeT_SetType00);
   tolua_function(tolua_S,"Type",tolua_zeus_PlayerTypeT_Type00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"PlayerVisionT","PlayerVisionT","PlayerPoseT",NULL);
  tolua_beginmodule(tolua_S,"PlayerVisionT");
   tolua_variable(tolua_S,"__VisionObjectT__",tolua_get_PlayerVisionT___VisionObjectT__,NULL);
   tolua_variable(tolua_S,"__PlayerTypeT__",tolua_get_PlayerVisionT___PlayerTypeT__,NULL);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"PlayerCapabilityT","PlayerCapabilityT","",NULL);
  tolua_beginmodule(tolua_S,"PlayerCapabilityT");
   tolua_variable(tolua_S,"maxAccel",tolua_get_PlayerCapabilityT_maxAccel,tolua_set_PlayerCapabilityT_maxAccel);
   tolua_variable(tolua_S,"maxSpeed",tolua_get_PlayerCapabilityT_maxSpeed,tolua_set_PlayerCapabilityT_maxSpeed);
   tolua_variable(tolua_S,"maxAngularAccel",tolua_get_PlayerCapabilityT_maxAngularAccel,tolua_set_PlayerCapabilityT_maxAngularAccel);
   tolua_variable(tolua_S,"maxAngularSpeed",tolua_get_PlayerCapabilityT_maxAngularSpeed,tolua_set_PlayerCapabilityT_maxAngularSpeed);
   tolua_variable(tolua_S,"maxDec",tolua_get_PlayerCapabilityT_maxDec,tolua_set_PlayerCapabilityT_maxDec);
   tolua_variable(tolua_S,"maxAngularDec",tolua_get_PlayerCapabilityT_maxAngularDec,tolua_set_PlayerCapabilityT_maxAngularDec);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CWorldModel","CWorldModel","",tolua_collect_CWorldModel);
  #else
  tolua_cclass(tolua_S,"CWorldModel","CWorldModel","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CWorldModel");
   tolua_function(tolua_S,"new",tolua_zeus_CWorldModel_new00);
   tolua_function(tolua_S,"new_local",tolua_zeus_CWorldModel_new00_local);
   tolua_function(tolua_S,".call",tolua_zeus_CWorldModel_new00_local);
   tolua_function(tolua_S,"vision",tolua_zeus_CWorldModel_vision00);
   tolua_function(tolua_S,"SPlayFSMSwitchClearAll",tolua_zeus_CWorldModel_SPlayFSMSwitchClearAll00);
   tolua_function(tolua_S,"KickDirArrived",tolua_zeus_CWorldModel_KickDirArrived00);
   tolua_function(tolua_S,"IsBallKicked",tolua_zeus_CWorldModel_IsBallKicked00);
   tolua_function(tolua_S,"IsInfraredOn",tolua_zeus_CWorldModel_IsInfraredOn00);
   tolua_function(tolua_S,"InfraredOnCount",tolua_zeus_CWorldModel_InfraredOnCount00);
   tolua_function(tolua_S,"InfraredOffCount",tolua_zeus_CWorldModel_InfraredOffCount00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CVisionModule","CVisionModule","",tolua_collect_CVisionModule);
  #else
  tolua_cclass(tolua_S,"CVisionModule","CVisionModule","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CVisionModule");
   tolua_function(tolua_S,"new",tolua_zeus_CVisionModule_new00);
   tolua_function(tolua_S,"new_local",tolua_zeus_CVisionModule_new00_local);
   tolua_function(tolua_S,".call",tolua_zeus_CVisionModule_new00_local);
   tolua_function(tolua_S,"delete",tolua_zeus_CVisionModule_delete00);
   tolua_function(tolua_S,"getValidNum",tolua_zeus_CVisionModule_getValidNum00);
   tolua_function(tolua_S,"getTheirValidNum",tolua_zeus_CVisionModule_getTheirValidNum00);
   tolua_function(tolua_S,"allPlayer",tolua_zeus_CVisionModule_allPlayer00);
   tolua_function(tolua_S,"ourPlayer",tolua_zeus_CVisionModule_ourPlayer00);
   tolua_function(tolua_S,"theirPlayer",tolua_zeus_CVisionModule_theirPlayer00);
   tolua_function(tolua_S,"ball",tolua_zeus_CVisionModule_ball00);
   tolua_function(tolua_S,"ourPlayer",tolua_zeus_CVisionModule_ourPlayer01);
   tolua_function(tolua_S,"theirPlayer",tolua_zeus_CVisionModule_theirPlayer01);
   tolua_function(tolua_S,"ball",tolua_zeus_CVisionModule_ball01);
   tolua_function(tolua_S,"rawBall",tolua_zeus_CVisionModule_rawBall00);
   tolua_function(tolua_S,"getBallPlacementPosition",tolua_zeus_CVisionModule_getBallPlacementPosition00);
   tolua_function(tolua_S,"ourRawPlayer",tolua_zeus_CVisionModule_ourRawPlayer00);
   tolua_function(tolua_S,"theirRawPlayer",tolua_zeus_CVisionModule_theirRawPlayer00);
   tolua_function(tolua_S,"setPlayerCommand",tolua_zeus_CVisionModule_setPlayerCommand00);
   tolua_function(tolua_S,"gameState",tolua_zeus_CVisionModule_gameState00);
   tolua_function(tolua_S,"playerLostTime",tolua_zeus_CVisionModule_playerLostTime00);
   tolua_function(tolua_S,"getCurrentRefereeMsg",tolua_zeus_CVisionModule_getCurrentRefereeMsg00);
   tolua_function(tolua_S,"getNextRefereeMsg",tolua_zeus_CVisionModule_getNextRefereeMsg00);
   tolua_function(tolua_S,"getLuaRefereeMsg",tolua_zeus_CVisionModule_getLuaRefereeMsg00);
   tolua_function(tolua_S,"getCycle",tolua_zeus_CVisionModule_getCycle00);
   tolua_function(tolua_S,"getLastCycle",tolua_zeus_CVisionModule_getLastCycle00);
   tolua_function(tolua_S,"getSide",tolua_zeus_CVisionModule_getSide00);
   tolua_function(tolua_S,"getOurGoal",tolua_zeus_CVisionModule_getOurGoal00);
   tolua_function(tolua_S,"getTheirGoal",tolua_zeus_CVisionModule_getTheirGoal00);
   tolua_function(tolua_S,"getTimeRemain",tolua_zeus_CVisionModule_getTimeRemain00);
   tolua_function(tolua_S,"getBallVelStable",tolua_zeus_CVisionModule_getBallVelStable00);
   tolua_function(tolua_S,"ballVelValid",tolua_zeus_CVisionModule_ballVelValid00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CGDebugEngine","CGDebugEngine","",tolua_collect_CGDebugEngine);
  #else
  tolua_cclass(tolua_S,"CGDebugEngine","CGDebugEngine","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CGDebugEngine");
   tolua_function(tolua_S,"new",tolua_zeus_CGDebugEngine_new00);
   tolua_function(tolua_S,"new_local",tolua_zeus_CGDebugEngine_new00_local);
   tolua_function(tolua_S,".call",tolua_zeus_CGDebugEngine_new00_local);
   tolua_function(tolua_S,"delete",tolua_zeus_CGDebugEngine_delete00);
   tolua_function(tolua_S,"gui_debug_x",tolua_zeus_CGDebugEngine_gui_debug_x00);
   tolua_function(tolua_S,"gui_debug_line",tolua_zeus_CGDebugEngine_gui_debug_line00);
   tolua_function(tolua_S,"gui_debug_arc",tolua_zeus_CGDebugEngine_gui_debug_arc00);
   tolua_function(tolua_S,"gui_debug_triangle",tolua_zeus_CGDebugEngine_gui_debug_triangle00);
   tolua_function(tolua_S,"gui_debug_robot",tolua_zeus_CGDebugEngine_gui_debug_robot00);
   tolua_function(tolua_S,"gui_debug_msg",tolua_zeus_CGDebugEngine_gui_debug_msg00);
   tolua_function(tolua_S,"gui_debug_curve",tolua_zeus_CGDebugEngine_gui_debug_curve00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CKickStatus","CKickStatus","",tolua_collect_CKickStatus);
  #else
  tolua_cclass(tolua_S,"CKickStatus","CKickStatus","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CKickStatus");
   tolua_function(tolua_S,"new",tolua_zeus_CKickStatus_new00);
   tolua_function(tolua_S,"new_local",tolua_zeus_CKickStatus_new00_local);
   tolua_function(tolua_S,".call",tolua_zeus_CKickStatus_new00_local);
   tolua_function(tolua_S,"setKick",tolua_zeus_CKickStatus_setKick00);
   tolua_function(tolua_S,"setChipKick",tolua_zeus_CKickStatus_setChipKick00);
   tolua_function(tolua_S,"setBothKick",tolua_zeus_CKickStatus_setBothKick00);
   tolua_function(tolua_S,"setAllKick",tolua_zeus_CKickStatus_setAllKick00);
   tolua_function(tolua_S,"needKick",tolua_zeus_CKickStatus_needKick00);
   tolua_function(tolua_S,"getKickPower",tolua_zeus_CKickStatus_getKickPower00);
   tolua_function(tolua_S,"getChipKickDist",tolua_zeus_CKickStatus_getChipKickDist00);
   tolua_function(tolua_S,"getPassDist",tolua_zeus_CKickStatus_getPassDist00);
   tolua_function(tolua_S,"getKiker",tolua_zeus_CKickStatus_getKiker00);
   tolua_function(tolua_S,"clearAll",tolua_zeus_CKickStatus_clearAll00);
   tolua_function(tolua_S,"resetKick2ForceClose",tolua_zeus_CKickStatus_resetKick2ForceClose00);
   tolua_function(tolua_S,"updateForceClose",tolua_zeus_CKickStatus_updateForceClose00);
   tolua_function(tolua_S,"isForceClosed",tolua_zeus_CKickStatus_isForceClosed00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CTaskMediator","CTaskMediator","",tolua_collect_CTaskMediator);
  #else
  tolua_cclass(tolua_S,"CTaskMediator","CTaskMediator","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CTaskMediator");
   tolua_function(tolua_S,"new",tolua_zeus_CTaskMediator_new00);
   tolua_function(tolua_S,"new_local",tolua_zeus_CTaskMediator_new00_local);
   tolua_function(tolua_S,".call",tolua_zeus_CTaskMediator_new00_local);
   tolua_function(tolua_S,"setBallHandler",tolua_zeus_CTaskMediator_setBallHandler00);
   tolua_function(tolua_S,"ballHandler",tolua_zeus_CTaskMediator_ballHandler00);
   tolua_function(tolua_S,"goalie",tolua_zeus_CTaskMediator_goalie00);
   tolua_function(tolua_S,"setPlayerTask",tolua_zeus_CTaskMediator_setPlayerTask00);
   tolua_function(tolua_S,"getPlayerTask",tolua_zeus_CTaskMediator_getPlayerTask00);
   tolua_function(tolua_S,"getPlayerTaskPriority",tolua_zeus_CTaskMediator_getPlayerTaskPriority00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"GameState","GameState","",tolua_collect_GameState);
  #else
  tolua_cclass(tolua_S,"GameState","GameState","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"GameState");
   tolua_function(tolua_S,"new",tolua_zeus_GameState_new00);
   tolua_function(tolua_S,"new_local",tolua_zeus_GameState_new00_local);
   tolua_function(tolua_S,".call",tolua_zeus_GameState_new00_local);
   tolua_function(tolua_S,"gameOn",tolua_zeus_GameState_gameOn00);
   tolua_function(tolua_S,"gameOff",tolua_zeus_GameState_gameOff00);
   tolua_function(tolua_S,"gameOver",tolua_zeus_GameState_gameOver00);
   tolua_function(tolua_S,"restart",tolua_zeus_GameState_restart00);
   tolua_function(tolua_S,"ourRestart",tolua_zeus_GameState_ourRestart00);
   tolua_function(tolua_S,"theirRestart",tolua_zeus_GameState_theirRestart00);
   tolua_function(tolua_S,"canKickBall",tolua_zeus_GameState_canKickBall00);
   tolua_function(tolua_S,"canEitherKickBall",tolua_zeus_GameState_canEitherKickBall00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CDribbleStatus","CDribbleStatus","",tolua_collect_CDribbleStatus);
  #else
  tolua_cclass(tolua_S,"CDribbleStatus","CDribbleStatus","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CDribbleStatus");
   tolua_function(tolua_S,"new",tolua_zeus_CDribbleStatus_new00);
   tolua_function(tolua_S,"new_local",tolua_zeus_CDribbleStatus_new00_local);
   tolua_function(tolua_S,".call",tolua_zeus_CDribbleStatus_new00_local);
   tolua_function(tolua_S,"dribbleOn",tolua_zeus_CDribbleStatus_dribbleOn00);
   tolua_function(tolua_S,"ballController",tolua_zeus_CDribbleStatus_ballController00);
   tolua_function(tolua_S,"ballControlled",tolua_zeus_CDribbleStatus_ballControlled00);
   tolua_function(tolua_S,"dribbleStartPosValid",tolua_zeus_CDribbleStatus_dribbleStartPosValid00);
   tolua_function(tolua_S,"lastBallController",tolua_zeus_CDribbleStatus_lastBallController00);
   tolua_function(tolua_S,"lastBallController",tolua_zeus_CDribbleStatus_lastBallController01);
   tolua_function(tolua_S,"setLastBallController",tolua_zeus_CDribbleStatus_setLastBallController00);
   tolua_function(tolua_S,"dribbleStartPos",tolua_zeus_CDribbleStatus_dribbleStartPos00);
   tolua_function(tolua_S,"dribbleStartCycle",tolua_zeus_CDribbleStatus_dribbleStartCycle00);
   tolua_function(tolua_S,"setDribbleOn",tolua_zeus_CDribbleStatus_setDribbleOn00);
   tolua_function(tolua_S,"setDribbleOff",tolua_zeus_CDribbleStatus_setDribbleOff00);
   tolua_function(tolua_S,"setDribbleStartPosLost",tolua_zeus_CDribbleStatus_setDribbleStartPosLost00);
   tolua_function(tolua_S,"setBallControlled",tolua_zeus_CDribbleStatus_setBallControlled00);
   tolua_function(tolua_S,"setBallLost",tolua_zeus_CDribbleStatus_setBallLost00);
   tolua_function(tolua_S,"ballControlStarPos",tolua_zeus_CDribbleStatus_ballControlStarPos00);
   tolua_function(tolua_S,"needReleaseBall",tolua_zeus_CDribbleStatus_needReleaseBall00);
   tolua_function(tolua_S,"setNeedNotReleaseBall",tolua_zeus_CDribbleStatus_setNeedNotReleaseBall00);
   tolua_function(tolua_S,"setMayNeedReleaseBall",tolua_zeus_CDribbleStatus_setMayNeedReleaseBall00);
   tolua_function(tolua_S,"clearDribbleCommand",tolua_zeus_CDribbleStatus_clearDribbleCommand00);
   tolua_function(tolua_S,"setDribbleCommand",tolua_zeus_CDribbleStatus_setDribbleCommand00);
   tolua_function(tolua_S,"getDribbleCommand",tolua_zeus_CDribbleStatus_getDribbleCommand00);
   tolua_function(tolua_S,"ballControlled",tolua_zeus_CDribbleStatus_ballControlled01);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Utils",0);
  tolua_beginmodule(tolua_S,"Utils");
   tolua_function(tolua_S,"Normalize",tolua_zeus_Utils_Normalize00);
   tolua_function(tolua_S,"Polar2Vector",tolua_zeus_Utils_Polar2Vector00);
   tolua_function(tolua_S,"VectorDot",tolua_zeus_Utils_VectorDot00);
   tolua_function(tolua_S,"InBetween",tolua_zeus_Utils_InBetween00);
   tolua_function(tolua_S,"InBetween",tolua_zeus_Utils_InBetween01);
   tolua_function(tolua_S,"AngleBetween",tolua_zeus_Utils_AngleBetween00);
   tolua_function(tolua_S,"InBetween",tolua_zeus_Utils_InBetween02);
   tolua_function(tolua_S,"Deg2Rad",tolua_zeus_Utils_Deg2Rad00);
   tolua_function(tolua_S,"Rad2Deg",tolua_zeus_Utils_Rad2Deg00);
   tolua_function(tolua_S,"MakeInField",tolua_zeus_Utils_MakeInField00);
   tolua_function(tolua_S,"IsInField",tolua_zeus_Utils_IsInField00);
   tolua_function(tolua_S,"IsInFieldV2",tolua_zeus_Utils_IsInFieldV200);
   tolua_function(tolua_S,"FieldLeft",tolua_zeus_Utils_FieldLeft00);
   tolua_function(tolua_S,"FieldRight",tolua_zeus_Utils_FieldRight00);
   tolua_function(tolua_S,"FieldTop",tolua_zeus_Utils_FieldTop00);
   tolua_function(tolua_S,"FieldBottom",tolua_zeus_Utils_FieldBottom00);
   tolua_function(tolua_S,"LeftTop",tolua_zeus_Utils_LeftTop00);
   tolua_function(tolua_S,"RightBottom",tolua_zeus_Utils_RightBottom00);
   tolua_function(tolua_S,"Sign",tolua_zeus_Utils_Sign00);
   tolua_function(tolua_S,"MakeOutOfOurPenaltyArea",tolua_zeus_Utils_MakeOutOfOurPenaltyArea00);
   tolua_function(tolua_S,"MakeOutOfCircleAndInField",tolua_zeus_Utils_MakeOutOfCircleAndInField00);
   tolua_function(tolua_S,"InOurPenaltyArea",tolua_zeus_Utils_InOurPenaltyArea00);
   tolua_function(tolua_S,"InTheirPenaltyArea",tolua_zeus_Utils_InTheirPenaltyArea00);
   tolua_function(tolua_S,"PlayerNumValid",tolua_zeus_Utils_PlayerNumValid00);
   tolua_function(tolua_S,"canGo",tolua_zeus_Utils_canGo00);
   tolua_function(tolua_S,"GetPoint",tolua_zeus_Utils_GetPoint00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Matrix_double_","Matrix<double>","",tolua_collect_Matrix_double_);
  #else
  tolua_cclass(tolua_S,"Matrix_double_","Matrix<double>","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Matrix_double_");
   tolua_function(tolua_S,"new",tolua_zeus_Matrix_double__new00);
   tolua_function(tolua_S,"new_local",tolua_zeus_Matrix_double__new00_local);
   tolua_function(tolua_S,".call",tolua_zeus_Matrix_double__new00_local);
   tolua_function(tolua_S,"delete",tolua_zeus_Matrix_double__delete00);
   tolua_function(tolua_S,"new",tolua_zeus_Matrix_double__new01);
   tolua_function(tolua_S,"new_local",tolua_zeus_Matrix_double__new01_local);
   tolua_function(tolua_S,".call",tolua_zeus_Matrix_double__new01_local);
   tolua_function(tolua_S,"setValue",tolua_zeus_Matrix_double__setValue00);
   tolua_function(tolua_S,"getValue",tolua_zeus_Matrix_double__getValue00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Munkres","Munkres","",tolua_collect_Munkres);
  #else
  tolua_cclass(tolua_S,"Munkres","Munkres","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Munkres");
   tolua_function(tolua_S,"new",tolua_zeus_Munkres_new00);
   tolua_function(tolua_S,"new_local",tolua_zeus_Munkres_new00_local);
   tolua_function(tolua_S,".call",tolua_zeus_Munkres_new00_local);
   tolua_function(tolua_S,"delete",tolua_zeus_Munkres_delete00);
   tolua_function(tolua_S,"solve",tolua_zeus_Munkres_solve00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_zeus (lua_State* tolua_S) {
 return tolua_zeus_open(tolua_S);
};
#endif

