/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSArrayController, NSBox, NSImageView, NSTextField, NSStackView, AMDescriptionViewItem;

@interface AMDescriptionViewController : NSViewController {

	NSArrayController* itemsController;
	NSBox* contentBox;
	NSImageView* imageView;
	NSTextField* nameTextField;
	NSTextField* summaryTextField;
	NSStackView* itemsContainer;
	AMDescriptionViewItem* _descriptionViewItem;

}

@property (retain) AMDescriptionViewItem * descriptionViewItem;              //@synthesize descriptionViewItem=_descriptionViewItem - In the implementation block
-(void)setDescriptionViewItem:(AMDescriptionViewItem *)arg1 ;
-(void)updatePreferredMaxLayoutWidth:(id)arg1 ;
-(void)scrollToTop;
-(AMDescriptionViewItem *)descriptionViewItem;
-(void)dealloc;
-(void)loadView;
@end

