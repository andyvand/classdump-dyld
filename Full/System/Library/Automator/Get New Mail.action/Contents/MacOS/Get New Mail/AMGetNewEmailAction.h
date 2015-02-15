/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:22:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Get New Mail.action/Contents/MacOS/Get New Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class NSArray, NSArrayController;

@interface AMGetNewEmailAction : AMBundleAction {

	NSArray* _accountNames;
	NSArrayController* accountNameArrayController;

}

@property (retain) NSArray * accountNames;              //@synthesize accountNames=_accountNames - In the implementation block
-(id)_getAccountNamesFromMail;
-(NSArray *)accountNames;
-(void)accountSelectionChanged:(id)arg1 ;
-(char)_checkMailForAccountNamed:(id)arg1 error:(id*)arg2 ;
-(void)setAccountNames:(NSArray *)arg1 ;
-(id)runWithInput:(id)arg1 fromAction:(id)arg2 error:(id*)arg3 ;
-(void)updateParameters;
-(void)parametersUpdated;
-(void)opened;
-(void)dealloc;
@end
