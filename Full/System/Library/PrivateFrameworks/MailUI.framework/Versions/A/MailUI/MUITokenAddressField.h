/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailUI.framework/Versions/A/MailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailUI/MailUI-Structs.h>
#import <AppKit/NSTokenField.h>

@class MUITokenAddressTextView, NSView;

@interface MUITokenAddressField : NSTokenField {

	MUITokenAddressTextView* _addressTextView;
	NSView* _parentAddressField;

}

@property (assign,nonatomic,__weak) NSView * parentAddressField;              //@synthesize parentAddressField=_parentAddressField - In the implementation block
+(Class)cellClass;
-(void)setParentAddressField:(NSView *)arg1 ;
-(void)refreshField;
-(NSView *)parentAddressField;
-(id)_addressTextView;
-(double)minimumHeight;
-(CGSize)intrinsicContentSize;
-(id)accessibilityParent;
-(void)setFrameSize:(CGSize)arg1 ;
-(char)becomeFirstResponder;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(NSRange)arg3 indexOfSelectedItem:(long long*)arg4 ;
-(id)designatedFocusRingView;
-(void)didAddSubview:(id)arg1 ;
-(unsigned long long)textView:(id)arg1 dragOperationForDraggingInfo:(id)arg2 type:(id)arg3 ;
-(id)tokenFieldCell:(id)arg1 shouldUseReadablePasteboardTypes:(id)arg2 ;
-(id)tokenFieldCell:(id)arg1 shouldUseDraggingPasteboardTypes:(id)arg2 ;
@end

