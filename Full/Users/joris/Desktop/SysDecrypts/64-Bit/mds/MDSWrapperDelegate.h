/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/mds
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MDSWrapperDelegate <NSObject>
@required
-(SCD_Struct_MD1*)tokenIDForUID:(unsigned)arg1 GID:(unsigned)arg2;
-(void)preHeatPermissionsForStore:(id)arg1 items:(RLEOIDArrayRef)arg2;
-(void)preHeatPermissionsForStore:(id)arg1 initial:(char)arg2;
-(void)finishedWithOutstandingPermChecks:(id)arg1;
-(void)trackFinished:(id)arg1 code:(id)arg2 canceled:(BOOL)arg3;
-(id)rootScope:(id)arg1;
-(BOOL)backupActive:(id)arg1;
-(void)indexShutdownComplete:(id)arg1 result:(int)arg2;
-(void)finishedForStore:(id)arg1 task:(unsigned)arg2 requestID:(unsigned)arg3 result:(int)arg4;
-(void)assertPower:(id)arg1 description:(id)arg2;
-(void)releasePower:(id)arg1;
-(void)scheduleWake:(id)arg1 darkwake:(BOOL)arg2 description:(id)arg3 callback:(/*^block*/id)arg4;
-(int)syncStore:(id)arg1 counts:(SCD_Struct_MD25)arg2 canceled:(BOOL)arg3;
-(int)preSyncStore:(id)arg1 counts:(SCD_Struct_MD25)arg2;
-(void)recycleIndex:(id)arg1 message:(const char*)arg2;
-(void)reimportForStore:(id)arg1 item:(long long)arg2 withFlags:(int)arg3 accessToken:(SCD_Struct_MD1)arg4;
-(BOOL)repairForStore:(id)arg1 item:(long long)arg2 type:(int)arg3 flags:(int)arg4;
-(void)holdImports:(id)arg1;
-(void)resumeImports:(id)arg1;
-(void)gatheringEnded:(id)arg1 taskID:(unsigned)arg2;
-(void)update:(id)arg1 time:(double)arg2 taskID:(unsigned)arg3;
-(void)pushSafeSaveForStore:(id)arg1 data:(CFDictionaryRef)arg2 to:(long long)arg3 forUser:(unsigned)arg4 andGroup:(unsigned)arg5;
-(id)accessTokenForUid:(unsigned)arg1 gid:(unsigned)arg2;

@end

