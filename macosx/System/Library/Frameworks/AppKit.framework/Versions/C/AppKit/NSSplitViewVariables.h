/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSString, NSMutableArray, NSArray, NSMutableDictionary;

@interface NSSplitViewVariables : NSObject {

	char isVertical;
	char dividerStyle;
	NSString* autosaveName;
	id delegate;
	char isPaneSplitter;
	int cachedSubviewOpacity;
	NSMutableArray* lastAdjustmentSubviewFrames;
	double lastAdjustmentDividerThickness;
	char lastAdjustDividerOrientation;
	NSMutableArray* originalSubviewProportionsDuringResizing;
	NSMutableArray* subviewIsResizable;
	NSArray* stackConstraints;
	NSArray* preferredSizeConstraints;
	NSArray* fallbackSizeConstraints;
	NSMutableDictionary* holdingPrioritiesByViewIndex;
	struct {
		unsigned resizeSubviewsWithOldSizeIsBeingInvokedByViewWillDraw : 1;
		unsigned resizeSubviewsWithOldSizeInvokedDelegate : 1;
		unsigned warnedAboutInvalidSubviewFrames : 1;
		unsigned warnedAboutInvalidSubviewOrder : 1;
		unsigned delegateCursorOfDividerAtIndex : 1;
		unsigned unarchiving : 1;
		unsigned delaySubviewAdjustment : 1;
		unsigned autosaveDelayed : 1;
		unsigned shouldDelayAutosave : 1;
		unsigned firstLogicalDividerIsHidden : 1;
		unsigned lastLogicalDividerIsHidden : 1;
		unsigned dividerColorSet : 1;
		unsigned performingConstraintBasedPresentDividerDragResult : 1;
		unsigned alwaysUseAlignmentRects : 1;
		unsigned integralizeInUserSpace : 1;
		unsigned splitViewControllerAllowsPropertyChange : 1;
		unsigned splitViewOwnedBySplitViewController : 1;
		unsigned unused : 15;
	}  svFlags;

}
@end

