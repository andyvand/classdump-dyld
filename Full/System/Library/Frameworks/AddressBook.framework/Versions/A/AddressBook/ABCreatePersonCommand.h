/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABCreatePersonCommandDelegate;
@class ABPersonListController, NSManagedObjectContext, NSUndoManager, NSArray, ABAccount, ABAddressBook;

@interface ABCreatePersonCommand : NSObject {

	ABPersonListController* _personListController;
	NSManagedObjectContext* _managedObjectContext;
	NSUndoManager* _undoManager;
	NSArray* _parentGroupIDs;
	ABAccount* _destinationAccount;
	id<ABCreatePersonCommandDelegate> _delegate;
	ABAddressBook* _addressBook;

}

@property (retain) ABPersonListController * personListController;              //@synthesize personListController=_personListController - In the implementation block
@property (retain) ABAddressBook * addressBook;                                //@synthesize addressBook=_addressBook - In the implementation block
@property (retain) id<ABCreatePersonCommandDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSUndoManager * undoManager;                                //@synthesize undoManager=_undoManager - In the implementation block
@property (retain) NSArray * parentGroupIDs;                                   //@synthesize parentGroupIDs=_parentGroupIDs - In the implementation block
@property (retain) ABAccount * destinationAccount;                             //@synthesize destinationAccount=_destinationAccount - In the implementation block
-(ABAddressBook *)addressBook;
-(void)setPersonListController:(ABPersonListController *)arg1 ;
-(ABAccount *)destinationAccount;
-(void)setParentGroupsOfPerson:(id)arg1 ;
-(void)updatePersonListControllerForPerson:(id)arg1 ;
-(NSArray *)parentGroupIDs;
-(void)createPerson;
-(ABPersonListController *)personListController;
-(void)setParentGroupIDs:(NSArray *)arg1 ;
-(void)setDestinationAccount:(ABAccount *)arg1 ;
-(void)setDelegate:(id<ABCreatePersonCommandDelegate>)arg1 ;
-(void)dealloc;
-(id<ABCreatePersonCommandDelegate>)delegate;
-(NSUndoManager *)undoManager;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(void)setAddressBook:(ABAddressBook *)arg1 ;
@end

