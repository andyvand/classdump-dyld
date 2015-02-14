/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FamilyControls.framework/Versions/A/FamilyControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FamilyControls/FamilyControls-Structs.h>
@class NSMutableDictionary;

@interface FCApp : NSObject {

	NSMutableDictionary* _dictionary;

}
+(id)appWithDictionary:(id)arg1 ;
+(id)appStoreRatingForString:(id)arg1 ;
+(id)appWithPath:(id)arg1 addingSubApps:(char)arg2 creatingSignature:(char)arg3 detached:(char)arg4 ;
+(id)appWithPath:(id)arg1 addingSubApps:(char)arg2 ;
+(id)appWithPath:(id)arg1 ;
+(void)setKeychainForCodesigning:(OpaqueSecKeychainRefRef)arg1 ;
-(id)bundleID;
-(void)setIsFromAppStore:(char)arg1 ;
-(void)setAppStoreRating:(id)arg1 ;
-(void)setSubApps:(id)arg1 ;
-(void)setDetachedSignature:(id)arg1 ;
-(id)initWithPath:(id)arg1 addingSubApps:(char)arg2 creatingSignature:(char)arg3 detached:(char)arg4 ;
-(id)subApps;
-(id)detachedSignature;
-(id)_stringWithOSType:(unsigned)arg1 ;
-(char)validateCodeSig:(id*)arg1 ;
-(void)readBundleInfo;
-(char)isFromAppStore;
-(id)appStoreRating;
-(id)_dictionary;
-(id)plistRepresentation;
-(id)appID;
-(void)setAppID:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setPath:(id)arg1 ;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setBundleID:(id)arg1 ;
@end

