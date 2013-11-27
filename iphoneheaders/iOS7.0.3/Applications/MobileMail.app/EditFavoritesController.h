/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <MobileMail/AccountFavoritesPickerControllerDelegate.h>
#import <MobileMailSettings/MailboxUtilsClient.h>

@protocol EditFavoritesControllerDelegate;
@class NSMutableArray, NSArray, ;

@interface EditFavoritesController : UITableViewController <AccountFavoritesPickerControllerDelegate, MailboxUtilsClient> {

	NSMutableArray* _selectedSmartMailboxes;
	NSMutableArray* _selectedFavoriteMailboxes;
	NSArray* _sortedAccounts;
	NSArray* _sortedMailboxes;
	<EditFavoritesControllerDelegate>* _delegate;
	BOOL _isSingleAccount;

}

@property (assign,nonatomic) BOOL isSingleAccount;                                      //@synthesize isSingleAccount=_isSingleAccount - In the implementation block
@property (assign,nonatomic) <EditFavoritesControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * selectedSmartMailboxes;                        //@synthesize selectedSmartMailboxes=_selectedSmartMailboxes - In the implementation block
@property (nonatomic,readonly) NSArray * selectedFavoriteMailboxes;                     //@synthesize selectedFavoriteMailboxes=_selectedFavoriteMailboxes - In the implementation block
-(id)selectedSmartMailboxes;
-(id)selectedFavoriteMailboxes;
-(BOOL)selectedStateForMailbox:(id)arg1 ;
-(BOOL)toggleAndReturnSelectedStateForMailbox:(id)arg1 ;
-(void)setIsSingleAccount:(BOOL)arg1 ;
-(BOOL)isSingleAccount;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)delegate;
-(BOOL)shouldAutorotate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)shouldReloadMailboxesWithOutbox:(id)arg1 ;
-(BOOL)shouldHideInbox;
-(BOOL)shouldHideNotesForAccount:(id)arg1 ;
-(void)doneButtonClicked:(id)arg1 ;
-(void)didFinish;
@end
