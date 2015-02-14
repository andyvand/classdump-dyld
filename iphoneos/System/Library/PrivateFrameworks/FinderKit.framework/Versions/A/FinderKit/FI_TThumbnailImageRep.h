/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSBitmapImageRep.h>

@class NSDictionary;

@interface FI_TThumbnailImageRep : NSBitmapImageRep {

	double _scaleFactor;
	TNSRef<FI_TInlinePreviewData *> _inlinePreviewData;

}

@property (readonly) double scaleFactor;                         //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign) CGRect contentRect; 
@property (retain) NSDictionary * clientProperties; 
-(double)scaleFactor;
-(id)initWithCGImage:(CGImageRef)arg1 scaleFactor:(double)arg2 ;
-(void)setClientProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)clientProperties;
-(void)setContentRect:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(id)initWithBitmapDataPlanes:(char**)arg1 pixelsWide:(long long)arg2 pixelsHigh:(long long)arg3 bitsPerSample:(long long)arg4 samplesPerPixel:(long long)arg5 hasAlpha:(char)arg6 isPlanar:(char)arg7 colorSpaceName:(id)arg8 bitmapFormat:(unsigned long long)arg9 bytesPerRow:(long long)arg10 bitsPerPixel:(long long)arg11 ;
-(id)initWithBitmapDataPlanes:(char**)arg1 pixelsWide:(long long)arg2 pixelsHigh:(long long)arg3 bitsPerSample:(long long)arg4 samplesPerPixel:(long long)arg5 hasAlpha:(char)arg6 isPlanar:(char)arg7 colorSpaceName:(id)arg8 bytesPerRow:(long long)arg9 bitsPerPixel:(long long)arg10 ;
-(id)initWithFocusedViewRect:(CGRect)arg1 ;
-(id)initWithCIImage:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(CGRect)contentRect;
@end

