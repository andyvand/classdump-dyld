/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol WebCoreFrameScrollView
@required
-(void)setScrollingModes:(int)arg1 vertical:(int)arg2 andLock:(BOOL)arg3;
-(void)scrollingModes:(int*)arg1 vertical:(int*)arg2;
-(void)setScrollBarsSuppressed:(BOOL)arg1 repaintOnUnsuppress:(BOOL)arg2;
-(CGPoint*)scrollOrigin;
-(void)setScrollOrigin:(CGPoint)arg1 updatePositionAtAll:(BOOL)arg2 immediately:(BOOL)arg3;
@end
