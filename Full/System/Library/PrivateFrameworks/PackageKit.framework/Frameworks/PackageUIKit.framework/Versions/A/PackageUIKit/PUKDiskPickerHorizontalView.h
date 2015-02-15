/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Frameworks/PackageUIKit.framework/Versions/A/PackageUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageUIKit/PackageUIKit-Structs.h>
#import <AppKit/NSView.h>

@class PUKDiskPickerHorizontalMatrix, NSImageView, NSScrollView, NSButton;

@interface PUKDiskPickerHorizontalView : NSView {

	id _outlineViewClientProxy;
	PUKDiskPickerHorizontalMatrix* _matrix;
	NSImageView* _pocketShadowL;
	NSImageView* _pocketShadowR;
	NSScrollView* _scrollView;
	NSButton* _scrollLeftButton;
	NSButton* _scrollRightButton;
	char _allowsMultipleSelection;
	id _cachedDisk;
	id _previousSelectedCell;

}
-(void)boundsDidChange:(id)arg1 ;
-(id)diskPickerDataSource;
-(void)setDiskPickerDataSource:(id)arg1 ;
-(id)diskPickerDelegate;
-(void)setDiskPickerDelegate:(id)arg1 ;
-(id)selectedDisk;
-(void)setSelectedDisk:(id)arg1 ;
-(int)numDisks;
-(void)_scrollLeftButtonPressed:(id)arg1 ;
-(char)_canScrollLeft;
-(void)_scrollRightButtonPressed:(id)arg1 ;
-(char)_canScrollRight;
-(void)_setUpMatrix;
-(void)_setupPocketShadows;
-(void)_setupScrollButtons;
-(void)_centerDisks;
-(void)selectPrevDisk;
-(void)selectNextDisk;
-(void)didSelectDisk:(id)arg1 ;
-(id)cellForDisk:(id)arg1 ;
-(void)unhighlightSelectedCell;
-(id)selectedDisks;
-(int)selectedDiskIndex;
-(id)diskAtIndex:(int)arg1 ;
-(CGRect)frameOfDiskAtIndex:(int)arg1 ;
-(int)indexOfDisk:(id)arg1 ;
-(void)didUnselectDisk:(id)arg1 ;
-(void)keyPressEvent:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(unsigned long long)accessibilityArrayAttributeCount:(id)arg1 ;
-(unsigned long long)accessibilityIndexOfChild:(id)arg1 ;
-(id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)viewWillDraw;
-(char)isOpaque;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(id)selectedCell;
-(void)keyDown:(id)arg1 ;
-(char)allowsMultipleSelection;
-(void)scrollWheel:(id)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(id)_accessibilityChildren;
-(void)viewDidEndLiveResize;
-(void)reloadItem:(id)arg1 ;
-(void)viewWillStartLiveResize;
@end

