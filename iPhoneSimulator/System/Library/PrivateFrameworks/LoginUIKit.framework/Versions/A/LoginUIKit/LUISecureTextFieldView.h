/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LoginUIKit/LoginUIKit-Structs.h>
#import <AppKit/NSView.h>
#import <LoginUIKit/NSTextFieldDelegate.h>

@class CALayer, CATextLayer, LUISecureTextField, NSButton, NSProgressIndicator, LUIEffectsButton, NSImage, NSString;

@interface LUISecureTextFieldView : NSView <NSTextFieldDelegate> {

	CALayer* _textFieldLayer;
	CATextLayer* _placeholderTextLayer;
	LUISecureTextField* _secureTextField;
	NSButton* _securityFieldActionButton;
	NSProgressIndicator* _securityFieldProgressIndicator;
	LUIEffectsButton* _securityFieldGoButton;
	NSImage* _goButtonImage;
	NSImage* _passwordHintImage;
	NSImage* _passwordErrorImage;
	id _delegate;
	id _target;
	SEL _action;
	char _usesHint;
	int _currentMode;
	long long _previousLength;

}

@property (assign) id delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)actionButtonPressed:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setHidden:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(id)target;
-(SEL)action;
-(id)delegate;
-(id)accessibilityPlaceholderValue;
-(void)setFrameSize:(CGSize)arg1 ;
-(char)acceptsFirstResponder;
-(int)mode;
-(void)setMode:(int)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)setPlaceholderString:(id)arg1 ;
-(CGRect)focusRingMaskBounds;
-(void)loadImages;
-(void)setUIEnabled:(char)arg1 ;
-(CGRect)progressRect;
-(id)secureTextField;
-(void)resetPassword;
-(void)forceClearFocusRing;
-(void)forceDrawFocusRing;
-(CGPoint)pointForPopover:(int)arg1 ;
-(void)setUsesHint:(char)arg1 ;
-(float)_textFieldLayerOpacity;
-(void)setSecureTextFieldWidth:(char)arg1 ;
-(void)resetButtonUIToMode:(int)arg1 ;
-(id)_placeholderTextColor;
-(void)refreshButtonsAfterKeyInput;
-(char)usesHint;
@end

