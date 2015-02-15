/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSObject;

@interface ISyncFileLocker : NSObject {

	NSString* _path;
	NSString* _hostname;
	NSString* _hostuuid;
	NSObject* _delegate;
	double _secondsToTimeout;
	int _lockResult;

}
+(void)cleanupStaleLockDirectories;
+(id)stringFromISyncLockPotentialAction:(int)arg1 ;
+(id)stringFromISyncLockResult:(int)arg1 ;
+(void)_cleanupStaleLockDirectoriesAtPath:(id)arg1 ;
-(id)UUIDString;
-(void)dealloc;
-(id)path;
-(int)lock;
-(void)unlock;
-(void)refresh;
-(id)initWithPath:(id)arg1 delegate:(id)arg2 timeout:(double)arg3 ;
-(void)removeLockDirectory;
-(void)cleanupStaleLockDirectories;
-(id)computeHostname;
-(int)lockFileResultByAnalyzingLockFile:(id)arg1 reasonIfStealable:(out id*)arg2 ;
-(char)incrementCountAndReturnError:(id*)arg1 ;
-(id)lockDirectoryPath;
-(char)createLockDirectory:(id*)arg1 ;
-(char)removeLockDirectoryAndReturnError:(id*)arg1 ;
-(id)lockFileContentsDictionary;
-(id)lockInfoForDelegate:(id)arg1 ;
-(int)actionOnVerifyLockInfoFileAgainstCurrentProcess:(id)arg1 reason:(out id*)arg2 ;
-(char)decrementCountAndReturnError:(id*)arg1 ;
-(unsigned long long)refCount;
-(char)updateLockFileAndReturnError:(id*)arg1 ;
-(char)changeRetainCountIncrementing:(char)arg1 error:(id*)arg2 ;
-(id)lockFilePath;
-(int)actionTestingDirectoryExistance:(id)arg1 ;
-(int)actionOnVerifyIfLockInfoFileProcessIsRunning:(id)arg1 reason:(out id*)arg2 ;
-(int)actionOnVerifyFileAgeAndReturnReason:(out id*)arg1 ;
-(id)processProfile;
-(char)writeLockInfoFile:(id)arg1 error:(id*)arg2 ;
-(id)staleLockDirectoryPath;
-(char)matchesHostUUIDFromLockDictionary:(id)arg1 ;
-(char)matchesHostNameFromLockDictionary:(id)arg1 ;
-(char)_checkPIDisRunning:(long long)arg1 ;
-(char)isOnLocalHost;
-(char)isLockStaleOnNFS;
-(int)actionForApparentlyAbandonedLock:(id)arg1 onAttempt:(int)arg2 ;
@end

