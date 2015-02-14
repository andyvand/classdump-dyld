/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSImage;

@interface NSVisualEffectView : NSView {

	NSVisualEffectViewInternal* _NSVisualEffectViewInternal;
	unsigned _dirty : 1;
	unsigned _hasMask : 1;
	unsigned _disableBlurFilter : 1;
	unsigned _titlebarMaterialDrawsSeparator : 1;
	unsigned _maskSet : 1;
	unsigned _clear : 1;
	unsigned _updateInDidMoveToWindow : 1;
	unsigned _hasAcceleration : 1;
	unsigned _emphasized : 1;
	unsigned _hasAccelerationCached : 1;
	unsigned _reservedFlags : 22;

}

@property (assign) long long material; 
@property (readonly) long long interiorBackgroundStyle; 
@property (assign) long long blendingMode; 
@property (assign) long long state; 
@property (retain) NSImage * maskImage; 
+(id)safari_completionMenuBackdropVisualEffectViewWithFrame:(CGRect)arg1 ;
+(id)safari_windowBackdropVisualEffectViewWithFrame:(CGRect)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setLayer:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(long long)state;
-(id)contentView;
-(void)layout;
-(void)updateLayer;
-(unsigned long long)styleMask;
-(void)_markDirtyIfHasAccelerationChanged;
-(char)wantsUpdateLayer;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)_didRemoveLayer;
-(char)allowsVibrancy;
-(void)_windowChangedKeyState;
-(void)viewDidMoveToWindow;
-(long long)interiorBackgroundStyle;
-(void)_setWindow:(id)arg1 ;
-(void)_commonInit;
-(id)_backgroundColorForFontSmoothing;
-(char)shouldSetFontSmoothingBackgroundColor;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(id)_vibrancyFilter;
-(char)_isHUDWindow;
-(char)_isUtility;
-(void)_updateVibrancy;
-(id)fontSmoothingBackgroundColor;
-(void)_controlTintChanged:(id)arg1 ;
-(void)viewDidHide;
-(void)_recursiveRemoveCachedContainngBackdropViewFromView:(id)arg1 ;
-(void)_freeCachedMaskImages;
-(void)_releaseBackdropIfNeeded;
-(void)_removeProxyLayerIfNeeded;
-(void)_removeBackdropLayerIfNeeded;
-(long long)blendingMode;
-(char)emphasized;
-(long long)_internalMaterialFromMaterial:(long long)arg1 ;
-(void)_setInternalMaterialType:(long long)arg1 ;
-(void)_viewDidChangeAppearance:(id)arg1 ;
-(long long)material;
-(void)_markDirty;
-(char)_isClear;
-(const SCD_Struct_NS85*)_currentBackdropViewSpec;
-(void)_invalidateAllSubviewsBecauseFontReferenceColorChanged;
-(void)_invalidateTextAndFontSmoothignInView:(id)arg1 ;
-(void)_invalidateSubviewsOfView:(id)arg1 ;
-(long long)_internalMaterialType;
-(char)_needsCGSBackdrop;
-(void)setTitlebarMaterialDrawsSeparator:(char)arg1 ;
-(void)_accessiblityTransChanged:(id)arg1 ;
-(void)_sleepWakeChanged:(id)arg1 ;
-(void)setBlendingMode:(long long)arg1 ;
-(void)setMaskImage:(NSImage *)arg1 ;
-(void)setVibrancyEffect:(long long)arg1 ;
-(void)setMaterial:(long long)arg1 ;
-(NSImage *)maskImage;
-(long long)vibrancyEffect;
-(char)_shouldUseActiveAppearance;
-(id)_currentMaterialName;
-(double)_currentSaturationMultiplier;
-(id)_createOrUpdateBackdrop:(id)arg1 view:(id)arg2 vibrancyEffect:(long long)arg3 ;
-(id)_createOrUpdateProxyLayer:(id)arg1 view:(id)arg2 vibrancyEffect:(long long)arg3 ;
-(char)_useAccessibilityColors;
-(char)_needsFilters;
-(double)_currentBlurRadius;
-(id)_currentInsideWindowBackgroundColor;
-(id)_filtersForLayer:(id)arg1 ;
-(char)_needsBackdropLayer;
-(void)_updateCABackdropLayer;
-(void)_updateFillLayer;
-(void)_updateTintLayer;
-(void)_updateBackgroundLayer;
-(void)_updateLayerMaskForWithinWindowBlending;
-(char)_isTexturedWindow;
-(char)_needsBackgroundLayer;
-(CFStringRef)_cuiWindowType;
-(id)_cuiOptionsForWindowType:(CFStringRef)arg1 ;
-(void)_cuiMakeOrUpdateBackgroundLayer:(id*)arg1 ;
-(char)_needsTintLayer;
-(id)_currentTintColor;
-(char)_needsFillLayer;
-(id)_currentFillLayerColor;
-(void)_removeClearCopyLayersIfNeeded;
-(void)_updateBackdropLayerForBlendingInsideWindow;
-(void)_updateLayerToPokeOutWindowPixels;
-(id)_generateMaskImage;
-(id)_generateMaskImageWithCurrentFillColor;
-(id)_currentFillColor;
-(void)_updateBackdropLayer;
-(void)_updateIfNeeded;
-(char)_needsProxyLayer;
-(void)_updateIfNeededIfNotUsingProxyLayers;
-(id)_accessibilityFillColor;
-(id)_clearColorForCGSFill;
-(void)_setFillColorAndDrawMaskInRect:(CGRect)arg1 ;
-(void)renewGState;
-(void)_update;
-(void)_updateCGSWindowBackdrop;
-(void)_updateAssociatedViewBackdrops;
-(void)_updateProxyLayer;
-(void)_updateAssociatedViewProxyLayers;
-(char)_needsMaskImage;
-(void)_drawClearInMaskImage;
-(void)_subviewGeometryChanged:(id)arg1 ;
-(void)setEmphasized:(char)arg1 ;
-(void)_setClear:(char)arg1 ;
-(CGRect)rectToClearBackingStore;
-(char)disableBlurFilter;
-(void)setDisableBlurFilter:(char)arg1 ;
-(char)titlebarMaterialDrawsSeparator;
-(CGRect)_blurInputBounds;
-(id)_backdropLayer;
-(id)_associatedThemeFrame;
-(void)_setAssociatedThemeFrame:(id)arg1 ;
-(id)_tintLayer;
-(id)_fillLayer;
-(int)_vibrancyBlendMode;
-(void)_registerAssociatedView:(id)arg1 ;
-(void)_unregisterAssociatedView:(id)arg1 ;
@end

