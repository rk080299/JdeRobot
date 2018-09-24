# -*- coding: utf-8 -*-
# **********************************************************************
#
# Copyright (c) 2003-2016 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************
#
# Ice version 3.6.3
#
# <auto-generated>
#
# Generated from file `recorder.ice'
#
# Warning: do not edit this file.
#
# </auto-generated>
#

from sys import version_info as _version_info_
import Ice, IcePy

# Start of module jderobot
_M_jderobot = Ice.openModule('jderobot')
__name__ = 'jderobot'

if 'recorder' not in _M_jderobot.__dict__:
    _M_jderobot.recorder = Ice.createTempClass()
    class recorder(Ice.Object):
        def __init__(self):
            if Ice.getType(self) == _M_jderobot.recorder:
                raise RuntimeError('jderobot.recorder is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::jderobot::recorder')

        def ice_id(self, current=None):
            return '::jderobot::recorder'

        def ice_staticId():
            return '::jderobot::recorder'
        ice_staticId = staticmethod(ice_staticId)

        def saveLog(self, name, seconds, current=None):
            pass

        def saveVideo(self, path, name, seconds, current=None):
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_jderobot._t_recorder)

        __repr__ = __str__

    _M_jderobot.recorderPrx = Ice.createTempClass()
    class recorderPrx(Ice.ObjectPrx):

        def saveLog(self, name, seconds, _ctx=None):
            return _M_jderobot.recorder._op_saveLog.invoke(self, ((name, seconds), _ctx))

        def begin_saveLog(self, name, seconds, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_jderobot.recorder._op_saveLog.begin(self, ((name, seconds), _response, _ex, _sent, _ctx))

        def end_saveLog(self, _r):
            return _M_jderobot.recorder._op_saveLog.end(self, _r)

        def saveVideo(self, path, name, seconds, _ctx=None):
            return _M_jderobot.recorder._op_saveVideo.invoke(self, ((path, name, seconds), _ctx))

        def begin_saveVideo(self, path, name, seconds, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_jderobot.recorder._op_saveVideo.begin(self, ((path, name, seconds), _response, _ex, _sent, _ctx))

        def end_saveVideo(self, _r):
            return _M_jderobot.recorder._op_saveVideo.end(self, _r)

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_jderobot.recorderPrx.ice_checkedCast(proxy, '::jderobot::recorder', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_jderobot.recorderPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::jderobot::recorder'
        ice_staticId = staticmethod(ice_staticId)

    _M_jderobot._t_recorderPrx = IcePy.defineProxy('::jderobot::recorder', recorderPrx)

    _M_jderobot._t_recorder = IcePy.defineClass('::jderobot::recorder', recorder, -1, (), True, False, None, (), ())
    recorder._ice_type = _M_jderobot._t_recorder

    recorder._op_saveLog = IcePy.Operation('saveLog', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), IcePy._t_string, False, 0), ((), IcePy._t_int, False, 0)), (), ((), IcePy._t_bool, False, 0), ())
    recorder._op_saveVideo = IcePy.Operation('saveVideo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), IcePy._t_string, False, 0), ((), IcePy._t_string, False, 0), ((), IcePy._t_int, False, 0)), (), ((), IcePy._t_bool, False, 0), ())

    _M_jderobot.recorder = recorder
    del recorder

    _M_jderobot.recorderPrx = recorderPrx
    del recorderPrx

# End of module jderobot