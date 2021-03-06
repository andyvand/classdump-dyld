/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSButton, NSTextView, NSTextField, NSArray;

@interface CKLicenseAgreementSheet : NSWindowController {

	NSButton* _agreeButton;
	NSButton* _cancelButton;
	NSTextView* _textView;
	NSTextField* _titleField;
	char _displayedAsSheet;
	long long _sheetReturnCode;
	NSArray* _productKeys;

}

@property (copy) NSArray * productKeys;              //@synthesize productKeys=_productKeys - In the implementation block
-(id)_textValueKey;
-(id)_titleValueKey;
-(id)initWithUpdateProductKeys:(id)arg1 ;
-(char)userAgreedToAllAgreementsWithWindowForSheet:(id)arg1 ;
-(void)agree:(id)arg1 ;
-(void)setProductKeys:(NSArray *)arg1 ;
-(NSArray *)productKeys;
-(void)didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)cancel:(id)arg1 ;
-(id)_nibName;
-(void)_dismissPanelWithCode:(long long)arg1 ;
@end

