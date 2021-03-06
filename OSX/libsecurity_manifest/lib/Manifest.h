#ifndef __MANIFEST_YOKE__
#define __MANIFEST_YOKE__


#include <security_utilities/security_utilities.h>
#include <security_utilities/cfclass.h>
#include "SecManifest.h"
#include "ManifestInternal.h"
#include "ManifestSigner.h"
#include "AppleManifest.h"



/*
 * Copyright (c) 2004,2011,2014 Apple Inc. All Rights Reserved.
 * 
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */



enum ManifestSignerType {kAppleSigner};

class Manifest
{

protected:
	ManifestInternal mManifestInternal;
	ManifestSigner *mManifestSigner;

public:
	
	Manifest ();

	virtual ~Manifest () throw ();
	
	ManifestInternal& GetManifestInternal () {return mManifestInternal;}
	ManifestSigner* GetSigner () {return mManifestSigner;}
	
	void MakeSigner (ManifestSignerType whichSigner);
};


#endif
