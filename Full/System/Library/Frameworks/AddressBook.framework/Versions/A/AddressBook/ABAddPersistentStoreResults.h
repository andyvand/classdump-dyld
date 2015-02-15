/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSPersistentStoreCoordinator, NSPersistentStore;

@interface ABAddPersistentStoreResults : NSObject {

	NSPersistentStoreCoordinator* _coordinator;
	NSPersistentStore* _store;
	char _pristineDatabase;
	char _shouldCache;
	char _didMigrate;

}

@property (readonly) NSPersistentStoreCoordinator * coordinator;                   //@synthesize coordinator=_coordinator - In the implementation block
@property (readonly) NSPersistentStore * store;                                    //@synthesize store=_store - In the implementation block
@property (getter=isPristineDatabase,readonly) char pristineDatabase;              //@synthesize pristineDatabase=_pristineDatabase - In the implementation block
@property (readonly) char shouldCache;                                             //@synthesize shouldCache=_shouldCache - In the implementation block
@property (readonly) char didMigrate;                                              //@synthesize didMigrate=_didMigrate - In the implementation block
-(char)isPristineDatabase;
-(NSPersistentStoreCoordinator *)coordinator;
-(char)didMigrate;
-(id)initWithCoordinator:(id)arg1 store:(id)arg2 pristineDatabase:(char)arg3 shouldCache:(char)arg4 didMigrate:(char)arg5 ;
-(char)shouldCache;
-(NSPersistentStore *)store;
-(void)dealloc;
-(id)description;
@end

