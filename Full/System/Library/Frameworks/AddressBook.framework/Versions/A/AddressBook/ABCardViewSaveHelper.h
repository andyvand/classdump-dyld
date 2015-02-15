/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABCardViewSaveHelperDelegate;
@class AKCardViewDataSource, ABAddressBook, CNContactStore, ABCommandExecutor;

@interface ABCardViewSaveHelper : NSObject {

	char _isNewPerson;
	char _isSaving;
	char _hasSaved;
	AKCardViewDataSource* _dataSource;
	ABAddressBook* _legacyAddressBook;
	CNContactStore* _addressBook;
	ABCommandExecutor* _commandExecutor;
	id<ABCardViewSaveHelperDelegate> _delegate;

}

@property (retain) AKCardViewDataSource * dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) char isNewPerson;                                       //@synthesize isNewPerson=_isNewPerson - In the implementation block
@property (retain) ABCommandExecutor * commandExecutor;                    //@synthesize commandExecutor=_commandExecutor - In the implementation block
@property (readonly) char isSaving;                                        //@synthesize isSaving=_isSaving - In the implementation block
@property (assign) id<ABCardViewSaveHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) ABAddressBook * legacyAddressBook;                      //@synthesize legacyAddressBook=_legacyAddressBook - In the implementation block
@property (retain) CNContactStore * addressBook;                           //@synthesize addressBook=_addressBook - In the implementation block
-(char)canSave;
-(CNContactStore *)addressBook;
-(ABAddressBook *)legacyAddressBook;
-(ABCommandExecutor *)commandExecutor;
-(void)executeCommand:(id)arg1 ;
-(void)setCommandExecutor:(ABCommandExecutor *)arg1 ;
-(void)addPerson;
-(void)setIsNewPerson:(char)arg1 ;
-(char)isSaving;
-(void)setLegacyAddressBook:(ABAddressBook *)arg1 ;
-(void)saveEmptyDataSource;
-(void)saveDataSourceWithChanges;
-(void)deleteUnsavedPerson;
-(void)deletePeople;
-(char)shouldAddNewPersonToStoreDataSourceChanges;
-(void)addNewPersonToStoreDataSourceChanges;
-(void)updatePeople;
-(char)dataSourceHasNonLinkChanges;
-(id)makeCommandBuilderWithActionName:(id)arg1 ;
-(id)makeNewPersonToStoreDataSourceChanges;
-(id)makeAddCommandForPerson:(id)arg1 accountIdentifier:(id)arg2 personInserted:(char)arg3 ;
-(char)hasNameChanges;
-(void)preferForNamePerson:(id)arg1 inPeople:(id)arg2 ;
-(char)hasPhotoChanges;
-(void)preferForPhotoPerson:(id)arg1 inPeople:(id)arg2 ;
-(id)makeSetImageCommandForPerson:(id)arg1 ;
-(id)makeLinkCommandForPeople:(id)arg1 linkIdentifier:(id)arg2 ;
-(id)makeUpdateCommand;
-(id)propertiesToSetOnNewPerson;
-(void)applyProperties:(id)arg1 fromPerson:(id)arg2 toPerson:(id)arg3 ;
-(id)personByApplyingChangesFromPerson:(id)arg1 toPerson:(id)arg2 ;
-(id)makeDeleteCommand;
-(id)publicRecordsForAKRecords:(id)arg1 ;
-(id)makeDeleteCommandForDeletedPeople:(id)arg1 ;
-(id)linkPeople:(id)arg1 withLinkIdentifier:(id)arg2 ;
-(char)isNewPerson;
-(void)setDelegate:(id<ABCardViewSaveHelperDelegate>)arg1 ;
-(void)dealloc;
-(id<ABCardViewSaveHelperDelegate>)delegate;
-(void)setDataSource:(AKCardViewDataSource *)arg1 ;
-(AKCardViewDataSource *)dataSource;
-(void)setAddressBook:(CNContactStore *)arg1 ;
-(void)save;
@end

