//---------------------------------------------------------- -*- Mode: C++ -*-
// $Id$
//
// Created 2013/05/19
// Author: Mike Ovsiannikov
//
// Copyright 2013 Quantcast Corp.
//
// This file is part of Kosmos File System (KFS).
//
// Licensed under the Apache License, Version 2.0
// (the "License"); you may not use this file except in compliance with
// the License. You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License.
//
// Kerberos 5 service side authentication implementation.
//
//----------------------------------------------------------------------------

#ifndef KFS_KRB_SERVICE_H
#define KFS_KRB_SERVICE_H

namespace KFS
{
class KrbService
{
public:
    KrbService();
    ~KrbService();
    const char* Init(
        const char* inServeiceNamePtr);
    const char* Cleanup();
    const char* Request(
        const char* inDataPtr,
        int         inDataLen);
    const char* Reply(
        const char*& outReplyPtr,
        int&         outReplyLen,
        const char*& outSessionKeyPtr,
        int&         outSessionKeyLen);
    int GetErrorCode() const;
private:
    class Impl;
    Impl& mImpl;
    
};

}

#endif /* KFS_KRB_SERVICE_H */