/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SecurityInterface/SecurityInterface-Structs.h>
@interface SFKeychainStorage : NSObject
+(id)remoteStoreNameForKeychainRef:(OpaqueSecKeychainRefRef)arg1 ;
+(char)isCloudKeychainSyncEnabled;
+(id)displayNameForKeychainAtPath:(id)arg1 keychainRef:(OpaqueSecKeychainRefRef)arg2 ;
+(id)displayNameForKeychainAtPath:(id)arg1 ;
+(id)displayNameForKeychainRef:(OpaqueSecKeychainRefRef)arg1 ;
@end

