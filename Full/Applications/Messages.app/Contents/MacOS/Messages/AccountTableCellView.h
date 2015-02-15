/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTableCellView.h>

@class NSTextField;

@interface AccountTableCellView : NSTableCellView {

	NSTextField* accountDescriptionLabel;
	NSTextField* accountServiceLabel;

}

@property (nonatomic,retain) NSTextField * accountDescriptionLabel; 
@property (nonatomic,retain) NSTextField * accountServiceLabel; 
-(void)_accountChanged:(id)arg1 ;
-(void)_updateAccount;
-(void)_updateLabelFormatting;
-(void)setAccountServiceLabel:(NSTextField *)arg1 ;
-(void)setAccountDescriptionLabel:(NSTextField *)arg1 ;
-(NSTextField *)accountDescriptionLabel;
-(NSTextField *)accountServiceLabel;
-(void)_updateLabelText;
-(void)dealloc;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(void)setObjectValue:(id)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(id)accessibilityValueAttribute;
@end
