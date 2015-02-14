/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ABSyncManager : NSObject
+(id)sharedSyncManager;
+(id)defaultClientID;
+(id)toolPath;
+(id)clientID;
-(void)scheduleTrickleSync;
-(void)scheduleTrickleSyncWithOptions:(id)arg1 ;
-(void)scheduleTrickleSyncRetry:(unsigned long long)arg1 ;
-(char)canExecProcesses;
-(void)removeExisitingSyncSchedule;
-(char)isSyncScheduled;
-(void)_abSyncProcessDied:(id)arg1 ;
@end

