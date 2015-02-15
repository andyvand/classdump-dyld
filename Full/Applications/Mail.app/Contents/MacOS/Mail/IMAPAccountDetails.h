/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/AccountDetails.h>

@class NSButton, NSTextField;

@interface IMAPAccountDetails : AccountDetails {

	char _warnedAboutCachingAndIndexing;
	NSButton* _cachePolicyCheckbox;
	NSButton* _compactWhenClosing;
	NSTextField* _serverPathPrefix;
	NSButton* _useIDLECommand;

}

@property (assign,nonatomic,__weak) NSButton * cachePolicyCheckbox;              //@synthesize cachePolicyCheckbox=_cachePolicyCheckbox - In the implementation block
@property (assign,nonatomic,__weak) NSButton * compactWhenClosing;               //@synthesize compactWhenClosing=_compactWhenClosing - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * serverPathPrefix;              //@synthesize serverPathPrefix=_serverPathPrefix - In the implementation block
@property (assign,nonatomic,__weak) NSButton * useIDLECommand;                   //@synthesize useIDLECommand=_useIDLECommand - In the implementation block
@property (assign,nonatomic) char warnedAboutCachingAndIndexing;                 //@synthesize warnedAboutCachingAndIndexing=_warnedAboutCachingAndIndexing - In the implementation block
-(char)isAccountInformationDirty:(id)arg1 ;
-(void)setupUIFromValuesInAccount:(id)arg1 ;
-(void)setupAccountFromValuesInUI:(id)arg1 forValidation:(char)arg2 ;
-(void)didDisplayTabViewItem:(id)arg1 ;
-(NSButton *)cachePolicyCheckbox;
-(void)setWarnedAboutCachingAndIndexing:(char)arg1 ;
-(char)warnedAboutCachingAndIndexing;
-(void)cachePolicyChanged:(id)arg1 ;
-(void)setCachePolicyCheckbox:(NSButton *)arg1 ;
-(NSButton *)compactWhenClosing;
-(NSButton *)useIDLECommand;
-(void)setCompactWhenClosing:(NSButton *)arg1 ;
-(void)setUseIDLECommand:(NSButton *)arg1 ;
-(void)setUIElementsEnabled:(char)arg1 ;
-(NSTextField *)serverPathPrefix;
-(void)setServerPathPrefix:(NSTextField *)arg1 ;
@end
