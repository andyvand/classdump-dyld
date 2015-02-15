/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/Versions/A/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GenerationalStorage/GenerationalStorage-Structs.h>
@interface GSStorageManager : NSObject
+(char)_isPermanentStorageSupportedForStatFSInfo:(statfs*)arg1 error:(id*)arg2 ;
+(char)_isPermanentStorageSupportedForFD:(int)arg1 error:(id*)arg2 ;
+(void)initialize;
+(id)manager;
-(void)_connectionWithDaemonWasLost;
-(id)stagingPrefixForDocumentID:(id)arg1 ;
-(char)isItemAtURLInsidePermanentStorage:(id)arg1 error:(id*)arg2 ;
-(id)permanentStorageForItemAtURL:(id)arg1 allocateIfNone:(char)arg2 error:(id*)arg3 ;
-(id)persistentIdentifierInStorage:(NSObject*)arg1 forAdditionNamed:(id)arg2 inNameSpace:(id)arg3 ;
-(char)isPermanentStorageSupportedAtURL:(id)arg1 error:(id*)arg2 ;
-(id)temporaryStorageForItemAtURL:(id)arg1 locatedAtURL:(id)arg2 error:(id*)arg3 ;
-(id)additionForItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 error:(id*)arg3 ;
-(char)removeTemporaryStorage:(id)arg1 error:(id*)arg2 ;
-(char)deallocateDocumentIDOfItemAtURL:(id)arg1 error:(id*)arg2 ;
@end

