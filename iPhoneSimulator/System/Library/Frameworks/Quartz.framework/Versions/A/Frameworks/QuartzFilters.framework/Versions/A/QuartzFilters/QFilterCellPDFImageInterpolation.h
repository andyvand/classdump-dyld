/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:19 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzFilters/QFilterCell.h>

@class NSBox, NSPopUpButton, QFilterPDFImageInterpolationView;

@interface QFilterCellPDFImageInterpolation : QFilterCell {

	NSBox* PDFImageInterpolationBox;
	NSPopUpButton* PDFImageInterpolationChoice;
	QFilterPDFImageInterpolationView* PDFImageInterpolationView;

}
+(char)needsToRemainInViewHierarchy;
-(void)instantiateView;
-(void)PDFImageInterpolationChoiceAction:(id)arg1 ;
-(void)updateUI;
@end

