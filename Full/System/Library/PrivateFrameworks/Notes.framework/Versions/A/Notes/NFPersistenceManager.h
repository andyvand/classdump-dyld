/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NFPersistenceManager : NSObject
+(id)managedObjectContext;
+(id)persistentStoreCoordinator;
+(id)notesContainerLibraryURL;
+(id)_validStoreURLInDataDirectory:(id)arg1 movingOldStoreIfNeeded:(char)arg2 withCoordinator:(id)arg3 error:(id*)arg4 ;
+(char)_backupExistingStore:(id)arg1 withCoordinator:(id)arg2 error:(id*)arg3 ;
+(id)_storeURLForVersion:(unsigned long long)arg1 inDataDirectory:(id)arg2 ;
+(void)setStoreCoordinatorIsReadOnly:(char)arg1 ;
+(id)existingObjectFromContext:(id)arg1 withExternalRecordURL:(id)arg2 error:(id*)arg3 ;
@end

