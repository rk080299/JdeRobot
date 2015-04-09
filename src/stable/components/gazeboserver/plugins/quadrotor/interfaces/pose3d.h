// **********************************************************************
//
// Copyright (c) 2003-2011 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.4.2
//
// <auto-generated>
//
// Generated from file `pose3d.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __pose3d_h__
#define __pose3d_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/FactoryTableInit.h>
#include <IceUtil/ScopedArray.h>
#include <Ice/StreamF.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 304
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 2
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace jderobot
{

class Pose3DData;

class Pose3D;

}

}

namespace jderobot
{

class Pose3DData;
bool operator==(const Pose3DData&, const Pose3DData&);
bool operator<(const Pose3DData&, const Pose3DData&);

class Pose3D;
bool operator==(const Pose3D&, const Pose3D&);
bool operator<(const Pose3D&, const Pose3D&);

}

namespace IceInternal
{

::Ice::Object* upCast(::jderobot::Pose3DData*);
::IceProxy::Ice::Object* upCast(::IceProxy::jderobot::Pose3DData*);

::Ice::Object* upCast(::jderobot::Pose3D*);
::IceProxy::Ice::Object* upCast(::IceProxy::jderobot::Pose3D*);

}

namespace jderobot
{

typedef ::IceInternal::Handle< ::jderobot::Pose3DData> Pose3DDataPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::jderobot::Pose3DData> Pose3DDataPrx;

void __read(::IceInternal::BasicStream*, Pose3DDataPrx&);
void __patch__Pose3DDataPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::jderobot::Pose3D> Pose3DPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::jderobot::Pose3D> Pose3DPrx;

void __read(::IceInternal::BasicStream*, Pose3DPrx&);
void __patch__Pose3DPtr(void*, ::Ice::ObjectPtr&);

}

namespace jderobot
{

class Callback_Pose3D_getPose3DData_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_Pose3D_getPose3DData_Base> Callback_Pose3D_getPose3DDataPtr;

class Callback_Pose3D_setPose3DData_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_Pose3D_setPose3DData_Base> Callback_Pose3D_setPose3DDataPtr;

}

namespace IceProxy
{

namespace jderobot
{

class Pose3DData : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3DData> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3DData*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Pose3DData*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Pose3D : virtual public ::IceProxy::Ice::Object
{
public:

    ::jderobot::Pose3DDataPtr getPose3DData()
    {
        return getPose3DData(0);
    }
    ::jderobot::Pose3DDataPtr getPose3DData(const ::Ice::Context& __ctx)
    {
        return getPose3DData(&__ctx);
    }

    ::Ice::AsyncResultPtr begin_getPose3DData()
    {
        return begin_getPose3DData(0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getPose3DData(const ::Ice::Context& __ctx)
    {
        return begin_getPose3DData(&__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getPose3DData(const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getPose3DData(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getPose3DData(const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getPose3DData(&__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getPose3DData(const ::jderobot::Callback_Pose3D_getPose3DDataPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getPose3DData(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getPose3DData(const ::Ice::Context& __ctx, const ::jderobot::Callback_Pose3D_getPose3DDataPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getPose3DData(&__ctx, __del, __cookie);
    }

    ::jderobot::Pose3DDataPtr end_getPose3DData(const ::Ice::AsyncResultPtr&);
    
private:

    ::jderobot::Pose3DDataPtr getPose3DData(const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_getPose3DData(const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:

    ::Ice::Int setPose3DData(const ::jderobot::Pose3DDataPtr& data)
    {
        return setPose3DData(data, 0);
    }
    ::Ice::Int setPose3DData(const ::jderobot::Pose3DDataPtr& data, const ::Ice::Context& __ctx)
    {
        return setPose3DData(data, &__ctx);
    }

    ::Ice::AsyncResultPtr begin_setPose3DData(const ::jderobot::Pose3DDataPtr& data)
    {
        return begin_setPose3DData(data, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_setPose3DData(const ::jderobot::Pose3DDataPtr& data, const ::Ice::Context& __ctx)
    {
        return begin_setPose3DData(data, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_setPose3DData(const ::jderobot::Pose3DDataPtr& data, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setPose3DData(data, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setPose3DData(const ::jderobot::Pose3DDataPtr& data, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setPose3DData(data, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setPose3DData(const ::jderobot::Pose3DDataPtr& data, const ::jderobot::Callback_Pose3D_setPose3DDataPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setPose3DData(data, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setPose3DData(const ::jderobot::Pose3DDataPtr& data, const ::Ice::Context& __ctx, const ::jderobot::Callback_Pose3D_setPose3DDataPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setPose3DData(data, &__ctx, __del, __cookie);
    }

    ::Ice::Int end_setPose3DData(const ::Ice::AsyncResultPtr&);
    
private:

    ::Ice::Int setPose3DData(const ::jderobot::Pose3DDataPtr&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_setPose3DData(const ::jderobot::Pose3DDataPtr&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<Pose3D> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3D> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3D> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3D> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3D> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3D> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3D> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3D> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3D> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3D> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3D> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3D> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3D> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3D> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3D> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3D> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3D> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3D> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pose3D> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pose3D*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Pose3D*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

namespace IceDelegate
{

namespace jderobot
{

class Pose3DData : virtual public ::IceDelegate::Ice::Object
{
public:
};

class Pose3D : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::jderobot::Pose3DDataPtr getPose3DData(const ::Ice::Context*) = 0;

    virtual ::Ice::Int setPose3DData(const ::jderobot::Pose3DDataPtr&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace jderobot
{

class Pose3DData : virtual public ::IceDelegate::jderobot::Pose3DData,
                   virtual public ::IceDelegateM::Ice::Object
{
public:
};

class Pose3D : virtual public ::IceDelegate::jderobot::Pose3D,
               virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::jderobot::Pose3DDataPtr getPose3DData(const ::Ice::Context*);

    virtual ::Ice::Int setPose3DData(const ::jderobot::Pose3DDataPtr&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace jderobot
{

class Pose3DData : virtual public ::IceDelegate::jderobot::Pose3DData,
                   virtual public ::IceDelegateD::Ice::Object
{
public:
};

class Pose3D : virtual public ::IceDelegate::jderobot::Pose3D,
               virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::jderobot::Pose3DDataPtr getPose3DData(const ::Ice::Context*);

    virtual ::Ice::Int setPose3DData(const ::jderobot::Pose3DDataPtr&, const ::Ice::Context*);
};

}

}

namespace jderobot
{

class Pose3DData : virtual public ::Ice::Object
{
public:

    typedef Pose3DDataPrx ProxyType;
    typedef Pose3DDataPtr PointerType;
    
    Pose3DData() {}
    Pose3DData(::Ice::Float, ::Ice::Float, ::Ice::Float, ::Ice::Float, ::Ice::Float, ::Ice::Float, ::Ice::Float, ::Ice::Float);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
// COMPILERFIX: Stream API is not supported with VC++ 6
#if !defined(_MSC_VER) || (_MSC_VER >= 1300)
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
#endif

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~Pose3DData() {}

    friend class Pose3DData__staticInit;

public:

    ::Ice::Float x;

    ::Ice::Float y;

    ::Ice::Float z;

    ::Ice::Float h;

    ::Ice::Float q0;

    ::Ice::Float q1;

    ::Ice::Float q2;

    ::Ice::Float q3;
};

class Pose3DData__staticInit
{
public:

    ::jderobot::Pose3DData _init;
};

static Pose3DData__staticInit _Pose3DData_init;

inline bool operator==(const Pose3DData& l, const Pose3DData& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const Pose3DData& l, const Pose3DData& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

class Pose3D : virtual public ::Ice::Object
{
public:

    typedef Pose3DPrx ProxyType;
    typedef Pose3DPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::jderobot::Pose3DDataPtr getPose3DData(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPose3DData(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int setPose3DData(const ::jderobot::Pose3DDataPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPose3DData(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
// COMPILERFIX: Stream API is not supported with VC++ 6
#if !defined(_MSC_VER) || (_MSC_VER >= 1300)
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
#endif
};

inline bool operator==(const Pose3D& l, const Pose3D& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const Pose3D& l, const Pose3D& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

namespace jderobot
{

template<class T>
class CallbackNC_Pose3D_getPose3DData : public Callback_Pose3D_getPose3DData_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const ::jderobot::Pose3DDataPtr&);

    CallbackNC_Pose3D_getPose3DData(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::jderobot::Pose3DPrx __proxy = ::jderobot::Pose3DPrx::uncheckedCast(__result->getProxy());
        ::jderobot::Pose3DDataPtr __ret;
        try
        {
            __ret = __proxy->end_getPose3DData(__result);
        }
        catch(::Ice::Exception& ex)
        {
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
            __exception(__result, ex);
#else
            ::IceInternal::CallbackNC<T>::__exception(__result, ex);
#endif
            return;
        }
        if(response)
        {
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
            (callback.get()->*response)(__ret);
#else
            (::IceInternal::CallbackNC<T>::callback.get()->*response)(__ret);
#endif
        }
    }

    Response response;
};

template<class T> Callback_Pose3D_getPose3DDataPtr
newCallback_Pose3D_getPose3DData(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::jderobot::Pose3DDataPtr&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Pose3D_getPose3DData<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_Pose3D_getPose3DDataPtr
newCallback_Pose3D_getPose3DData(T* instance, void (T::*cb)(const ::jderobot::Pose3DDataPtr&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Pose3D_getPose3DData<T>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
class Callback_Pose3D_getPose3DData : public Callback_Pose3D_getPose3DData_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const ::jderobot::Pose3DDataPtr&, const CT&);

    Callback_Pose3D_getPose3DData(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::jderobot::Pose3DPrx __proxy = ::jderobot::Pose3DPrx::uncheckedCast(__result->getProxy());
        ::jderobot::Pose3DDataPtr __ret;
        try
        {
            __ret = __proxy->end_getPose3DData(__result);
        }
        catch(::Ice::Exception& ex)
        {
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
            __exception(__result, ex);
#else
            ::IceInternal::Callback<T, CT>::__exception(__result, ex);
#endif
            return;
        }
        if(response)
        {
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
            (callback.get()->*response)(__ret, CT::dynamicCast(__result->getCookie()));
#else
            (::IceInternal::Callback<T, CT>::callback.get()->*response)(__ret, CT::dynamicCast(__result->getCookie()));
#endif
        }
    }

    Response response;
};

template<class T, typename CT> Callback_Pose3D_getPose3DDataPtr
newCallback_Pose3D_getPose3DData(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::jderobot::Pose3DDataPtr&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Pose3D_getPose3DData<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_Pose3D_getPose3DDataPtr
newCallback_Pose3D_getPose3DData(T* instance, void (T::*cb)(const ::jderobot::Pose3DDataPtr&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Pose3D_getPose3DData<T, CT>(instance, cb, excb, sentcb);
}

template<class T>
class CallbackNC_Pose3D_setPose3DData : public Callback_Pose3D_setPose3DData_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(::Ice::Int);

    CallbackNC_Pose3D_setPose3DData(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::jderobot::Pose3DPrx __proxy = ::jderobot::Pose3DPrx::uncheckedCast(__result->getProxy());
        ::Ice::Int __ret;
        try
        {
            __ret = __proxy->end_setPose3DData(__result);
        }
        catch(::Ice::Exception& ex)
        {
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
            __exception(__result, ex);
#else
            ::IceInternal::CallbackNC<T>::__exception(__result, ex);
#endif
            return;
        }
        if(response)
        {
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
            (callback.get()->*response)(__ret);
#else
            (::IceInternal::CallbackNC<T>::callback.get()->*response)(__ret);
#endif
        }
    }

    Response response;
};

template<class T> Callback_Pose3D_setPose3DDataPtr
newCallback_Pose3D_setPose3DData(const IceUtil::Handle<T>& instance, void (T::*cb)(::Ice::Int), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Pose3D_setPose3DData<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_Pose3D_setPose3DDataPtr
newCallback_Pose3D_setPose3DData(T* instance, void (T::*cb)(::Ice::Int), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Pose3D_setPose3DData<T>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
class Callback_Pose3D_setPose3DData : public Callback_Pose3D_setPose3DData_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(::Ice::Int, const CT&);

    Callback_Pose3D_setPose3DData(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::jderobot::Pose3DPrx __proxy = ::jderobot::Pose3DPrx::uncheckedCast(__result->getProxy());
        ::Ice::Int __ret;
        try
        {
            __ret = __proxy->end_setPose3DData(__result);
        }
        catch(::Ice::Exception& ex)
        {
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
            __exception(__result, ex);
#else
            ::IceInternal::Callback<T, CT>::__exception(__result, ex);
#endif
            return;
        }
        if(response)
        {
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
            (callback.get()->*response)(__ret, CT::dynamicCast(__result->getCookie()));
#else
            (::IceInternal::Callback<T, CT>::callback.get()->*response)(__ret, CT::dynamicCast(__result->getCookie()));
#endif
        }
    }

    Response response;
};

template<class T, typename CT> Callback_Pose3D_setPose3DDataPtr
newCallback_Pose3D_setPose3DData(const IceUtil::Handle<T>& instance, void (T::*cb)(::Ice::Int, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Pose3D_setPose3DData<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_Pose3D_setPose3DDataPtr
newCallback_Pose3D_setPose3DData(T* instance, void (T::*cb)(::Ice::Int, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Pose3D_setPose3DData<T, CT>(instance, cb, excb, sentcb);
}

}

#endif