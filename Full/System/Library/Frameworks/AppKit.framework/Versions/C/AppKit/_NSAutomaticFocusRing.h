/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface _NSAutomaticFocusRing : NSObject
+(id)focusRingRegionForWindow:(id)arg1 ;
+(void)compositeIfShownInWindow:(id)arg1 ;
+(id)focusRingViewForWindow:(id)arg1 ;
+(id)_state;
+(void)hideForView:(id)arg1 ;
+(void)setNeedsUpdateForView:(id)arg1 ;
+(void)updateForView:(id)arg1 ;
+(void)setActiveFirstResponderChanged;
+(void)updateIfNeeded;
+(void)showForView:(id)arg1 ;
+(void)translateFocusRingRegionBy:(CGPoint)arg1 forWindow:(id)arg2 ;
+(void)_focusRingViewDidChangeGeometryInWindow:(id)arg1 ;
+(void)_setFocusRingView:(id)arg1 ;
+(void)_clearOldFocusRing;
+(void)_invalidateAnimatedRingWithTimer:(id)arg1 ;
@end

