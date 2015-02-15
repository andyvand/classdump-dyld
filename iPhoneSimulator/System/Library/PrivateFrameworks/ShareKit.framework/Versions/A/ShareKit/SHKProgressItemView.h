/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTableCellView.h>

@class SHKProgressIndicator, NSButton, NSTextField;

@interface SHKProgressItemView : NSTableCellView {

	char _awake;
	SHKProgressIndicator* progressIndicator;
	NSButton* cancelButton;
	NSButton* revealButton;
	NSTextField* titleField;
	NSTextField* subtitleField;

}

@property (readonly) NSTextField * subtitleField; 
-(void)viewWasAddedToTableView:(id)arg1 ;
-(void)viewWasRemovedFromTableView:(id)arg1 ;
-(NSTextField *)subtitleField;
-(char)mouseDownCanMoveWindow;
-(void)updateLayout;
@end

