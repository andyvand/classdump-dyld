/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:42:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <backupd/backupd-Structs.h>
@interface MBRestoreFailuresManager : NSObject
+(id)sharedManager;
-(id)restoreFailuresForDataClass:(id)arg1 assetType:(id)arg2 range:(NSRange)arg3 ;
-(id)_iconDataForRestoreFailure:(id)arg1 error:(id*)arg2 ;
-(BOOL)recordRestoreFailure:(id)arg1 error:(id*)arg2 ;
-(unsigned)countOfRestoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 ;
@end
