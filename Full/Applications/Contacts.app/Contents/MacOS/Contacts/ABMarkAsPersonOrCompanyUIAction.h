/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/ABUserInterfaceAction.h>

@protocol ABMainWindowEditModeController;
@class ABPersonListController, ABCommandExecutor, NSString;

@interface ABMarkAsPersonOrCompanyUIAction : NSObject <ABUserInterfaceAction> {

	ABPersonListController* _personListController;
	ABCommandExecutor* _commandExecutor;
	id<ABMainWindowEditModeController> _editModeController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPersonListController:(id)arg1 commandExecutor:(id)arg2 editModeController:(id)arg3 ;
-(void)updateMenuItem:(id)arg1 withSelectedEntries:(id)arg2 ;
-(id)commandWithSelection:(id)arg1 ;
-(id)markAsACompanyString;
-(id)markAsAPersonString;
-(id)mutableContactsForUniqueIds:(id)arg1 addressBook:(id)arg2 ;
-(id)commandForContacts:(id)arg1 addressBook:(id)arg2 actionName:(id)arg3 ;
-(char)validateWithMenuItem:(id)arg1 ;
-(void)performWithSender:(id)arg1 ;
-(void)dealloc;
@end

