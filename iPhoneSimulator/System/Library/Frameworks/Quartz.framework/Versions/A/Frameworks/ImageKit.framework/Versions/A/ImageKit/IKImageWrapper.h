/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IKImageProxy;
#import <ImageKit/ImageKit-Structs.h>
@class NSURL, NSData, NSBitmapImageRep, NSDictionary;

@interface IKImageWrapper : NSObject {

	NSURL* _url;
	NSData* _dataRepresentation;
	NSBitmapImageRep* _bitmapRepresentation;
	id<IKImageProxy> _imageProxy;
	SCD_Union_IK1* _volatileRep;
	unsigned _volatileRepresentation : 4;
	unsigned _generatedWithIconServices : 1;
	unsigned _underlyingDataAreVolatile : 1;
	unsigned _isReference : 1;
	unsigned _bitmapLocked : 1;
	unsigned _invalid : 1;
	unsigned _quality : 2;
	unsigned _hasAlpha : 1;
	unsigned _hasAlphaValid : 1;
	unsigned _baselineValid : 1;
	unsigned _toplineValid : 1;
	CGSize _cachedSize;
	unsigned _baseline;
	NSDictionary* _info;

}
+(id)imageWithData:(id)arg1 ;
+(id)imageWithObject:(id)arg1 ;
+(id)imageWithNSImage:(id)arg1 ;
+(id)imageWithPath:(id)arg1 ;
+(id)imageWithURL:(id)arg1 ;
+(id)imageWithPasteboard:(id)arg1 ;
+(id)imageWithNSBitmapImageRep:(id)arg1 ;
+(id)imageWithDraggingItem:(id)arg1 ;
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)imageWithCGImageSource:(CGImageSourceRef)arg1 ;
+(id)imageWithIconRef:(OpaqueIconRefRef)arg1 ;
+(id)imageWithSize:(CGSize)arg1 ;
+(id)emptyImage;
+(id)imageWithImageProxy:(id)arg1 ;
+(id)imageWithObject:(id)arg1 scaleFactor:(double)arg2 ;
-(id)info;
-(void)setInfo:(id)arg1 ;
-(void)setFlags:(unsigned short)arg1 ;
-(id)bitmapRepresentation;
-(id)dataRepresentation;
-(id)IK_JPEGRepresentationWithCompressionFactor:(float)arg1 ;
-(void)releaseVolatileImageRep;
-(id)initWithNSImage:(id)arg1 ;
-(id)initWithCGImageSource:(CGImageSourceRef)arg1 ;
-(id)initWithNSBitmapImageRep:(id)arg1 ;
-(id)initWithImageProxy:(id)arg1 ;
-(id)imageInPixelSpaceForTargetResolution:(double)arg1 ;
-(void)setVolatileRepresentation:(int)arg1 ;
-(void)setWasGeneratedWithIconServices:(char)arg1 ;
-(void)setSizeWithoutSavingContent:(CGSize)arg1 ;
-(char)mappedIntoVRAM;
-(unsigned)openGLTextureID;
-(CGPoint)openGLTextureOffset;
-(void)setBitmapRepresentation:(id)arg1 ;
-(void)integrateReferenceInstance:(id)arg1 ;
-(CGImageRef)cgImage;
-(id)_tryToCreateCGImageRepFromNonCGFile:(id)arg1 ;
-(void)_tryCreateBitmapFromVRamRepresentation;
-(CGImageRef)_cgImage;
-(id)nsImage;
-(void)setCGImage:(CGImageRef)arg1 ;
-(id)_nsImage;
-(void)setNSImage:(id)arg1 ;
-(id)nsImage:(char)arg1 ;
-(char)underlyingDataAreVolatile;
-(CGImageSourceRef)cgImageSourceRef:(char)arg1 ;
-(id)ramCopy;
-(char)hasRAMCache;
-(void)setDataRepresentation:(id)arg1 ;
-(void)setImageProxy:(id)arg1 ;
-(char)wasGeneratedWithIconServices;
-(char)hasVolatileCache;
-(int)volatileRepresentation;
-(void)setCGImageSource:(CGImageSourceRef)arg1 ;
-(char)hasBitmapRepresentation;
-(char)hasDataRepresentation;
-(CGSize)cachedSize;
-(id)referenceInstance;
-(void)setIsReference:(char)arg1 ;
-(id)thumbnailWithSize:(CGSize)arg1 antialiased:(char)arg2 quality:(int)arg3 ;
-(void)setQuality:(int)arg1 ;
-(char)hasCGCache;
-(id)_thumbnailWithSize:(CGSize)arg1 antialiased:(char)arg2 quality:(int)arg3 ;
-(void)referenceWillDie;
-(int)quality;
-(char)isVectorial;
-(id)_sizeOfNSImage:(id)arg1 ;
-(void)_updateHasAlphaFlag:(id)arg1 ;
-(int)imageFrameCount;
-(id)animatedGifsCache;
-(float)nextFrameDelayAtIndex:(int)arg1 ;
-(CGImageRef)imageAtFrameIndex:(int)arg1 ;
-(id)_createBitmapImageRepFromCGRepresentation;
-(id)_dataRepresentationFromBitmapRepresentation:(id)arg1 ;
-(id)dataRepresentationFromCGRepresentationWithCompressionFactor:(float)arg1 ;
-(char)isAnimatedGifs;
-(id)GIFRepresentation;
-(id)__bitmapRepresentation;
-(char)mappedAndDecompressedIntoRAM;
-(void)freeCGCache;
-(void)releaseBitmapCache;
-(void)freeRAMCache;
-(void)freeVRAMCache;
-(unsigned)generateNewGLTextureID;
-(void)deleteTextureInContext:(CGLContextObjectRef)arg1 ;
-(id)bestImageForTargetScaleFactor:(double)arg1 sourceScaleFactor:(double*)arg2 ;
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 alpha:(float)arg3 ;
-(id)initEmptyImage;
-(id)initWithOpenGLID:(unsigned)arg1 size:(CGSize)arg2 offset:(CGPoint)arg3 premultiplied:(char)arg4 deleteWhenDone:(char)arg5 ;
-(void)setUnderlyingDataAreVolatile:(char)arg1 ;
-(id)imageWithoutProxy;
-(void)setIsThreadSafe:(char)arg1 ;
-(id)thumbnailWithSize:(CGSize)arg1 antialiased:(char)arg2 qualityRequested:(int)arg3 qualityProduced:(int*)arg4 ;
-(char)isMarkedAsInvalid;
-(int)loopCount;
-(id)imageProxy;
-(void)saveAsTIFFAtPath:(id)arg1 ;
-(void)saveAsJPGAtPath:(id)arg1 ;
-(id)writeToFileWithAutomaticFormat:(id)arg1 ;
-(CGContextRef)cgContext;
-(void)mapIntoVRAM;
-(char)mappedIntoRAM;
-(void)bindCGCache;
-(void)freeCache;
-(char)bitmapIsUsedAsClientStorage;
-(char)textureIsPacked;
-(void)setOpenGLTextureID:(unsigned)arg1 withGLContext:(CGLContextObjectRef)arg2 ;
-(void)setOpenGLTextureOffset:(CGPoint)arg1 ;
-(char)openGLTextureIsPremultiplied;
-(void)setOpenGLTextureIsPremultiplied:(char)arg1 ;
-(float)baseline;
-(float)topline;
-(char)toplineIsCached;
-(char)baselineIsCached;
-(id)imageInPixelSpaceForViewResolution:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)description;
-(id)valueForKey:(id)arg1 ;
-(id)copy;
-(id)url;
-(id)initWithIconRef:(OpaqueIconRefRef)arg1 ;
-(CGSize)size;
-(id)initWithSize:(CGSize)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)lockFocus;
-(void)unlockFocus;
-(id)initWithPath:(id)arg1 ;
-(char)isEmpty;
-(char)hasAlpha;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(id)TIFFRepresentation;
-(id)TIFFRepresentationUsingCompression:(unsigned long long)arg1 factor:(float)arg2 ;
-(id)initWithData:(id)arg1 ;
-(void)setPath:(id)arg1 ;
-(CGSize)_size;
-(char)isValid;
-(id)initWithPasteboard:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(OpaqueIconRefRef)iconRef;
-(void)setIconRef:(OpaqueIconRefRef)arg1 ;
-(unsigned short)flags;
-(CGContextRef)createCGContext;
-(id)imagePath;
@end
