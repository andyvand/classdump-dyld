/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:09 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CoreWiFiLogging : NSObject
+(id)sharedSystem;
+(char)setLogging:(id)arg1 error:(id*)arg2 ;
+(char)setLogging:(id)arg1 inBPF:(id)arg2 inBT:(id)arg3 inEAPOL:(id)arg4 inIE:(id)arg5 inIO80211:(id)arg6 inJoin:(id)arg7 inScan:(id)arg8 inTimedAccess:(id)arg9 inWPS:(id)arg10 inXPC:(id)arg11 error:(id*)arg12 ;
+(id)queryLogging:(id*)arg1 ;
-(id)init;
-(void)dealloc;
@end

