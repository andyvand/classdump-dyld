/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABDefaultAccountPopupButton, NSTextField, NSView, ABAccountRepository;

@interface ABDefaultAccountPopupController : NSObject {

	ABDefaultAccountPopupButton* _popup;
	NSTextField* _label;
	NSView* _auxiliaryView;
	char _isPopupHidden;
	ABAccountRepository* _accountRepository;

}

@property (assign,nonatomic) ABDefaultAccountPopupButton * popup;                  //@synthesize popup=_popup - In the implementation block
@property (assign) NSTextField * label;                                            //@synthesize label=_label - In the implementation block
@property (assign) NSView * auxiliaryView;                                         //@synthesize auxiliaryView=_auxiliaryView - In the implementation block
@property (assign,nonatomic) char isPopupHidden;                                   //@synthesize isPopupHidden=_isPopupHidden - In the implementation block
@property (nonatomic,retain) ABAccountRepository * accountRepository;              //@synthesize accountRepository=_accountRepository - In the implementation block
-(void)rebuildPopup;
-(char)isPopupHidden;
-(void)popupButtonDidMoveToWindow:(id)arg1 ;
-(void)setAccountRepository:(ABAccountRepository *)arg1 ;
-(void)_setControlVisibility:(char)arg1 ;
-(void)_unregisterForWindowNotifications;
-(void)_registerForWindowNotifications:(id)arg1 ;
-(void)_initializePopup;
-(void)_unregisterForNotificationsForRepository:(id)arg1 ;
-(void)_registerForNotificationsForRepository:(id)arg1 ;
-(NSView *)auxiliaryView;
-(void)_accountRepositoryDidChange:(id)arg1 ;
-(void)_defaultAccountDidChange:(id)arg1 ;
-(void)_removeLocalAccountIfEmpty:(id)arg1 ;
-(void)_sortAccounts:(id)arg1 ;
-(void)_addAccountsToPopup:(id)arg1 ;
-(void)_addMenuItemForAccount:(id)arg1 ;
-(char)shouldHidePopupForAccounts:(id)arg1 ;
-(void)setIsPopupHidden:(char)arg1 ;
-(void)updateDefaultAccount:(id)arg1 ;
-(void)setAuxiliaryView:(NSView *)arg1 ;
-(ABAccountRepository *)accountRepository;
-(ABDefaultAccountPopupButton *)popup;
-(void)setPopup:(ABDefaultAccountPopupButton *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setLabel:(NSTextField *)arg1 ;
-(void)awakeFromNib;
-(NSTextField *)label;
-(void)_windowDidBecomeKey:(id)arg1 ;
@end

