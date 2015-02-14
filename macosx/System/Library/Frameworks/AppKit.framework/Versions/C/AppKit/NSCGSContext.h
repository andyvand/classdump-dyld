/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSGraphicsContext.h>

@interface NSCGSContext : NSGraphicsContext {

	CGContextRef _cgsContext;

}
+(id)graphicsContextWithAttributes:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(unsigned)contextID;
-(void)saveGraphicsState;
-(void)restoreGraphicsState;
-(void*)graphicsPort;
-(char)isFlipped;
-(id)CIContext;
-(CGPoint)patternPhase;
-(void)setPatternPhase:(CGPoint)arg1 ;
-(void)setCompositingOperation:(unsigned long long)arg1 ;
-(void)_invalidate;
-(void)_releaseCIContext;
-(void)flushGraphics;
-(CGContextRef)_swapContextForCarbonDrawing:(CGContextRef)arg1 ;
-(unsigned)windowID;
-(char)_shouldEnforcePixelAlignment;
-(void)setShouldAntialias:(char)arg1 ;
-(char)shouldAntialias;
-(void)setImageInterpolation:(unsigned long long)arg1 ;
-(unsigned long long)imageInterpolation;
-(unsigned long long)compositingOperation;
-(long long)colorRenderingIntent;
-(void)setColorRenderingIntent:(long long)arg1 ;
-(void)_setShouldEnforcePixelAlignment:(char)arg1 ;
-(CGRect)_alignRect:(CGRect)arg1 force:(char)arg2 ;
-(CGPoint)_alignPoint:(CGPoint)arg1 force:(char)arg2 ;
-(CGSize)_alignSize:(CGSize)arg1 force:(char)arg2 ;
@end

