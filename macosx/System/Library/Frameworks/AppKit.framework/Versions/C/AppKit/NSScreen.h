/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSDictionary, NSColorSpace;

@interface NSScreen : NSObject {

	CGRect _frame;
	int _depth;
	int _screenNumber;
	id _auxiliaryStorage;

}

@property (readonly) int depth; 
@property (readonly) CGRect frame; 
@property (readonly) CGRect visibleFrame; 
@property (copy,readonly) NSDictionary * deviceDescription; 
@property (readonly) NSColorSpace * colorSpace; 
@property (readonly) const int* supportedWindowDepths; 
@property (readonly) double backingScaleFactor; 
+(id)_shk_screenContainingPoint:(CGPoint)arg1 ;
+(id)safari_menuBarScreen;
+(CGRect)coreGraphicsScreenRectForAppKitScreenRect:(CGRect)arg1 ;
+(id)shortestScreen;
+(id)screenForMouseLocation;
+(CGPoint)coreGraphicsScreenPointForAppKitScreenPoint:(CGPoint)arg1 ;
+(id)realScreens;
+(id)quickLook_screenContainingPoint:(CGPoint)arg1 ;
+(id)_zeroScreen;
+(double)_zeroScreenHeight;
+(void)initialize;
+(id)mainScreen;
+(id)screens;
+(char)screensHaveSeparateSpaces;
+(char)_invalidateDisplayConfig;
+(char)_invalidatePresentationConfigIfNeeded;
+(char)_invalidateDockConfigIfNeeded;
+(char)_invalidateDisplayConfigIfNeeded;
+(void)_prepare;
+(char)_spacePerDisplay;
+(id)_screenForScreenNumber:(long long)arg1 ;
+(void)_displayProfileChangedForScreenNumber:(long long)arg1 ;
+(double)_backingScaleFactorForScreen:(id)arg1 ;
+(void)_resetScreensForSideEffects;
+(void)_resetSharedInfo;
+(void)_resetCachedGreatestBackingScaleFactor;
+(void)_resetScreensUnsafe;
+(void)_resetScreensSafe;
+(char)_updateSeedsForReason:(unsigned long long)arg1 ;
+(void)_resetScreensForReason:(unsigned long long)arg1 ;
+(char)_resetScreensIfNeededForReason:(unsigned long long)arg1 ;
+(void)_resetScreens;
+(char)_updateDockSeeds;
+(char)_updatePresentationSeeds;
+(char)_updateDisplaySeeds;
+(char)_invalidateIfNeededForReason:(unsigned long long)arg1 ;
+(CGRect)_allScreensFrame;
+(char)_zeroScreenIsNew;
+(id)deepestScreen;
+(double)_deviceResolutionForScreen:(id)arg1 ;
+(id)_screenForUUIDString:(id)arg1 ;
+(void)_showShieldWindowsForFullScreen;
+(void)_hideShieldWindowsForFullScreen;
+(char)_captureAllScreens:(id*)arg1 ;
+(char)_releaseAllCapturedScreens:(id*)arg1 ;
+(int)_shieldingWindowLevel;
-(CGRect)safari_visibleFrame;
-(char)isVirtual;
-(id)init;
-(void)dealloc;
-(CGRect)frame;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGRect)visibleFrame;
-(id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(long long)_screenNumber;
-(NSColorSpace *)colorSpace;
-(double)backingScaleFactor;
-(CGRect)backingAlignedRect:(CGRect)arg1 options:(unsigned long long)arg2 ;
-(CGRect)convertRectToBacking:(CGRect)arg1 ;
-(CGRect)convertRectFromBacking:(CGRect)arg1 ;
-(NSDictionary *)deviceDescription;
-(double)_menuBarHeight;
-(void)_setCachedColorSpace:(id)arg1 ;
-(char)_isZeroScreen;
-(CGRect)_layoutFrame;
-(CGRect)_frameByAdjustingFrameForDock:(CGRect)arg1 ;
-(void)_setCachedUUIDString:(id)arg1 ;
-(void)_resetCachedDisplayScaleFactor;
-(void)_resetCachedDepth;
-(void)_resetCachedFrame;
-(void)_resetCachedColorSpace;
-(void)_resetCachedResolution;
-(void)_resetCachedDisplayUUIDString;
-(int)depth;
-(CGSize)_resolution;
-(id)initWithDisplayID:(int)arg1 ;
-(void)_setSharedInfo:(id)arg1 ;
-(id)_UUIDString;
-(void)_reset;
-(void)_adjustCachedFrameForZeroScreenHeight:(double)arg1 ;
-(CGRect)_sharedDockRect;
-(CGRect)_safeVisibleFrame;
-(id)_snapshot;
-(const int*)supportedWindowDepths;
-(double)userSpaceScaleFactor;
-(id)imageInRect:(CGRect)arg1 ;
-(id)imageInRect:(CGRect)arg1 underWindow:(id)arg2 ;
-(unsigned long long)_currentSpace;
-(char)_isActiveScreen;
-(void)_showShieldWindow;
-(void)_hideShieldWindow;
-(id)displayLinkWithHandler:(/*^block*/id)arg1 ;
-(unsigned)_displayID;
-(id)_bestSettingWithBitsPerPixel:(int)arg1 width:(int)arg2 height:(int)arg3 refreshRate:(double)arg4 exactMatch:(char*)arg5 ;
-(char)_capture:(id*)arg1 ;
-(char)_isCaptured;
-(char)_releaseCapture:(id*)arg1 ;
-(id)_currentSetting;
-(id)_availableSettings;
-(id)_bestSettingWithBitsPerPixel:(int)arg1 width:(int)arg2 height:(int)arg3 exactMatch:(char*)arg4 ;
-(id)_bestSettingSimilarToSetting:(id)arg1 exactMatch:(char*)arg2 ;
-(char)_switchToSetting:(id)arg1 error:(id*)arg2 ;
-(void)addUpdateHandler:(/*^block*/id)arg1 ;
@end

