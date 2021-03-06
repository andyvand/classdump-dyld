/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AOSUI/AOSUI-Structs.h>
#import <AppKit/NSTextField.h>

@protocol MMLinkTextFieldDelegate;
@interface MMLinkTextField : NSTextField {

	id<MMLinkTextFieldDelegate> _linkDelegate;

}

@property (assign) id<MMLinkTextFieldDelegate> linkDelegate;              //@synthesize linkDelegate=_linkDelegate - In the implementation block
-(void)setLinkDelegate:(id<MMLinkTextFieldDelegate>)arg1 ;
-(id<MMLinkTextFieldDelegate>)linkDelegate;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(void)mouseUp:(id)arg1 ;
@end

