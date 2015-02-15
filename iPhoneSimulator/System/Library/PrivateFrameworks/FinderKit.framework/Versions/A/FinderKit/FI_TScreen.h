/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FinderKit/FinderKit-Structs.h>
@interface FI_TScreen : NSObject
+(id)primaryScreen;
+(CGRect)primaryScreenVisibleFrame;
+(double)cgScaleFactorForScreen:(id)arg1 ;
+(id)greatestAreaScreenForRect:(const CGRect*)arg1 ;
+(id)closestScreenForOffScreenRect:(const CGRect*)arg1 ;
+(id)greatestAreaScreenForPoint:(const CGPoint*)arg1 ;
+(CGRect)primaryScreenFrame;
+(unsigned)primaryScreenDisplayID;
+(double)primaryScreenCGScaleFactor;
+(double)cgScaleFactorForGreatestAreaScreenRect:(const CGRect*)arg1 ;
+(set<double, std::__1::less<double>, std::__1::allocator<double> >*)availableScaleFactors;
+(id)closestScreenForOffScreenPoint:(const CGPoint*)arg1 ;
+(CGRect)availableWindowPositioningBoundsForRect:(const CGRect*)arg1 ;
+(CGRect)availableWindowPositioningBoundsForPoint:(const CGPoint*)arg1 ;
+(id)screenWithDisplayID:(unsigned)arg1 ;
+(void)forceWindowOntoPrimaryDisplay:(id)arg1 offsetFromBottom:(double)arg2 ;
+(void)forceOpenPanelOntoPrimaryDisplay:(id)arg1 offsetFromBottom:(double)arg2 ;
@end

