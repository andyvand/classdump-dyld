/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCoding.h>
#import <AppKit/NSUserInterfaceItemIdentification.h>

@class NSString, NSWindow, NSAppearance, NSViewController;

@interface NSWindowTemplate : NSObject <NSCoding, NSUserInterfaceItemIdentification> {

	CGRect windowRect;
	int windowStyleMask;
	int windowBacking;
	NSString* windowTitle;
	id viewClass;
	NSString* windowClass;
	id windowView;
	NSWindow* realObject;
	id extension;
	CGSize minSize;
	struct {
		unsigned _PADDING : 9;
		unsigned isRestorable : 1;
		unsigned hidesToolbarButton : 1;
		unsigned autorecalculatesKeyViewLoop : 1;
		unsigned hideShadow : 1;
		unsigned allowsToolTipsWhenInactive : 1;
		unsigned autoSetMiniaturizableMask : 1;
		unsigned autoSetZoomableMask : 1;
		unsigned  : 2;
		unsigned savePosition : 1;
		unsigned autoPositionMask : 6;
		unsigned dynamicDepthLimit : 1;
		unsigned wantsToBeColor : 1;
		unsigned visible : 1;
		unsigned oneShot : 1;
		unsigned defer : 1;
		unsigned dontFreeWhenClosed : 1;
		unsigned hidesOnDeactivate : 1;
	}  _wtFlags;
	CGRect screenRect;
	NSString* frameAutosaveName;
	CGSize maxSize;
	CGSize contentMinSize;
	CGSize contentMaxSize;
	unsigned long long windowBackingLocation;
	unsigned long long windowSharingType;
	char autorecalculateContentBorderThicknesses[4];
	double contentBorderThicknesses[4];
	NSString* userInterfaceIdentifier;
	unsigned long long animationBehavior;
	unsigned long long collectionBehavior;
	char isRestorableWasDecodedFromArchive;
	NSAppearance* appearance;
	NSViewController* _contentViewController;

}

@property (nonatomic,retain) NSAppearance * appearance; 
@property (nonatomic,retain) NSViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (copy) NSString * identifier; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setToolbar:(id)arg1 ;
-(id)toolbar;
-(void)setOneShot:(char)arg1 ;
-(void)setRestorable:(char)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(long long)animationBehavior;
-(void)setAnimationBehavior:(long long)arg1 ;
-(unsigned long long)styleMask;
-(char)hidesOnDeactivate;
-(void)setHidesOnDeactivate:(char)arg1 ;
-(id)userInterfaceItemIdentifier;
-(void)setUserInterfaceItemIdentifier:(id)arg1 ;
-(CGSize)maxSize;
-(NSAppearance *)appearance;
-(void)setAppearance:(NSAppearance *)arg1 ;
-(void)setStyleMask:(unsigned long long)arg1 ;
-(void)setHasShadow:(char)arg1 ;
-(id)className;
-(void)setMinSize:(CGSize)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(void)setClassName:(id)arg1 ;
-(void)setContentBorderThickness:(double)arg1 forEdge:(unsigned long long)arg2 ;
-(double)contentBorderThicknessForEdge:(unsigned long long)arg1 ;
-(id)frameAutosaveName;
-(CGSize)minSize;
-(void)setFrameAutosaveName:(id)arg1 ;
-(void)setReleasedWhenClosed:(char)arg1 ;
-(void)setCollectionBehavior:(unsigned long long)arg1 ;
-(char)hasShadow;
-(id)nibInstantiate;
-(unsigned long long)collectionBehavior;
-(char)isOneShot;
-(NSViewController *)contentViewController;
-(unsigned long long)interfaceStyle;
-(void)setInterfaceStyle:(unsigned long long)arg1 ;
-(unsigned long long)backingType;
-(void)setContentViewController:(NSViewController *)arg1 ;
-(char)allowsToolTipsWhenApplicationIsInactive;
-(char)isReleasedWhenClosed;
-(void)setShowsToolbarButton:(char)arg1 ;
-(void)setContentMinSize:(CGSize)arg1 ;
-(void)setContentMaxSize:(CGSize)arg1 ;
-(void)setAutorecalculatesContentBorderThickness:(char)arg1 forEdge:(unsigned long long)arg2 ;
-(void)setAutorecalculatesKeyViewLoop:(char)arg1 ;
-(void)setAllowsToolTipsWhenApplicationIsInactive:(char)arg1 ;
-(void)setBackingType:(unsigned long long)arg1 ;
-(char)showsToolbarButton;
-(CGSize)contentMinSize;
-(CGSize)contentMaxSize;
-(char)autorecalculatesContentBorderThicknessForEdge:(unsigned long long)arg1 ;
-(unsigned long long)autoPositionMask;
-(char)hasDynamicDepthLimit;
-(char)isRestorable;
-(char)autorecalculatesKeyViewLoop;
-(void)setDynamicDepthLimit:(char)arg1 ;
-(Class)windowClassForNibInstantiate;
-(char)isDeferred;
-(void)setDeferred:(char)arg1 ;
-(char)wantsToBeColor;
-(void)setWantsToBeColor:(char)arg1 ;
-(void)setAutoPositionMask:(unsigned long long)arg1 ;
-(unsigned long long)windowSharingType;
-(void)setWindowSharingType:(unsigned long long)arg1 ;
-(unsigned long long)windowBackingLocation;
-(void)setWindowBackingLocation:(unsigned long long)arg1 ;
@end

