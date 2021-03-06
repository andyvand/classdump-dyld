/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuickLookUI/QuickLookUI-Structs.h>
@class NSDictionary;

@interface QLSeamlessDocumentCloser : NSObject

@property (copy) NSDictionary * displayState; 
@property (getter=isAnimating,readonly) char animating; 
+(id)setupCloserForWindow:(id)arg1 withLauncherPort:(unsigned)arg2 ;
+(id)seamlessDocumentCloserForWindow:(id)arg1 ;
+(id)seamlessApplicationCloser;
+(id)seamlessDocumentCloserForURL:(id)arg1 ;
-(NSDictionary *)displayState;
-(void)closeWithContentFrame:(CGRect)arg1 block:(/*^block*/id)arg2 ;
-(void)dealloc;
-(char)isAnimating;
-(void)setDisplayState:(NSDictionary *)arg1 ;
-(void)closeWindow:(id)arg1 contentFrame:(CGRect)arg2 withBlock:(/*^block*/id)arg3 ;
@end

