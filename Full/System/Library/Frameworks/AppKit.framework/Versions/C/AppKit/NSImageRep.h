/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSSecureCoding.h>
#import <AppKit/NSCopying.h>
#import <AppKit/NSCoding.h>

@class NSString;

@interface NSImageRep : NSObject <NSSecureCoding, NSCopying, NSCoding> {

	struct {
		unsigned hasAlpha : 1;
		unsigned isOpaque : 1;
		unsigned cacheParamsComputed : 1;
		unsigned cacheAlphaComputed : 1;
		unsigned loadState : 2;
		unsigned keepCacheWindow : 1;
		unsigned reserved : 1;
		unsigned bitsPerSample : 8;
		unsigned gsaved : 16;
	}  _repFlags;
	NSString* _colorSpaceName;
	CGSize _size;
	int _pixelsWide;
	int _pixelsHigh;

}

@property (assign) CGSize size; 
@property (getter=hasAlpha) char alpha; 
@property (getter=isOpaque) char opaque; 
@property (copy) NSString * colorSpaceName; 
@property (assign) long long bitsPerSample; 
@property (assign) long long pixelsWide; 
@property (assign) long long pixelsHigh; 
+(void)initialize;
+(id)imageFileTypes;
+(id)imageUnfilteredTypes;
+(id)imageUnfilteredFileTypes;
+(id)imageUnfilteredPasteboardTypes;
+(char)canInitWithData:(id)arg1 ;
+(char)supportsSecureCoding;
+(char)_deprecated_hasReversedFlippednessInFlippedImages;
+(char)canInitWithPasteboard:(id)arg1 ;
+(id)imageTypes;
+(id)_imageRepsWithContentsOfURL:(id)arg1 expandImageContentNow:(char)arg2 giveUpOnNetworkURLsWithoutGoodExtensions:(char)arg3 ;
+(id)imagePasteboardTypes;
+(id)imageRepsWithContentsOfFile:(id)arg1 ;
+(id)imageRepsWithContentsOfURL:(id)arg1 ;
+(Class)imageRepClassForData:(id)arg1 ;
+(Class)imageRepClassForFileType:(id)arg1 ;
+(id)_imageRepsWithData:(id)arg1 fileType:(id)arg2 hfsType:(id)arg3 expandImageContentNow:(char)arg4 ;
+(id)registeredImageRepClasses;
+(id)_imageTypesNoCaching;
+(id)_imagePasteboardTypesNoCaching;
+(id)_imageFileTypesNoCaching;
+(id)_imageRepsWithContentsOfURL:(id)arg1 expandImageContentNow:(char)arg2 ;
+(Class)_imageRepClassForFileNameExtension:(id)arg1 andHFSFileType:(id)arg2 ;
+(id)imageRepWithContentsOfFile:(id)arg1 ;
+(Class)imageRepClassForPasteboardType:(id)arg1 ;
+(id)_imageRepsWithContentsOfFile:(id)arg1 expandImageContentNow:(char)arg2 ;
+(id)imageRepsWithPasteboard:(id)arg1 ;
+(id)imageRepWithPasteboard:(id)arg1 ;
+(id)imageRepWithContentsOfURL:(id)arg1 ;
+(void)registerImageRepClass:(Class)arg1 ;
+(void)unregisterImageRepClass:(Class)arg1 ;
+(Class)imageRepClassForType:(id)arg1 ;
+(char)_preferFilter;
-(char)hasExpectedGIFAttributes;
-(char)isGIF;
-(long long)IKPixelsWide;
-(long long)IKPixelsHigh;
-(long long)QCSCN_PixelsWide;
-(long long)QCSCN_PixelsHigh;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(NSString *)colorSpaceName;
-(long long)pixelsHigh;
-(id)colorSpace;
-(long long)pixelsWide;
-(long long)bitsPerSample;
-(char)hasAlpha;
-(long long)_numberOfColorComponentsNotIncludingAlpha;
-(void)setColorSpaceName:(NSString *)arg1 ;
-(char)draw;
-(CGImageRef)CGImageForProposedRect:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 ;
-(char)_wantsToBeCached;
-(long long)_uncachedSize;
-(char)_isValid;
-(id)_bitmapImageReps;
-(CGImageRef)_CGImageRef;
-(void)_setCGImageRef:(CGImageRef)arg1 ;
-(void)setOpaque:(char)arg1 ;
-(char)isOpaque;
-(char)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 respectFlipped:(char)arg5 hints:(id)arg6 ;
-(void)setPixelsWide:(long long)arg1 ;
-(void)setPixelsHigh:(long long)arg1 ;
-(void)setBitsPerSample:(long long)arg1 ;
-(void)setAlpha:(char)arg1 ;
-(char)drawInRect:(CGRect)arg1 ;
-(char)drawAtPoint:(CGPoint)arg1 ;
-(id)_imageRepsForEncodingWithCoder:(id)arg1 ;
-(CGImageRef)CGImageForProposedRect:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 flipped:(char)arg4 ;
-(id)_processedHintsForHints:(id)arg1 includeOnlyIfAvailable:(char)arg2 ;
-(void*)_createPatternForRect:(CGRect)arg1 context:(id)arg2 ;
-(id)_bitmapImageRepsForTIFFRepresentation;
-(id)replacementObjectForCoder:(id)arg1 ;
-(long long)_pixelsWideOrResolutionIndependent;
-(long long)_pixelsHighOrResolutionIndependent;
-(id)_defaultImageHintsIncludeOnlyIfAvailable:(char)arg1 ;
-(char)_drawFromRect:(CGRect)arg1 toRect:(CGRect)arg2 operation:(unsigned long long)arg3 alpha:(double)arg4 compositing:(char)arg5 flipped:(char)arg6 ignoreContext:(char)arg7 ;
-(char)_drawOnlyUsesOneDrawingOperation;
-(void)_imageRep_setColorSpaceName:(id)arg1 ;
-(id)_imageRep_colorSpaceName;
-(CGImageRef)_newCGImageForProposedRect:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 flipped:(char)arg4 ;
-(char)_loadDataIfNotYetLoaded;
@end

