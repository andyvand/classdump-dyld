/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <MobileMail/MailboxParentPickerSelectionTarget.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol MailboxEditingControllerDelegate;
@class MFMailboxUid, MailAccount, UITableViewCell, MailMailboxGroupedPickerTableCell, ;

@interface MailboxEditingController : UITableViewController <UIActionSheetDelegate, UIAlertViewDelegate, UINavigationControllerDelegate, MailboxParentPickerSelectionTarget, UITextFieldDelegate> {

	MFMailboxUid* _mailbox;
	MFMailboxUid* _oldParentMailbox;
	MFMailboxUid* _parentMailbox;
	MailAccount* _account;
	UITableViewCell* _mailboxNameCell;
	UITableViewCell* _deleteMailboxCell;
	MailMailboxGroupedPickerTableCell* _parentMailboxCell;
	<MailboxEditingControllerDelegate>* _delegate;
	BOOL _isDeletingMailbox;
	BOOL _showDeleteButton;

}

@property (nonatomic,retain) MFMailboxUid * mailbox;                                     //@synthesize mailbox=_mailbox - In the implementation block
@property (nonatomic,retain) MFMailboxUid * parentMailbox;                               //@synthesize parentMailbox=_parentMailbox - In the implementation block
@property (nonatomic,retain) MailAccount * account;                                      //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) <MailboxEditingControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithMailbox:(id)arg1 account:(id)arg2 ;
-(void)_saveButtonClicked:(id)arg1 ;
-(void)_applyChangesAndDismissView;
-(void)_updateParentMailbox;
-(id)_deleteMailboxButtonTableViewCell;
-(void)_confirmDelete:(id)arg1 ;
-(void)_deleteMailboxAndDismissView;
-(id)deleteMailboxOperation;
-(void)_queueMailboxOperation:(id)arg1 ;
-(id)createMailboxOperation;
-(id)renameMailboxOperation;
-(id)moveMailboxOperation;
-(void)mailboxParentPickerDidSelectMailbox:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)delegate;
-(BOOL)shouldAutorotate;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)textChanged:(id)arg1 ;
-(void)setParentMailbox:(id)arg1 ;
-(id)parentMailbox;
-(id)account;
-(void)setMailbox:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
-(id)mailbox;
-(void)_cancelButtonClicked:(id)arg1 ;
@end
