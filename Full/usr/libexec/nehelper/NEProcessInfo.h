/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/nehelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <nehelper/nehelper-Structs.h>
@interface NEProcessInfo : NSObject
+(id)copyUUIDsForExecutable:(id)arg1 ;
+(unsigned char)addPolicyForProcess:(NEPolicy_sRef)arg1 order:(unsigned*)arg2 processUUIDs:(id)arg3 pid:(int)arg4 checkEntitlement:(char)arg5 checkUID:(char)arg6 UID:(unsigned)arg7 policyResult:(CFStringRef)arg8 policyList:(id)arg9 ;
+(id)copyUUIDsForBundleId:(id)arg1 ;
+(CFUUIDRef)copyUUIDForSingleArch:(int)arg1 ;
+(id)copyUUIDsForFatBinary:(int)arg1 ;
+(void)initGlobals;
+(id)copyUUIDsFromExecutable:(const char*)arg1 ;
+(unsigned char)addPolicyUUID:(NEPolicy_sRef)arg1 order:(unsigned)arg2 UUIDRef:(CFUUIDRef)arg3 realUUIDRef:(CFUUIDRef)arg4 PID:(int)arg5 checkEntitlement:(char)arg6 checkUID:(char)arg7 UID:(unsigned)arg8 policyResult:(CFStringRef)arg9 policyList:(id)arg10 ;
+(id)getApplicationNameFromPlugin:(id)arg1 ;
-(id)init;
@end

