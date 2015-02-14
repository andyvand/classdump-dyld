/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABAccountCollection;
@class ABPersistentStoreCoordinatorMap, ABPersistentStoreCoordinatorUpdater, NSString;

@interface ABPersistentStoreCoordinatorCache : NSObject {

	id<ABAccountCollection> _accountCollection;
	ABPersistentStoreCoordinatorMap* _coordinatorMap;
	ABPersistentStoreCoordinatorUpdater* _coordinatorUpdater;

}

@property (readonly) id<ABAccountCollection> accountCollection;              //@synthesize accountCollection=_accountCollection - In the implementation block
@property (copy,readonly) NSString * basePath; 
+(id)sharedInstance;
-(NSString *)basePath;
-(id<ABAccountCollection>)accountCollection;
-(id)coordinatorForAllSources;
-(id)coordinatorWithDatabasePath:(id)arg1 storeDescription:(id)arg2 ;
-(id)initWithAccountCollection:(id)arg1 readOnly:(char)arg2 ;
-(void)startObserving;
-(void)accountsDidChange:(id)arg1 ;
-(id)basePathForAccountWithIdentifier:(id)arg1 ;
-(char)addAllPersistentStoresAndReturnIsMainDatabasePristine;
-(void)dealloc;
@end

