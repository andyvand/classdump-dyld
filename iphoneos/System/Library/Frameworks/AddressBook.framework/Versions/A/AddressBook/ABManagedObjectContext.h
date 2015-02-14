/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObjectContext.h>

@protocol ABAddressBookReference;
@class ABAddressBook;

@interface ABManagedObjectContext : NSManagedObjectContext {

	id<ABAddressBookReference> _owningAddressBook;
	int _aggregateMultiValueMode;
	char _writeChangesToServer;
	char _sendsChangeNotifications;
	char _unlockOnDealloc;

}

@property (assign) ABAddressBook * owningAddressBook; 
@property (assign) int aggregateMultiValueMode;                    //@synthesize aggregateMultiValueMode=_aggregateMultiValueMode - In the implementation block
@property (assign) char writeChangesToServer;                      //@synthesize writeChangesToServer=_writeChangesToServer - In the implementation block
@property (assign) char sendsChangeNotifications;                  //@synthesize sendsChangeNotifications=_sendsChangeNotifications - In the implementation block
@property (assign) char unlockOnDealloc;                           //@synthesize unlockOnDealloc=_unlockOnDealloc - In the implementation block
+(id)abUniqueIDsPredicate:(id)arg1 ;
-(char)isMemoryBacked;
-(id)abContactsForPredicate:(id)arg1 affectedStores:(id)arg2 ;
-(void)setUnlockOnDealloc:(char)arg1 ;
-(void)setOwningAddressBook:(ABAddressBook *)arg1 ;
-(void)refreshRecords:(id)arg1 ;
-(char)writeChangesToServer;
-(void)setWriteChangesToServer:(char)arg1 ;
-(void)preheatContacts:(id)arg1 ;
-(id)abContactsForPredicate:(id)arg1 ;
-(ABAddressBook *)owningAddressBook;
-(id)abGroupsForUniqueIDs:(id)arg1 ;
-(id)abContactsForUniqueIDs:(id)arg1 ;
-(char)abMeCardHasChanged;
-(id)myContact;
-(void)preheatGroups:(id)arg1 keyPaths:(id)arg2 ;
-(id)abContactsForUniqueIDs:(id)arg1 affectedStores:(id)arg2 ;
-(int)aggregateMultiValueMode;
-(id)updatedContacts;
-(id)deletedContacts;
-(id)insertedContacts;
-(void)linkContact:(id)arg1 toContact:(id)arg2 ;
-(void)unlinkContact:(id)arg1 ;
-(void)setContactPreferredForLinkedName:(id)arg1 ;
-(void)setContactPreferredForLinkedName:(id)arg1 forLinkedContacts:(id)arg2 ;
-(void)setContactPreferredForLinkedPhoto:(id)arg1 ;
-(void)setContactPreferredForLinkedPhoto:(id)arg1 forLinkedContacts:(id)arg2 ;
-(id)unscopedVersionOrSelf;
-(id)contactsWithLinkIdentifier:(id)arg1 ;
-(void)setSendsChangeNotifications:(char)arg1 ;
-(id)abObjectsForPredicate:(id)arg1 entityName:(id)arg2 ;
-(void)_refreshObjectsRelatedToObject:(id)arg1 ;
-(void)ab_tryRefreshRelationshipWithName:(id)arg1 description:(id)arg2 forObject:(id)arg3 ;
-(void)preheatContacts:(id)arg1 keyPaths:(id)arg2 ;
-(void)logCallStack:(id)arg1 ;
-(id)_arrayOfContactsFromSet:(id)arg1 ;
-(void)_setContact:(id)arg1 preferredForLinkProperty:(id)arg2 ;
-(void)_setContact:(id)arg1 preferredForLinkProperty:(id)arg2 linkedContacts:(id)arg3 ;
-(id)abObjectsForPredicate:(id)arg1 entityName:(id)arg2 affectedStores:(id)arg3 ;
-(id)abGroupsForPredicate:(id)arg1 ;
-(id)abObjectsForPredicate:(id)arg1 entityName:(id)arg2 affectedStores:(id)arg3 asFaults:(char)arg4 ;
-(void)_updateLinkingInformation;
-(void)_ab_touchRecords;
-(id)_ab_deletedRecords;
-(void)_ab_markRecordsForDeletion:(id)arg1 ;
-(id)_ab_changesBySourceForNotifications;
-(void)abSendWillSaveNotificationsWithChanges:(id)arg1 ;
-(void)abSendDidSaveNotificationsWithChanges:(id)arg1 ;
-(void)_ab_sendAssistantChangeNotificationsForInsertedIdentifiers:(id)arg1 updatedIdentifiers:(id)arg2 deletedIdentifiers:(id)arg3 ;
-(char)sendsChangeNotifications;
-(id)_ab_changesBySource;
-(void)preheatGroups:(id)arg1 ;
-(void)setAggregateMultiValueMode:(int)arg1 ;
-(char)unlockOnDealloc;
-(id)init;
-(void)dealloc;
-(void)deleteObject:(id)arg1 ;
-(char)save:(id*)arg1 ;
@end

