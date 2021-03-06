/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSView.h>

@class NSHashTable;

@interface AMWhoseListView : NSView {

	double _headingHeight;
	double _subviewLeftMargin;
	double _gutterThickness;
	NSHashTable* _expandedSubviews;
	struct {
		unsigned ignoreSubviewFrameChanges : 1;
		unsigned isDeallocating : 1;
		unsigned ignoreSubviewAdditionAndRemoval : 1;
		unsigned RESERVED : 29;
	}  _vlvFlags;
	unsigned long long _disableSubviewLayout;
	unsigned long long _needsSubviewLayoutFromIndex;

}
-(void)setHeadingHeight:(double)arg1 ;
-(void)setSubviewLeftMargin:(double)arg1 ;
-(void)setGutterThickness:(double)arg1 ;
-(void)insertSubview:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)expandSubview:(id)arg1 ;
-(void)removeSubviewAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfSubview:(id)arg1 ;
-(void)disableSubviewLayout;
-(unsigned long long)numberOfSubviews;
-(double)subviewLeftMargin;
-(double)headingHeight;
-(void)_layoutSubviewsFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ignoringSubview:(id)arg3 ;
-(void)_layoutSubviewsFromIndex:(unsigned long long)arg1 ;
-(void)reenableSubviewLayout;
-(double)gutterThickness;
-(void)_layoutSubviewsIfNeeded;
-(void)subviewFrameChanged:(id)arg1 ;
-(char)isSubviewExpanded:(id)arg1 ;
-(void)collapseSubview:(id)arg1 ;
-(void)layoutSubviews;
-(id)subviewAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
@end

