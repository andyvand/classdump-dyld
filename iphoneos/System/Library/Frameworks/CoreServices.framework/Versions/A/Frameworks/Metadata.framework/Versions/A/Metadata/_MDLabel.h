/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/Metadata.framework/Versions/A/Metadata
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Metadata/Metadata-Structs.h>
@interface _MDLabel : NSObject {

	CFDictionaryRef _attrs;
	CFUUIDRef _uuid;
	CFUUIDRef _userUUID;
	SCD_Union_MD14 _attrBits;

}
-(SCD_Struct_MD15)_getUUIDBytesForUserUUID:(CFUUIDRef)arg1 ;
-(id)initWithUUID:(CFUUIDRef)arg1 attributes:(CFDictionaryRef)arg2 forUserUUID:(CFUUIDRef)arg3 ;
-(void*)getAttr:(CFStringRef)arg1 ;
-(void*)_copyXattrUpdatesKey;
-(CFURLRef)_findAndCacheIconURL;
-(id)initWithUUID:(CFUUIDRef)arg1 attributes:(CFDictionaryRef)arg2 ;
-(unsigned char)applyToItems:(CFArrayRef)arg1 withValue:(double)arg2 ;
-(CFDataRef)copyIconData;
-(CFUUIDRef)copyIconUUID;
-(void)updateAttrs:(CFDictionaryRef)arg1 ;
-(unsigned long long)_cfTypeID;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

