/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSImageRep.h>

@class NSSnapshotContextSignature;

@interface NSCGImageSnapshotRep : NSImageRep {

	CGImageRef _cgImage;
	NSSnapshotContextSignature* _signature;

}
+(void)lockFocusForCreatingCGImageWithRect:(CGRect)arg1 context:(id)arg2 hints:(id)arg3 flipped:(char)arg4 ;
+(CGImageRef)unlockFocusCreatingCGImageAndDrawingRect:(CGRect*)arg1 ;
+(void)lockFocusForCreatingSnapshotWithRect:(CGRect)arg1 context:(id)arg2 hints:(id)arg3 flipped:(char)arg4 ;
+(id)unlockFocusCreatingCGImageSnapshotRep;
+(char)_deprecated_hasReversedFlippednessInFlippedImages;
+(id)classFallbacksForKeyedArchiver;
+(void)_lockFocusForCreatingSnapshot:(char)arg1 withRect:(CGRect)arg2 context:(id)arg3 hints:(id)arg4 flipped:(char)arg5 ;
+(CGImageRef)_unlockFocusAndPerformBlockUsingCGImageAndCapturingContext:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)pixelsHigh;
-(id)colorSpace;
-(long long)pixelsWide;
-(long long)bitsPerSample;
-(char)hasAlpha;
-(char)draw;
-(CGImageRef)CGImageForProposedRect:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 ;
-(char)_isValid;
-(char)isApplicableForRect:(CGRect)arg1 context:(id)arg2 hints:(id)arg3 ;
-(id)initWithCGImage:(CGImageRef)arg1 drawingRect:(CGRect)arg2 applicableForRect:(CGRect)arg3 context:(id)arg4 hints:(id)arg5 ;
-(char)_snapshotRep_commonSetupWithWithCGImage:(CGImageRef)arg1 snapshotContextSignature:(id)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 snapshotContextSignature:(id)arg2 ;
-(CGImageRef)_snapshotRep_CGImageForProposedRect:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 ;
-(id)fullDescription;
-(Class)classForArchiver;
-(Class)classForKeyedArchiver;
@end

