/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:14 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <ScreenSharing/NSTextFieldDelegate.h>

@protocol SSConnectionPromptObserver;
@class NSObject, SSContactsTokenField, NSButton, NSProgressIndicator, NSTextField, NSString;

@interface SSConnectionAddressViewController : NSViewController <NSTextFieldDelegate> {

	NSObject*<SSConnectionPromptObserver> mPromptObserver;
	char mIsConnecting;
	SSContactsTokenField* _mAddressField;
	NSButton* _mConnectButton;
	NSProgressIndicator* _mConnectingProgressSpinner;
	NSTextField* _mConnectingText;

}

@property (assign) id<SSConnectionPromptObserver> promptObserver; 
@property (retain) SSContactsTokenField * mAddressField;                          //@synthesize mAddressField=_mAddressField - In the implementation block
@property (retain) NSButton * mConnectButton;                                     //@synthesize mConnectButton=_mConnectButton - In the implementation block
@property (retain) NSProgressIndicator * mConnectingProgressSpinner;              //@synthesize mConnectingProgressSpinner=_mConnectingProgressSpinner - In the implementation block
@property (retain) NSTextField * mConnectingText;                                 //@synthesize mConnectingText=_mConnectingText - In the implementation block
@property (copy) NSString * addressString; 
@property (assign) char isConnecting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPromptObserver:(id<SSConnectionPromptObserver>)arg1 ;
-(void)setIsConnecting:(char)arg1 ;
-(char)isConnecting;
-(void)setAddressString:(NSString *)arg1 ;
-(NSProgressIndicator *)mConnectingProgressSpinner;
-(NSTextField *)mConnectingText;
-(NSButton *)mConnectButton;
-(void)connectClicked:(id)arg1 ;
-(void)cancelClicked:(id)arg1 ;
-(void)adjustViewHeightBy:(double)arg1 ;
-(id<SSConnectionPromptObserver>)promptObserver;
-(void)setMConnectButton:(NSButton *)arg1 ;
-(void)setMConnectingProgressSpinner:(NSProgressIndicator *)arg1 ;
-(void)setMConnectingText:(NSTextField *)arg1 ;
-(SSContactsTokenField *)mAddressField;
-(NSString *)addressString;
-(void)setMAddressField:(SSContactsTokenField *)arg1 ;
-(void)dealloc;
-(void)controlTextDidChange:(id)arg1 ;
-(void)awakeFromNib;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

