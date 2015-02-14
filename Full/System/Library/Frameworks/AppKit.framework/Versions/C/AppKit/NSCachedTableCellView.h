/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSControl.h>

@class NSImage;

@interface NSCachedTableCellView : NSControl {

	NSImage* _cachedImage;

}

@property (retain) NSImage * cachedImage;              //@synthesize cachedImage=_cachedImage - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(char)isOpaque;
-(void)_setTrackingAreasDirty:(int)arg1 ;
-(int)_trackingAreasDirty;
-(void)setCachedImage:(NSImage *)arg1 ;
-(NSImage *)cachedImage;
@end

