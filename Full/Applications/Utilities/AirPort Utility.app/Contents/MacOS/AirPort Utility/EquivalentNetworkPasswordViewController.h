/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:35:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/AirPort Utility.app/Contents/MacOS/AirPort Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSTextField, NSImageView, NSWindow;

@interface EquivalentNetworkPasswordViewController : NSViewController {

	NSTextField* descriptionTextLabel;
	NSImageView* iconImageView;
	NSWindow* sheetWindow;
	NSWindow* hostingWindow;

}

@property (assign) NSTextField * descriptionTextLabel; 
@property (assign) NSImageView * iconImageView; 
@property (assign) NSWindow * sheetWindow; 
@property (assign) NSWindow * hostingWindow; 
-(NSWindow *)sheetWindow;
-(void)setSheetWindow:(NSWindow *)arg1 ;
-(id)makeLabelWithStringValue:(id)arg1 bold:(char)arg2 ;
-(void)doneButtonClicked:(id)arg1 ;
-(NSTextField *)descriptionTextLabel;
-(void)setDescriptionTextLabel:(NSTextField *)arg1 ;
-(void)setIconImageView:(NSImageView *)arg1 ;
-(void)setHostingWindow:(NSWindow *)arg1 ;
-(NSWindow *)hostingWindow;
-(NSImageView *)iconImageView;
-(void)awakeFromNib;
@end

