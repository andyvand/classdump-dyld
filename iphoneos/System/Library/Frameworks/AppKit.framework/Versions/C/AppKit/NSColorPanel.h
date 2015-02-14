/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSPanel.h>

@class NSMutableArray, NSView, NSColor;

@interface NSColorPanel : NSPanel {

	id _colorSwatch;
	id _accessoryContainerView;
	id _colorWell;
	NSMutableArray* _pickersWithLoadedViews;
	id _magnifyButton;
	id _middleView;
	id _opacitySlider;
	id _opacityText;
	id _opacityView;
	id _modalButtons;
	id _pickerView;
	id _customViewsList;
	id _customPickerList;
	id _currViewObject;
	id _bottomConstraint;
	id _target;
	id _accessoryView;
	SEL _action;
	CGSize _minColorPanelSize;
	CGSize _maxColorPanelSize;
	id _accessoryContainerViewHeight;
	id _opacityViewHeight;
	id _reserved1;
	id _reserved2;
	id _resizeDimple;
	char _reserved3;
	char _reserved4;
	char _handlingOpacityMoveAction;
	char _ignoreConstraints;
	char _continuous;
	char _allowColorSetting;
	char _stillInitializing;
	char _reserved5;
	id _opacityTextController;

}

@property (retain) NSView * accessoryView; 
@property (getter=isContinuous) char continuous; 
@property (assign) char showsAlpha; 
@property (assign) long long mode; 
@property (copy) NSColor * color; 
@property (readonly) double alpha; 
+(char)sharedColorPanelExists;
+(id)sharedColorPanel;
+(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
+(char)ignoreModifierKeysWhileDragging;
+(char)dragColor:(id)arg1 withEvent:(id)arg2 fromView:(id)arg3 ;
+(void)_setBundle:(id)arg1 forClassPresentInAppKit:(Class)arg2 ;
+(void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)setPickerMask:(unsigned long long)arg1 ;
+(void)setPickerMode:(long long)arg1 ;
+(char)dragColor:(id)arg1 withEvent:(id)arg2 inView:(id)arg3 ;
+(id)_bundleForClassPresentInAppKit:(Class)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(void)_endLiveResize;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setAccessoryView:(NSView *)arg1 ;
-(NSView *)accessoryView;
-(void)setHidesOnDeactivate:(char)arg1 ;
-(void)becomeKeyWindow;
-(void)resignKeyWindow;
-(id)_startingWindowForSendAction:(SEL)arg1 ;
-(id)effectiveAppearance;
-(long long)mode;
-(void)setMode:(long long)arg1 ;
-(void)setAppearance:(id)arg1 ;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(void)_selectFirstKeyView;
-(void)_cancelKey:(id)arg1 ;
-(void)_reallyDoOrderWindow:(long long)arg1 relativeTo:(long long)arg2 findKey:(char)arg3 forCounter:(char)arg4 force:(char)arg5 isModal:(char)arg6 ;
-(char)isContinuous;
-(void)setContinuous:(char)arg1 ;
-(void)_setShowAlpha:(char)arg1 andForce:(char)arg2 ;
-(void)_dimpleDoubleClicked:(id)arg1 event:(id)arg2 ;
-(void)_dimpleDragStarted:(id)arg1 event:(id)arg2 ;
-(void)setColor:(NSColor *)arg1 ;
-(id)_toolTipForColorPicker:(id)arg1 ;
-(id)_colorPickers;
-(void)_switchViewForToolbarItem:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)_middleViewFrameChanged:(id)arg1 ;
-(void)colorSwathesChangedInAnotherApplicationNotification:(id)arg1 ;
-(id)_constructWithPickers:(long long)arg1 ;
-(void)_setTitleFixedPointWindowFrame:(CGSize)arg1 display:(char)arg2 animate:(char)arg3 ;
-(NSColor *)color;
-(void)_validateOpacitySlider;
-(char)_determinesMinSizeFromAccessoryView:(id)arg1 ;
-(CGSize)_newLegalSizeFromSize:(CGSize)arg1 force:(char)arg2 roundDirection:(long long)arg3 ;
-(id)_keyViewPrecedingAccesoryView;
-(id)_keyViewFollowingAccessoryView;
-(char)isViewOfPickerLoaded:(id)arg1 ;
-(void)setViewOfPickerIsLoaded:(id)arg1 ;
-(id)_provideNewViewFor:(id)arg1 initialViewRequest:(char)arg2 ;
-(void)_switchToPicker:(id)arg1 ;
-(void)_saveMode;
-(void)_resetOpacity:(id)arg1 andForceSetColor:(char)arg2 ;
-(void)_changeMinColorPanelSizeByDelta:(CGSize)arg1 compareWithOldMinSize:(char)arg2 oldMinSize:(CGSize)arg3 setWindowFrame:(char)arg4 ;
-(void)_stopModal:(id)arg1 ;
-(id)_keyViewPrecedingModalButtons;
-(id)_keyViewFollowingModalButtons;
-(void)_setUtilityWindow:(char)arg1 ;
-(void)_setUseModalAppearance:(char)arg1 ;
-(void)_forceSendAction:(char)arg1 notification:(char)arg2 firstResponder:(char)arg3 ;
-(id)_keyViewFollowingOpacityViews;
-(char)_shouldLoadColorPickerWithClassName:(id)arg1 ;
-(void)attachColorList:(id)arg1 ;
-(void)detachColorList:(id)arg1 ;
-(void)_appendColorPicker:(id)arg1 ;
-(void)_storeNewColorInColorWell:(id)arg1 ;
-(id)_colorPickerPaths;
-(void)_loadPickerBundlesIn:(id)arg1 ;
-(void)_syncSwatchSizeToSavedNumVisibleRows;
-(void)_setupButtonImageAndToolTips;
-(long long)_savedMode;
-(double)_insertionOrderForPicker:(id)arg1 ;
-(void)_changeMinColorPanelSizeByDelta:(CGSize)arg1 setWindowFrame:(char)arg2 ;
-(void)_pinViews:(id)arg1 ;
-(void)changeWindowFrameSizeByDelta:(CGSize)arg1 display:(char)arg2 animate:(char)arg3 ;
-(void)_unpinViews:(id)arg1 ;
-(void)_setNumVisibleSwatchRows:(long long)arg1 ;
-(CGSize)_panelSizeExcludingToolbar;
-(void)_setMinPickerContentSize:(CGSize)arg1 ;
-(void)_sizeWindowForPicker:(id)arg1 ;
-(id)_keyViewPrecedingPickerViews;
-(id)_keyViewFollowingPickerViews;
-(void)_forceSetColor:(id)arg1 ;
-(void)_sendActionAndNotification;
-(void)_switchToAppropriateModeForColorIfNecessary:(id)arg1 ;
-(id)__target;
-(SEL)__action;
-(long long)__numberOfVisibleRowsInColorSwatch;
-(long long)__numberOfRowsToToggleVisibleInColorSwatch;
-(void)__setNumberOfRowsToToggleVisibleInColorSwatch:(long long)arg1 ;
-(id)__swatchColors;
-(long long)colorMask;
-(id)setColorMask:(long long)arg1 ;
-(void)_resetOpacity:(id)arg1 ;
-(CGRect)_adjustedFrameFromDefaults:(CGRect)arg1 ;
-(CGRect)_adjustedFrameForSaving:(CGRect)arg1 ;
-(void)_timedAdjustTextControl:(id)arg1 ;
-(void)setShowsAlpha:(char)arg1 ;
-(char)showsAlpha;
-(id)_pinViews:(id)arg1 resizeFlagsToLeaveAlone:(long long)arg2 ;
-(void)_unpinViews:(id)arg1 resizeMasks:(id)arg2 ;
-(id)_arrayForPartialPinningFromArray:(id)arg1 ;
-(void)_magnify:(id)arg1 ;
-(void)magnifier:(id)arg1 didSelectColor:(id)arg2 ;
-(void)magnifierDidFailToSelectColor:(id)arg1 ;
-(double)alpha;
-(void)_set:(id)arg1 ;
-(void)_colorWellAcceptedColor:(id)arg1 ;
-(CGSize)windowWillResize:(id)arg1 toSize:(CGSize)arg2 ;
@end

