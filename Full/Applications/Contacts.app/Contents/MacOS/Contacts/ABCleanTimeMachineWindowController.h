/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/ABTimeMachineWindowController.h>

@class ABCleanWindowController, ABCleanSplitViewController, ABMainWindowViewModel, NSString;

@interface ABCleanTimeMachineWindowController : NSObject <ABTimeMachineWindowController> {

	ABCleanWindowController* _windowController;
	ABCleanSplitViewController* _splitViewController;
	ABMainWindowViewModel* _viewModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)mergeDelegate;
-(id)cloneTimeMachineWindowController;
-(void)applicationWillEnterTimeMachine;
-(id)windowAppearanceObservable;
-(void)applicationDidExitTimeMachine;
-(void)setReadOnlyOverride:(char)arg1 ;
-(void)updateViewStateFromViewer:(id)arg1 ;
-(id)selectedRecordUIDs;
-(void)viewTimeMachineAccounts:(id)arg1 addressBook:(id)arg2 ;
-(void)selectRecordsWithUIDs:(id)arg1 ;
-(id)restoreSourceFromCurrentSelection;
-(id)initWithWindowController:(id)arg1 splitViewController:(id)arg2 viewModel:(id)arg3 ;
-(char)readOnlyOverride;
-(void)saveStateForRetargeting;
-(void)restoreStateFromRetargeting;
-(id)addressBook;
-(id)selectedGroupEntryIdentifier;
-(void)selectGroupEntryWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)window;
-(id)searchString;
-(void)setSearchString:(id)arg1 ;
@end

