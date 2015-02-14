/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSImageRep.h>
#import <AppKit/NSSecureCoding.h>

@class NSData, NSColorSpace;

@interface NSBitmapImageRep : NSImageRep <NSSecureCoding> {

	struct {
		unsigned bitsPerPixel : 8;
		unsigned isPlanar : 1;
		unsigned explicitPlanes : 1;
		unsigned imageSourceIsIndexed : 1;
		unsigned dataLoaded : 1;
		unsigned colorModel : 4;
		unsigned tierTwoInfoIsLoaded : 1;
		unsigned respectO : 1;
		unsigned compressionFactor : 14;
		unsigned imageNumber : 8;
		unsigned bitmapFormat : 3;
		unsigned cgImageIsPrimary : 1;
		unsigned compression : 20;
	}  _moreRepFlags;
	unsigned _bytesPerRow;
	id _dataObj;
	NSData* _tiffData;
	id _properties;

}

@property (readonly) char* bitmapData; 
@property (getter=isPlanar,readonly) char planar; 
@property (readonly) long long samplesPerPixel; 
@property (readonly) long long bitsPerPixel; 
@property (readonly) long long bytesPerRow; 
@property (readonly) long long bytesPerPlane; 
@property (readonly) long long numberOfPlanes; 
@property (readonly) unsigned long long bitmapFormat; 
@property (copy,readonly) NSData * TIFFRepresentation; 
@property (readonly) CGImageRef CGImage; 
@property (readonly) NSColorSpace * colorSpace; 
@property (setter=_setBacking:,retain) id _backing;                 //@synthesize dataObj=_dataObj - In the implementation block
+(void)initialize;
+(char)currentThreadRespectOrientation;
+(id)_imagesWithData:(id)arg1 hfsFileType:(id)arg2 extension:(id)arg3 zone:(NSZone*)arg4 expandImageContentNow:(char)arg5 includeAllReps:(char)arg6 ;
+(id)_imageRepWithData:(id)arg1 hfsFileType:(id)arg2 extension:(id)arg3 ;
+(char)defaultRespectOrientation;
+(id)representationOfImageRepsInArray:(id)arg1 usingType:(unsigned long long)arg2 properties:(id)arg3 ;
+(id)imageUnfilteredTypes;
+(id)imageUnfilteredFileTypes;
+(id)imageUnfilteredPasteboardTypes;
+(id)_imagesWithData:(id)arg1 hfsFileType:(id)arg2 extension:(id)arg3 zone:(NSZone*)arg4 expandImageContentNow:(char)arg5 ;
+(id)_imagesFromIcon:(id)arg1 inApp:(id)arg2 zone:(NSZone*)arg3 ;
+(id)_imagesFromURL:(id)arg1 forImage:(id)arg2 fileType:(id)arg3 extension:(id)arg4 ;
+(id)imageRepsWithData:(id)arg1 ;
+(id)imageRepWithData:(id)arg1 ;
+(id)_imageRepsWithData:(id)arg1 hfsFileType:(id)arg2 extension:(id)arg3 expandImageContentNow:(char)arg4 ;
+(char)canInitWithData:(id)arg1 ;
+(char)supportsSecureCoding;
+(void)setDefaultRespectOrientation:(char)arg1 ;
+(void)withCurrentThreadRespectingOrientation:(char)arg1 performBlock:(/*^block*/id)arg2 ;
+(void)getTIFFCompressionTypes:(const unsigned long long*)arg1 count:(long long*)arg2 ;
+(id)localizedNameForTIFFCompressionType:(unsigned long long)arg1 ;
+(id)TIFFRepresentationOfImageRepsInArray:(id)arg1 ;
+(id)TIFFRepresentationOfImageRepsInArray:(id)arg1 usingCompression:(unsigned long long)arg2 factor:(float)arg3 ;
+(void)_setEnableFlippedImageFix:(char)arg1 ;
-(id)JPEGDataWithCompression:(double)arg1 ;
-(CGImageRef)IKCreateCGImage;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(id)colorSpaceName;
-(id)_backing;
-(id)valueForProperty:(id)arg1 ;
-(long long)_imageNumber;
-(char)respectOrientation;
-(void)_loadTierTwoInfoWithCGImage:(CGImageRef)arg1 ;
-(long long)bytesPerRow;
-(long long)numberOfPlanes;
-(long long)samplesPerPixel;
-(unsigned long long)_bitmapFormat;
-(NSColorSpace *)colorSpace;
-(void)_performBlockUsingBacking:(/*^block*/id)arg1 ;
-(void)_setBacking:(id)arg1 ;
-(void)_becomeBackedByCGImage:(CGImageRef)arg1 ;
-(void)_withoutChangingBackingPerformBlockUsingBackingCGImage:(/*^block*/id)arg1 ;
-(char)isPlanar;
-(void)setProperty:(id)arg1 withValue:(id)arg2 ;
-(long long)bitsPerPixel;
-(void)_fromCGImage:(CGImageRef)arg1 performBlockUsingMutableData:(/*^block*/id)arg2 ;
-(void)_withoutChangingBackingPerformBlockUsingBackingMutableData:(/*^block*/id)arg1 ;
-(long long)_colorSpaceModel;
-(long long)_numberOfColorComponentsNotIncludingAlpha;
-(char)_loadTierTwoInfoIfNotYetLoaded;
-(void)_retagBackingWithColorSpace:(id)arg1 ;
-(void)setColorSpaceName:(id)arg1 ;
-(void)_bitmapImageRep_setColorSpaceName:(id)arg1 ;
-(CGImageRef)CGImage;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(void)setCompression:(unsigned long long)arg1 factor:(float)arg2 ;
-(void)_performBlockUsingBackingCGImage:(/*^block*/id)arg1 ;
-(long long)bytesPerPlane;
-(char)_loadTierOneInfoWithCGImage:(CGImageRef)arg1 ;
-(void)_setImageNumber:(long long)arg1 ;
-(char)_loadTierOneInfoWithImageSource:(void*)arg1 imageNumber:(long long)arg2 properties:(CFDictionaryRef)arg3 ;
-(id)initWithBitmapDataPlanes:(char**)arg1 pixelsWide:(long long)arg2 pixelsHigh:(long long)arg3 bitsPerSample:(long long)arg4 samplesPerPixel:(long long)arg5 hasAlpha:(char)arg6 isPlanar:(char)arg7 colorSpaceName:(id)arg8 bitmapFormat:(unsigned long long)arg9 bytesPerRow:(long long)arg10 bitsPerPixel:(long long)arg11 ;
-(id)_initWithImageSource:(void*)arg1 imageNumber:(long long)arg2 properties:(CFDictionaryRef)arg3 ;
-(NSData *)TIFFRepresentation;
-(void)_freeData;
-(void)_freeImage;
-(char)draw;
-(CGImageRef)CGImageForProposedRect:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 ;
-(void)_performBlockUsingBackingMutableData:(/*^block*/id)arg1 ;
-(void)getBitmapDataPlanes:(char**)arg1 ;
-(void)setPixel:(unsigned long long*)arg1 atX:(long long)arg2 y:(long long)arg3 ;
-(void)getPixel:(unsigned long long*)arg1 atX:(long long)arg2 y:(long long)arg3 ;
-(void)getCompression:(unsigned long long*)arg1 factor:(float*)arg2 ;
-(id)TIFFRepresentationUsingCompression:(unsigned long long)arg1 factor:(float)arg2 ;
-(id)representationUsingType:(unsigned long long)arg1 properties:(id)arg2 ;
-(char*)bitmapData;
-(void)_captureDrawing:(/*^block*/id)arg1 ;
-(unsigned long long)bitmapFormat;
-(id)bitmapImageRepByConvertingToColorSpace:(id)arg1 renderingIntent:(long long)arg2 ;
-(id)bitmapImageRepByRetaggingWithColorSpace:(id)arg1 ;
-(id)initForIncrementalLoad;
-(id)_initWithSharedBitmap:(const void*)arg1 rect:(CGRect)arg2 ;
-(id)initWithBitmapDataPlanes:(char**)arg1 pixelsWide:(long long)arg2 pixelsHigh:(long long)arg3 bitsPerSample:(long long)arg4 samplesPerPixel:(long long)arg5 hasAlpha:(char)arg6 isPlanar:(char)arg7 colorSpaceName:(id)arg8 bytesPerRow:(long long)arg9 bitsPerPixel:(long long)arg10 ;
-(id)initWithFocusedViewRect:(CGRect)arg1 ;
-(id)initWithCIImage:(id)arg1 ;
-(long long)incrementalLoadFromData:(id)arg1 complete:(char)arg2 ;
-(char)_loadData;
-(id)initWithData:(id)arg1 ;
-(void)_setSharedIdentifier:(long long)arg1 ;
-(char)_wantsToBeCached;
-(void)setColor:(id)arg1 atX:(long long)arg2 y:(long long)arg3 ;
-(id)colorAtX:(long long)arg1 y:(long long)arg2 ;
-(long long)_uncachedSize;
-(char)_isValid;
-(void)setRespectOrientation:(char)arg1 ;
-(char)canBeCompressedUsing:(unsigned long long)arg1 ;
-(id)_bitmapImageReps;
-(void)colorizeByMappingGray:(double)arg1 toColor:(id)arg2 blackMapping:(id)arg3 whiteMapping:(id)arg4 ;
-(CGImageRef)_getCGImageRefCreateIfNecessary;
-(CGImageRef)_acquireRetainedCGImageRef;
-(CGImageRef)_CGImageRef;
-(void)_setCGImageRef:(CGImageRef)arg1 ;
@end

