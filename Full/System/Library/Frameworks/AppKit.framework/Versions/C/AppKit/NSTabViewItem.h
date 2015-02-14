/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCoding.h>

@class NSString, NSView, NSColor, NSTabView, NSImage, NSViewController;

@interface NSTabViewItem : NSObject <NSCoding> {

	id _identifier;
	NSString* __label;
	NSView* _view;
	NSView* __initialFirstResponder;
	NSColor* __color;
	NSTabView* _tabView;
	unsigned long long _tabState;
	NSView* _lastKeyView;
	struct {
		unsigned hasCustomColor : 1;
		unsigned labelSizeIsValid : 1;
		unsigned autoGeneratedIFR : 1;
		unsigned isTabDisabled : 1;
		unsigned isActive : 1;
		unsigned RESERVED : 27;
	}  _tviFlags;
	CGSize _labelSize;
	CGRect _tabRect;
	long long _tabToolTipTag;
	id _auxiliaryStorage;

}

@property (retain) id identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSColor * color; 
@property (copy) NSString * label; 
@property (retain) NSImage * image; 
@property (retain) NSView * view; 
@property (retain) NSViewController * viewController; 
@property (readonly) unsigned long long tabState;                  //@synthesize tabState=_tabState - In the implementation block
@property (readonly) NSTabView * tabView;                          //@synthesize tabView=_tabView - In the implementation block
@property (assign) NSView * initialFirstResponder; 
@property (copy) NSString * toolTip; 
@property (copy) NSColor * _color;                                 //@synthesize _color=__color - In the implementation block
@property (assign) NSView * _initialFirstResponder;                //@synthesize _initialFirstResponder=__initialFirstResponder - In the implementation block
@property (copy) NSString * _label;                                //@synthesize _label=__label - In the implementation block
@property (retain) NSView * _view;                                 //@synthesize view=_view - In the implementation block
+(id)_labelCell;
+(id)tabViewItemWithViewController:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(char)accessibilityIsRoleAttributeSettable;
-(id)accessibilityRoleDescriptionAttribute;
-(char)accessibilityIsRoleDescriptionAttributeSettable;
-(id)accessibilityHelpAttribute;
-(char)accessibilityIsHelpAttributeSettable;
-(id)accessibilityFocusedAttribute;
-(char)accessibilityIsFocusedAttributeSettable;
-(void)accessibilitySetFocusedAttribute:(id)arg1 ;
-(id)accessibilityParentAttribute;
-(char)accessibilityIsParentAttributeSettable;
-(id)accessibilityWindowAttribute;
-(char)accessibilityIsWindowAttributeSettable;
-(id)accessibilityTopLevelUIElementAttribute;
-(char)accessibilityIsTopLevelUIElementAttributeSettable;
-(id)accessibilityPositionAttribute;
-(char)accessibilityIsPositionAttributeSettable;
-(id)accessibilitySizeAttribute;
-(char)accessibilityIsSizeAttributeSettable;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)accessibilityEnabledAttribute;
-(char)accessibilityIsEnabledAttributeSettable;
-(NSView *)view;
-(void)setInitialFirstResponder:(NSView *)arg1 ;
-(NSView *)_view;
-(id)accessibilityTitleAttribute;
-(char)accessibilityIsTitleAttributeSettable;
-(void)setView:(NSView *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(long long)interiorBackgroundStyle;
-(void)_commonInit;
-(id)accessibilityValueAttribute;
-(char)accessibilityIsValueAttributeSettable;
-(NSString *)toolTip;
-(void)setViewController:(NSViewController *)arg1 ;
-(void)setColor:(NSColor *)arg1 ;
-(void)setToolTip:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSView *)initialFirstResponder;
-(NSColor *)color;
-(NSColor *)_color;
-(NSViewController *)viewController;
-(NSString *)label;
-(void)_allocAuxiliaryStorage;
-(void)_deallocAuxiliaryStorage;
-(NSString *)_label;
-(unsigned long long)tabState;
-(NSTabView *)tabView;
-(void)_removeToolTip;
-(void)_setTabView:(id)arg1 ;
-(void)_setTabState:(unsigned long long)arg1 ;
-(void)_clearInitialFirstResponderAndLastKeyViewIfAutoGenerated;
-(id)_lastKeyView;
-(void)_finishedWiringNibConnections;
-(char)_initialFirstResponderIsAutoGenerated;
-(void)_setAutoGeneratedInitialFirstResponder:(id)arg1 ;
-(void)_setDefaultKeyViewLoopAndInitialFirstResponder;
-(char)_isTabEnabled;
-(void)_drawKeyViewOutline:(CGRect)arg1 ;
-(void)_setActive:(char)arg1 ;
-(void)_drawOrientedLabel:(char)arg1 inRect:(CGRect)arg2 ;
-(CGRect)_tabRect;
-(CGSize)sizeOfLabel:(char)arg1 ;
-(void)_setTabRect:(CGRect)arg1 ;
-(void)_resetToolTipIfNecessary;
-(void)_tabViewWillRemoveFromSuperview;
-(void)_invalidLabelSize;
-(void)_validateViewIsInViewHeirarchy:(id*)arg1 ;
-(NSView *)_initialFirstResponder;
-(void)set_color:(NSColor *)arg1 ;
-(void)set_label:(NSString *)arg1 ;
-(void)set_view:(NSView *)arg1 ;
-(void)set_initialFirstResponder:(NSView *)arg1 ;
-(void)_updateWithViewController:(id)arg1 ;
-(void)_setInitialFirstResponder:(id)arg1 autoGenerated:(char)arg2 ;
-(char)_canAutoGenerateKeyboardLoops;
-(char)_rotateCoordsForDrawLabelInRect:(CGRect)arg1 ;
-(void)drawLabel:(char)arg1 inRect:(CGRect)arg2 ;
-(id)_labelColor;
-(char)_isReallyPressed;
-(CGSize)_computeNominalDisplayedLabelSize;
-(CGSize)_computeMinimumDisplayedLabelSize;
-(void)_old_encodeWithCoder_NSTabViewItem:(id)arg1 ;
-(void)_old_initWithCoder_NSTabViewItem:(id)arg1 ;
-(CGSize)_computeDisplayedSizeOfString:(id)arg1 ;
-(NSRange)_rangeOfPrefixOfString:(id)arg1 fittingWidth:(double)arg2 withFont:(id)arg3 ;
-(id)_computeMinimumDisplayedLabelForWidth:(double)arg1 ;
-(long long)_addToolTipRect:(CGRect)arg1 ;
-(char)_hasCustomColor;
-(void)_setTabEnabled:(char)arg1 ;
-(id)_fullLabel;
@end

