/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSBitmapImageRep.h>

@interface NSIconRefBitmapImageRep : NSBitmapImageRep {

	OpaqueIconRefRef _iconRef;
	unsigned _bitmapDataAvailable : 1;

}
-(void)finalize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)CGImage;
-(id)TIFFRepresentation;
-(char)draw;
-(void)getBitmapDataPlanes:(char**)arg1 ;
-(void)setPixel:(unsigned long long*)arg1 atX:(long long)arg2 y:(long long)arg3 ;
-(void)getPixel:(unsigned long long*)arg1 atX:(long long)arg2 y:(long long)arg3 ;
-(id)TIFFRepresentationUsingCompression:(unsigned long long)arg1 factor:(float)arg2 ;
-(char*)bitmapData;
-(void)setColor:(id)arg1 atX:(long long)arg2 y:(long long)arg3 ;
-(id)colorAtX:(long long)arg1 y:(long long)arg2 ;
-(long long)_uncachedSize;
-(char)_isValid;
-(char)drawInRect:(CGRect)arg1 ;
-(char)drawAtPoint:(CGPoint)arg1 ;
-(id)initWithIconRef:(OpaqueIconRefRef)arg1 sizeIdentifier:(unsigned)arg2 scaleIdentifier:(unsigned)arg3 ;
-(OpaqueIconRefRef)iconRef;
-(id)initWithIconRef:(OpaqueIconRefRef)arg1 size:(CGSize)arg2 ;
-(void)_ensureBitmapDataAvailable;
@end

