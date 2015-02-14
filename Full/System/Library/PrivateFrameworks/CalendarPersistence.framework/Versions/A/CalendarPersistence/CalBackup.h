/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CalBackup : NSObject
+(char)backupToPath:(id)arg1 backupRemoteCalendars:(char)arg2 error:(id*)arg3 ;
+(char)copyPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 required:(char)arg4 ;
+(char)trashPath:(id)arg1 error:(id*)arg2 required:(char)arg3 ;
+(char)movePath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 required:(char)arg4 ;
+(char)backupToPath:(id)arg1 error:(id*)arg2 ;
+(char)restoreToBackupAtPath:(id)arg1 ;
+(id)defaultLocalCalendarAttachmentsBackupPath;
+(char)backupLocalCalendarAttachmentsToPath:(id)arg1 ;
+(id)defaultBackupFileName;
+(id)backupFileExtension;
+(id)defaultBackupFileNameWithExtension;
@end

