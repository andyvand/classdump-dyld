/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSSplitView.h>

@class NSImage, NSLayoutConstraint;

@interface AMSplitView : NSSplitView {

	NSImage* _splitterDimple;
	NSImage* _splitterBackground;
	NSLayoutConstraint* _breadthConstraint;
	double _expandedPosition;
	char _collapsesToRightBottom;
	char _isCollapsing;

}

@property (assign) char collapsesToRightOrBottom;                       //@synthesize collapsesToRightBottom=_collapsesToRightBottom - In the implementation block
@property (assign) double expandedPosition;                             //@synthesize expandedPosition=_expandedPosition - In the implementation block
@property (readonly) char isCollapsing;                                 //@synthesize isCollapsing=_isCollapsing - In the implementation block
@property (retain) NSLayoutConstraint * breadthConstraint;              //@synthesize breadthConstraint=_breadthConstraint - In the implementation block
-(char)usesCustomDivider;
-(char)collapsesToRightOrBottom;
-(void)setExpandedPosition:(double)arg1 ;
-(void)engageBreadthConstraintForSubview:(id)arg1 ;
-(void)expandWithAnimation:(char)arg1 ;
-(void)_collapse:(char)arg1 animated:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)collapseWithAnimation:(char)arg1 ;
-(double)positionOfDividerAtIndex:(long long)arg1 ;
-(void)hideSubview:(id)arg1 ;
-(void)expand;
-(void)collapse;
-(void)setCollapsesToRightOrBottom:(char)arg1 ;
-(double)expandedPosition;
-(char)isCollapsing;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setPosition:(double)arg1 ofDividerAtIndex:(long long)arg2 ;
-(void)setDividerStyle:(long long)arg1 ;
-(NSLayoutConstraint *)breadthConstraint;
-(void)disengageBreadthConstraint;
-(void)setBreadthConstraint:(NSLayoutConstraint *)arg1 ;
-(id)dividerColor;
-(double)dividerThickness;
-(void)_autosaveSubviewLayoutIfNecessary;
-(void)drawDividerInRect:(CGRect)arg1 ;
@end

