/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LoginUIKit/LoginUIKit-Structs.h>
#import <AppKit/NSView.h>

@class NSScrollView, NSTextView, NSImageView, NSAttributedString;

@interface LUIGoodSamaritanMessageView : NSView {

	int _style;
	NSScrollView* _scrollView;
	NSTextView* _messageTextView;
	NSImageView* _ribbonImageView;
	NSAttributedString* _currentMessage;

}
-(void)dealloc;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withStyle:(int)arg2 ;
-(id)_fontOfSize:(double)arg1 ;
-(id)_attributesWithSize:(double)arg1 ;
-(void)_setMessageInternal:(id)arg1 ;
@end

