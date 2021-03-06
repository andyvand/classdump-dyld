/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSImageRep.h>

@class NSBitmapImageRep;

@interface NSIconRefImageRep : NSImageRep {

	OpaqueIconRefRef _iconRef;
	unsigned _sizeIdentifier;
	unsigned _scaleIdentifier;
	NSBitmapImageRep* _fallbackBitmap;

}
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(long long)pixelsHigh;
-(long long)pixelsWide;
-(char)hasAlpha;
-(char)draw;
-(CGImageRef)CGImageForProposedRect:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 ;
-(char)_isValid;
-(id)initWithIconRef:(OpaqueIconRefRef)arg1 sizeIdentifier:(unsigned)arg2 scaleIdentifier:(unsigned)arg3 ;
-(OpaqueIconRefRef)iconRef;
-(CGImageRef)_copyCGImage;
-(unsigned)sizeIdentifier;
-(id)_fallbackBitmap;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(unsigned)scaleIdentifier;
@end

