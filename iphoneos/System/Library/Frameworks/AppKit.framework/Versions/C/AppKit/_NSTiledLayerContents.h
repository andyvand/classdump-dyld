/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class _NSTiledLayer, NSRecursiveLock, NSRegion, NSMutableDictionary;

@interface _NSTiledLayerContents : NSObject {

	_NSTiledLayer* _tiledLayer;
	NSRecursiveLock* _displayLock;
	NSRegion* _dirtyRegion;
	NSMutableDictionary* _tiles;
	CGRect _activeRect;
	CGRect _coverageRect;
	CGRect _newCoverageRect;
	CGRect _presentationRect;
	CGSize _tileSize;

}

@property (assign) _NSTiledLayer * tiledLayer; 
@property (readonly) CGRect activeRect;                     //@synthesize activeRect=_activeRect - In the implementation block
@property (readonly) CGRect coverageRect;                   //@synthesize coverageRect=_coverageRect - In the implementation block
@property (readonly) CGSize tileSize;                       //@synthesize tileSize=_tileSize - In the implementation block
@property (readonly) CGRect presentationRect;               //@synthesize presentationRect=_presentationRect - In the implementation block
-(id)init;
-(void)dealloc;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void*)CA_copyRenderValue;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setPreparedContentRect:(CGRect)arg1 ;
-(char)NS_canDrawLayer:(id)arg1 ;
-(void)invalidateRect:(CGRect)arg1 ;
-(void)CA_prepareRenderValue;
-(void)_performWorkOnTilesOutwardFromRect:(CGRect)arg1 scrollVelocity:(CGPoint)arg2 handler:(/*^block*/id)arg3 ;
-(void)_removeNonVisibleTiles;
-(CGRect)_findFirstValidRectStartingAtRect:(CGRect)arg1 scrollVelocity:(CGPoint)arg2 ;
-(CGRect)_findRenderedRectStartingAtRect:(CGRect)arg1 scrollVelocity:(CGPoint)arg2 ;
-(void)_performWorkOnTilesFromVisibleAreaOutward:(/*^block*/id)arg1 scrollVelocity:(CGPoint)arg2 ;
-(CGSize)tileSize;
-(void)purgeExcessTileContents;
-(void)addAllTilesWithNonPurgedContents;
-(CGRect)renderedRectInRect:(CGRect)arg1 scrollVelocity:(CGPoint)arg2 ;
-(char)prefetchContentsInRect:(CGRect)arg1 scrollVelocity:(CGPoint)arg2 ;
-(char)_prefetchTilesWithScrollVelocity:(CGPoint)arg1 hasMorePrefetch:(char*)arg2 ;
-(void)update:(char)arg1 ;
-(_NSTiledLayer *)tiledLayer;
-(void)setTiledLayer:(_NSTiledLayer *)arg1 ;
-(void)updateContentsScale:(double)arg1 ;
-(void)updateContentsScaleSize:(CGSize)arg1 ;
-(CGRect)activeRect;
-(CGRect)coverageRect;
-(CGRect)presentationRect;
@end

