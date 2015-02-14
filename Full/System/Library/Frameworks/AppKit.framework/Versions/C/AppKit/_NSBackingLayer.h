/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <QuartzCore/CALayer.h>

@interface _NSBackingLayer : CALayer
+(void)initialize;
-(void)setContentsScale:(double)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)layoutSublayers;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)display;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)displayIfNeeded;
-(char)NS_wantsToPrefetchTiles;
-(void)NS_showPrefetchedContentsIfNecessaryInRect:(CGRect)arg1 ;
-(void)NS_setPresentationRect:(CGRect)arg1 ;
-(void)NS_setContentsScaleSize:(CGSize)arg1 ;
-(void)NS_prefetchTilesWithScrollVelocity:(CGPoint)arg1 hasMorePrefetch:(char*)arg2 ;
-(char)NS_prefetchContentsInRect:(CGRect)arg1 scrollVelocity:(CGPoint)arg2 ;
-(void)NS_setIsScrolling:(char)arg1 ;
-(void)NS_setPreparedContentRect:(CGRect)arg1 ;
-(CGRect)NS_renderedRectInRect:(CGRect)arg1 scrollVelocity:(CGPoint)arg2 ;
-(CGRect)NS_activeVisibleRect;
-(id)NS_makeContentsLayer;
-(char)NS_hasPrefetchedContentsForRect:(CGRect)arg1 ;
-(char)NS_hasPartialPrefetchedContentsForRect:(CGRect)arg1 ;
@end

