/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/SheetWithTableController.h>
#import <Safari/PanelPlusDelegate.h>
#import <Safari/CreditCardDataEditorCellViewDelegate.h>
#import <Safari/NSTableViewDataSource.h>
#import <Safari/NSTableViewDelegate.h>

@class NSArray, SFAuthorization, NSButton, NSLayoutConstraint, NSString;

@interface CreditCardDataEditor : SheetWithTableController <PanelPlusDelegate, CreditCardDataEditorCellViewDelegate, NSTableViewDataSource, NSTableViewDelegate> {

	char _shouldPreventResigningFirstResponder;
	unsigned long long _ignoringCreditCardDataChangeNotifications;
	NSArray* _creditCardData;
	SFAuthorization* _showCardNumbersAuthorization;
	NSButton* _addCreditCardButton;
	NSLayoutConstraint* _addRemoveButtonEqualWidthsConstraint;

}

@property (nonatomic,copy) NSArray * creditCardData;                                                        //@synthesize creditCardData=_creditCardData - In the implementation block
@property (nonatomic,retain) SFAuthorization * showCardNumbersAuthorization;                                //@synthesize showCardNumbersAuthorization=_showCardNumbersAuthorization - In the implementation block
@property (assign,nonatomic,__weak) NSButton * addCreditCardButton;                                         //@synthesize addCreditCardButton=_addCreditCardButton - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * addRemoveButtonEqualWidthsConstraint;              //@synthesize addRemoveButtonEqualWidthsConstraint=_addRemoveButtonEqualWidthsConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_creditCardIconForNumberAllowingPartialMatch:(id)arg1 ;
-(void)showSheetInWindow:(id)arg1 ;
-(void)hideSheet:(id)arg1 ;
-(void)removeSelectedItems:(id)arg1 ;
-(NSArray *)creditCardData;
-(void)setCreditCardData:(NSArray *)arg1 ;
-(NSButton *)addCreditCardButton;
-(void)resetCreditCardData;
-(void)creditCardDataChanged;
-(void)unregisterForNotifications;
-(void)registerForNotifications;
-(void)_performBlockIgnoringCreditCardDataChangeNotifications:(/*^block*/id)arg1 ;
-(void)_removeCreditCardsAtIndexes:(id)arg1 ;
-(SFAuthorization *)showCardNumbersAuthorization;
-(void)setShowCardNumbersAuthorization:(SFAuthorization *)arg1 ;
-(char)_showCardNumbersRightExists;
-(void)_preventResigningFirstResponderWhilePerformingBlock:(/*^block*/id)arg1 ;
-(void)_updateCreditCard:(id)arg1 withCreditCardData:(id)arg2 ;
-(void)_addCreditCard:(id)arg1 ;
-(id)_indexesOfCreditCardsWithNumber:(id)arg1 excludingCard:(id)arg2 ;
-(char)_isCreditCardNumberTextField:(id)arg1 ;
-(char)_canShowCardNumbers;
-(char)_shouldSetNumberOfCreditCardData:(id)arg1 toCreditCardNumber:(id)arg2 ;
-(id)_expirationDateForDate:(id)arg1 ;
-(char)panelPlus:(id)arg1 shouldMakeFirstResponder:(id)arg2 ;
-(void)creditCardDataEditorCellView:(id)arg1 didSetObjectValue:(id)arg2 forTextFieldWithIdentifier:(id)arg3 ;
-(void)creditCardDataEditorCellView:(id)arg1 willAbortEditingForTextFieldWithIdentifier:(id)arg2 ;
-(char)creditCardDataEditorCellView:(id)arg1 shouldEndEditingTextInFieldEditor:(id)arg2 forTextFieldWithIdentifier:(id)arg3 ;
-(void)creditCardDataEditorCellView:(id)arg1 textDidChangeInFieldEditor:(id)arg2 forTextFieldWithIdentifier:(id)arg3 ;
-(void)addCreditCard:(id)arg1 ;
-(void)setAddCreditCardButton:(NSButton *)arg1 ;
-(NSLayoutConstraint *)addRemoveButtonEqualWidthsConstraint;
-(void)setAddRemoveButtonEqualWidthsConstraint:(NSLayoutConstraint *)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)windowNibName;
-(void)windowDidResignKey:(id)arg1 ;
@end

