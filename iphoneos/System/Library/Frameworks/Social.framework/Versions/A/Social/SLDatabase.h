/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSPersistentStoreCoordinator, NSManagedObjectContext, NSManagedObjectModel;

@interface SLDatabase : NSObject {

	NSString* _modelPath;
	NSString* _storePath;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectContext* _managedObjectContext;
	NSManagedObjectModel* _managedObjectModel;

}
-(id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 ;
-(id)initWithStoreName:(id)arg1 modelPath:(id)arg2 ;
-(void)_setUpManagedObjectContext;
-(void)_removeFilesAtURL:(id)arg1 forStoreCoordinator:(id)arg2 ;
-(id)newObjectForEntityNamed:(id)arg1 ;
-(id)_managedObjectModel;
-(id)_persistentStoreCoordinator;
-(char)save:(id*)arg1 ;
@end

