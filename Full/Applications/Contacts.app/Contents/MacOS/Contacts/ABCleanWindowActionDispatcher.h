/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABActionDispatcher.h>

@class ABMainWindowActions;

@interface ABCleanWindowActionDispatcher : ABActionDispatcher {

	ABMainWindowActions* _windowActions;

}

@property (retain) ABMainWindowActions * windowActions;              //@synthesize windowActions=_windowActions - In the implementation block
-(void)createGroup:(id)arg1 ;
-(void)debugCopyContactUrl:(id)arg1 ;
-(void)dumpSubtreeDescription:(id)arg1 ;
-(void)dumpUndoManager:(id)arg1 ;
-(void)exportPDFWithCurrentSelection:(id)arg1 ;
-(void)printDocument:(id)arg1 ;
-(void)togglePointOfInterestSearch:(id)arg1 ;
-(void)toggleGroups:(id)arg1 ;
-(void)toggleLastImportGroup:(id)arg1 ;
-(void)createSmartGroupFromSearch:(id)arg1 ;
-(void)createSmartGroup:(id)arg1 ;
-(void)createGroupFromSelection:(id)arg1 ;
-(void)editDistributionList:(id)arg1 ;
-(void)lookForDuplicateCards:(id)arg1 ;
-(void)import:(id)arg1 ;
-(void)exportAddressBookArchive:(id)arg1 ;
-(void)exportvCardWithPeopleInGroups:(id)arg1 ;
-(void)exportvCardWithPeople:(id)arg1 ;
-(void)exportvCardWithCurrentSelection:(id)arg1 ;
-(void)addTwitterField:(id)arg1 ;
-(void)addCardViewField:(id)arg1 ;
-(void)addContact:(id)arg1 ;
-(void)openPerson:(id)arg1 ;
-(void)navigateCards:(id)arg1 ;
-(void)goToMyCard:(id)arg1 ;
-(void)setSelectedCardAsMe:(id)arg1 ;
-(void)swapFirstLastName:(id)arg1 ;
-(void)markAsPersonOrCompany:(id)arg1 ;
-(void)addPerson:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)chooseCustomImage:(id)arg1 ;
-(void)clearCustomImage:(id)arg1 ;
-(void)saveChanges:(id)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(void)toggleCardEditingMode:(id)arg1 ;
-(void)shareMyCardWithService:(id)arg1 ;
-(void)sendVCard:(id)arg1 ;
-(void)showAddDropDownMenu:(id)arg1 ;
-(void)findInDirectories:(id)arg1 ;
-(void)find:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)removeMembers:(id)arg1 ;
-(id)actionFor_removeMembers;
-(id)actionFor_copy;
-(id)actionFor_cut;
-(id)actionFor_paste;
-(id)actionFor_delete;
-(id)actionFor_find;
-(id)actionFor_findInDirectories;
-(id)findIn_findInSpotlight;
-(id)actionFor_showAddDropDownMenu;
-(id)actionFor_sendVCard;
-(id)actionFor_shareMyCardWithService;
-(id)actionFor_toggleCardEditingMode;
-(id)actionFor_cancelOperation;
-(id)actionFor_saveChanges;
-(id)actionFor_clearCustomImage;
-(id)actionFor_chooseCustomImage;
-(id)actionFor_cancel;
-(id)actionFor_addPerson;
-(id)actionFor_markAsPersonOrCompany;
-(id)actionFor_swapFirstLastName;
-(id)actionFor_setSelectedCardAsMe;
-(id)actionFor_goToMyCard;
-(id)actionFor_navigateCards;
-(id)actionFor_openPerson;
-(id)actionFor_addContact;
-(id)actionFor_addCardViewField;
-(id)actionFor_addTwitterField;
-(id)actionFor_exportvCardWithCurrentSelection;
-(id)actionFor_exportvCardWithPeople;
-(id)actionFor_exportvCardWithPeopleInGroups;
-(id)actionFor_exportAddressBookArchive;
-(id)actionFor_import;
-(id)actionFor_lookForDuplicateCards;
-(id)actionFor_editDistributionList;
-(id)actionFor_createGroupFromSelection;
-(id)actionFor_createSmartGroup;
-(id)actionFor_createSmartGroupFromSearch;
-(id)actionFor_toggleLastImportGroup;
-(id)actionFor_toggleGroups;
-(id)actionFor_togglePointOfInterestSearch;
-(id)actionFor_printDocument;
-(id)actionFor_exportPDFWithCurrentSelection;
-(id)actionFor_dumpUndoManager;
-(id)actionFor_dumpSubtreeDescription;
-(id)actionFor_debugCopyContactUrl;
-(id)placeholderActionForSelector:(SEL)arg1 ;
-(ABMainWindowActions *)windowActions;
-(void)setWindowActions:(ABMainWindowActions *)arg1 ;
-(void)willRegisterActions;
-(id)actionFor_createGroup;
-(void)dealloc;
@end

