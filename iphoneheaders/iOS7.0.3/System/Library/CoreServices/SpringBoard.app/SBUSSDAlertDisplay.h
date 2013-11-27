/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:38:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertView.h>
#import <UIKit/UITextFieldDelegate.h>

@class TPButton, UIView, UITransitionView, UITextView, UIActivityIndicatorView, UITextField;

@interface SBUSSDAlertDisplay : SBAlertView <UITextFieldDelegate> {

	TPButton* _dismissButton;
	TPButton* _replyButton;
	UIView* _notifyView;
	UIView* _replyView;
	UITransitionView* _transitionView;
	UITextView* _charsRemainingView;
	UIActivityIndicatorView* _progressIndicator;
	UITextField* _responseField;
	UITextView* _textView;
	UITextView* _responseMessageView;
	BOOL _allowsResponse;

}
-(void)alertDisplayWillBecomeVisible;
-(void)alertDisplayBecameVisible;
-(id)_notifyView;
-(void)alertStringAvailable:(id)arg1 ;
-(void)setAllowsResponse:(BOOL)arg1 ;
-(void)displayString:(id)arg1 ;
-(BOOL)allowsResponse;
-(void)_cancelClicked;
-(void)_okayClicked;
-(void)_replyClicked;
-(void)_setupResponseBar;
-(id)_replyView;
-(id)_charsRemainingView;
-(void)_updateCharsRemaining;
-(id)_responseMessageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(NSRange)arg3 ;
-(id)_textView;
-(void)_textChanged:(id)arg1 ;
@end
