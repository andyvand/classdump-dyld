/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSMappedObjectStore.h>

@interface NSXMLObjectStore : NSMappedObjectStore
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
+(char)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3 ;
+(void)_writeDocument:(id)arg1 toPath:(id)arg2 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(void)saveDocumentToPath:(id)arg1 ;
-(id)type;
@end

