/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <AppKit/NSTextField.h>

@class NSShadow, NSString;

@interface AbbreviatingTextField : NSTextField {

	char _verticallyCentered;
	NSShadow* _shadow;
	char _sendsActionOnClick;
	NSString* _axDescriptionAttribute;

}
-(void)_commonInitForTextField;
-(void)_setColor:(id)arg1 offset:(float)arg2 blurRadius:(float)arg3 ;
-(void)setNoShadow;
-(void)setWhiteBevel;
-(void)setStrongBlackShadow;
-(void)setSendsActionOnClick:(char)arg1 ;
-(char)sendsActionOnClick;
-(void)setLocalizedAccessibilityDescriptionAttribute:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityRoleAttribute;
-(id)accessibilityDescriptionAttribute;
-(void)performClick:(id)arg1 ;
-(id)accessibilityTitleAttribute;
-(char)acceptsFirstResponder;
-(char)becomeFirstResponder;
-(void)mouseDown:(id)arg1 ;
-(id)shadow;
-(void)setShadow:(id)arg1 ;
-(void)_sendAction;
-(void)setVerticallyCentered:(char)arg1 ;
-(char)isVerticallyCentered;
@end
