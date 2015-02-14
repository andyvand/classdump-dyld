/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzFilters/QFilterCell.h>

@class NSTextField, NSBox, NSPopUpButton, QFilterAssignProfView;

@interface QFilterCellAssignProf : QFilterCell {

	NSTextField* AssignProfText;
	NSBox* AssignProfBox;
	NSPopUpButton* AssignProfColorModels;
	NSPopUpButton* AssignProfObjects;
	NSPopUpButton* AssignProfProfiles;
	QFilterAssignProfView* AssignProfView;

}
+(char)needsToRemainInViewHierarchy;
-(void)instantiateView;
-(void)AssignColorModelObjectAction:(id)arg1 ;
-(void)AssignProfileAction:(id)arg1 ;
-(void)updateUI;
@end

