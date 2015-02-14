/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <QuartzCore/CALayer.h>

@interface NSTileLayer : CALayer {

	unsigned _isVisibleTile : 1;
	unsigned _ignoreLayoutCall : 1;
	unsigned _purged : 1;
	unsigned _contentsAreInvalid : 1;

}
-(id)init;
-(void)setNeedsLayout;
-(void)setBounds:(CGRect)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)display;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(char)NS_contentsAligningEnabled;
-(char)NS_hasPrefetchedContents;
-(char)NS_isVisibleTile;
-(char)NS_isPurged;
-(void)NS_setPurged:(char)arg1 ;
-(void)NS_setVisibleTile:(char)arg1 ;
-(void)visibleTileStateChanged;
@end

