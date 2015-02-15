/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzFilters/QFilterCell.h>

@class NSBox, NSPopUpButton, NSTextField, QFilterImageCompressionView;

@interface QFilterCellImageCompression : QFilterCell {

	NSBox* ImageCompressionBox;
	NSPopUpButton* ImageCompressionChoice;
	NSTextField* ImageCompressionText;
	QFilterImageCompressionView* ImageCompressionView;

}
+(char)needsToRemainInViewHierarchy;
-(void)instantiateView;
-(void)ImageCompressionChoiceAction:(id)arg1 ;
-(void)updateUI;
@end
