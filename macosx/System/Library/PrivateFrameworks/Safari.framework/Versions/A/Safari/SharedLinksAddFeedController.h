/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSPopUpButton, NSButton;

@interface SharedLinksAddFeedController : NSWindowController {

	NSPopUpButton* _feedMenu;
	NSButton* _addFeedButton;

}
-(void)_cancel:(id)arg1 ;
-(void)_iconsChanged:(id)arg1 ;
-(id)_feedMenuItemWithSource:(id)arg1 ;
-(id)_setUpMenuWithSuggestedFeeds:(id)arg1 ;
-(void)_updateAddFeedButton:(id)arg1 ;
-(id)_feedMenuItemForActiveTab;
-(void)_addFeed:(id)arg1 ;
-(void)dealloc;
-(char)validateMenuItem:(id)arg1 ;
-(void)reloadData;
-(void)awakeFromNib;
@end

