/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCopying.h>
#import <AppKit/NSCoding.h>
#import <AppKit/NSSecureCoding.h>
#import <AppKit/NSPasteboardReading.h>
#import <AppKit/NSPasteboardWriting.h>

@class NSString, _NSImageAuxiliary, NSURL, NSColor, NSData, NSArray;

@interface NSImage : NSObject <NSCopying, NSCoding, NSSecureCoding, NSPasteboardReading, NSPasteboardWriting> {

	NSString* _name;
	CGSize _size;
	struct {
		unsigned scalable : 1;
		unsigned dataRetained : 1;
		unsigned uniqueWindow : 1;
		unsigned sizeWasExplicitlySet : 1;
		unsigned builtIn : 1;
		unsigned needsToExpand : 1;
		unsigned useEPSOnResolutionMismatch : 1;
		unsigned matchesOnlyOnBestFittingAxis : 1;
		unsigned colorMatchPreferred : 1;
		unsigned multipleResolutionMatching : 1;
		unsigned focusedWhilePrinting : 1;
		unsigned archiveByName : 1;
		unsigned unboundedCacheDepth : 1;
		unsigned flipped : 1;
		unsigned aliased : 1;
		unsigned dirtied : 1;
		unsigned cacheMode : 2;
		unsigned sampleMode : 3;
		unsigned resMatchPreferred : 1;
		unsigned isTemplate : 1;
		unsigned failedToExpand : 1;
		unsigned reserved1 : 8;
	}  _flags;
	id _reps;
	_NSImageAuxiliary* _imageAuxiliary;

}

@property (assign,setter=safari_setTransparencyAnalysisResult:,nonatomic) long long safari_transparencyAnalysisResult; 
@property (nonatomic,readonly) char isAnimated; 
@property (nonatomic,readonly) unsigned long long frameCount; 
@property (nonatomic,copy) NSString * ikProfilePictureAttributedImageName; 
@property (nonatomic,retain) NSURL * ik_fullResolutionFileURL; 
@property (assign) CGSize size; 
@property (copy) NSColor * backgroundColor; 
@property (assign) char usesEPSOnResolutionMismatch; 
@property (assign) char prefersColorMatch; 
@property (assign) char matchesOnMultipleResolution; 
@property (assign) char matchesOnlyOnBestFittingAxis; 
@property (readonly) NSData * TIFFRepresentation; 
@property (copy,readonly) NSArray * representations; 
@property (getter=isValid,readonly) char valid; 
@property (assign) id<NSImageDelegate> delegate; 
@property (assign) unsigned long long cacheMode; 
@property (assign) CGRect alignmentRect; 
@property (copy) NSString * accessibilityDescription; 
@property (assign) NSEdgeInsets capInsets; 
@property (assign) long long resizingMode; 
@property (setter=_setReps:,retain) id _reps;                                                                                       //@synthesize reps=_reps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageWithName_FI:(id)arg1 ;
+(void)drawBorderImage_FI:(id)arg1 middleImage:(id)arg2 borderImage:(id)arg3 inRect:(CGRect)arg4 withOrientation:(unsigned long long)arg5 flipped:(BOOL)arg6 operation:(unsigned long long)arg7 fraction:(double)arg8 ;
+(id)imageNamed:(id)arg1 messagesImageState:(int)arg2 size:(CGSize)arg3 ;
+(id)imageNamed:(id)arg1 messagesImageState:(int)arg2 size:(CGSize)arg3 invertColor:(char)arg4 ;
+(id)imageNamed:(id)arg1 messagesImageState:(int)arg2 ;
+(id)imageNamed:(id)arg1 state:(int)arg2 ;
+(id)imageNamed:(id)arg1 state:(int)arg2 size:(CGSize)arg3 ;
+(id)safari_PNGNamed:(id)arg1 ;
+(id)safari_TIFFNamed:(id)arg1 ;
+(id)safari_menuTemplateImageNamed:(id)arg1 ;
+(id)safari_imageWithContentsOfURL:(id)arg1 ;
+(id)safari_imageWithCGImage:(CGImageRef)arg1 size:(CGSize)arg2 ;
+(id)safari_imageWithImage:(id)arg1 tintColor:(id)arg2 ;
+(id)mapkit_imageNamed:(id)arg1 ;
+(id)_mapkit_imageWithLoDPIData:(id)arg1 hiDPIData:(id)arg2 ;
+(id)_mapkit_imageWithLoDPIImage:(CGImageRef)arg1 hiDPIImage:(CGImageRef)arg2 ;
+(id)_mapkit_imageNamed:(id)arg1 ;
+(id)_mapkit_imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)drawingDictionaryWithBlock:(/*^block*/id)arg1 ;
+(id)compositeImageWithImageDictionaries:(id)arg1 size:(CGSize)arg2 ;
+(id)imagePasteboardTypesWithPreferenceToPNG;
+(id)imageDataForType:(id*)arg1 fromPasteboard:(id)arg2 ;
+(id)rotateImage:(id)arg1 byDegrees:(double)arg2 ;
+(id)imageIconForApplicationWithBundleIdentifier:(id)arg1 ;
+(id)dd_imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)_pathOfImageWithName:(id)arg1 inBundle:(id)arg2 ;
+(id)imageNamed:(id)arg1 color:(id)arg2 ;
+(id)AV_imageNamed:(id)arg1 ;
+(id)imageNamed:(id)arg1 size:(CGSize)arg2 color:(id)arg3 ;
+(id)imageNamed:(id)arg1 size:(CGSize)arg2 ;
+(id)imageNamed:(id)arg1 size:(CGSize)arg2 color:(id)arg3 shadowColor:(id)arg4 shadowSize:(double)arg5 ;
+(id)abImageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)abImageNamed:(id)arg1 inBundle:(id)arg2 tintedWithColor:(id)arg3 ;
+(id)securityLockIcon;
+(id)applicationIcon;
+(id)ikImageNamed:(id)arg1 ;
+(id)ikImageNamed:(id)arg1 ;
+(id)IKNSImageAdditionalPossibleExtensions;
+(id)imageWithName_BU:(id)arg1 ;
+(void)drawBorderImage_BU:(id)arg1 middleImage:(id)arg2 borderImage:(id)arg3 inRect:(CGRect)arg4 withOrientation:(unsigned long long)arg5 flipped:(BOOL)arg6 operation:(unsigned long long)arg7 fraction:(double)arg8 ;
+(void)initialize;
+(id)imageNamed:(id)arg1 ;
+(id)imageFileTypes;
+(id)imageUnfilteredTypes;
+(id)imageUnfilteredFileTypes;
+(id)imageUnfilteredPasteboardTypes;
+(char)supportsSecureCoding;
+(id)imageWithSize:(CGSize)arg1 flipped:(char)arg2 drawingHandler:(/*^block*/id)arg3 ;
+(id)readableTypesForPasteboard:(id)arg1 ;
+(char)canInitWithPasteboard:(id)arg1 ;
+(id)imageTypes;
+(id)imageWithSize:(CGSize)arg1 drawHandler:(/*^block*/id)arg2 ;
+(id)imagePasteboardTypes;
+(char)_canInitWithPasteboard:(id)arg1 allowMultipleFiles:(char)arg2 ;
+(id)_imageNamed:(id)arg1 ;
+(id)_findSystemImageNamed:(id)arg1 ;
+(id)_coreUIImageWithName:(id)arg1 ;
+(id)_searchForImageNamed:(id)arg1 ;
+(id)_searchForSystemImageNamed:(id)arg1 ;
+(id)imageWithImageRep:(id)arg1 ;
+(id)_allNames;
+(id)_catalogImageWithName:(id)arg1 bundle:(id)arg2 ;
+(id)imageWithSize:(CGSize)arg1 drawingIsFlipped:(char)arg2 drawHandler:(/*^block*/id)arg3 ;
+(char)_requireDefaultEndianPremultipliedLastForTIFFDataFromSnapshotReps;
+(void)_invalidateImageTypeCaches;
+(id)_emblemForCount:(long long)arg1 ;
+(id)_templateImageWithImage:(id)arg1 ;
-(id)initWithCGImageRef_FI:(CGImageRef)arg1 ;
-(CGImageRef)createCGImageForProposedRect_FI:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 ;
-(id)initWithvRefNum_FI:(short)arg1 creator:(unsigned)arg2 iconType:(unsigned)arg3 ;
-(id)initFromLegacyResourceFork_FI:(unsigned)arg1 identifier:(long long)arg2 offset:(long long)arg3 ;
-(CGImageRef)createCGImageRef_FI;
-(void)scaleInputLineImage;
-(id)imageFlippedHorizontally:(char)arg1 vertically:(char)arg2 ;
-(id)originalData;
-(id)bitmapImageRep;
-(id)messagesTintedImageWithColor:(id)arg1 ;
-(id)rawGIFData;
-(char)imageIsWithinMaxSize:(CGSize)arg1 andMinSize:(CGSize)arg2 ;
-(CGSize)largestRepSize;
-(CGSize)largestRepPixelSize;
-(void)drawNicelyScaledInRect:(CGRect)arg1 operation:(unsigned long long)arg2 fraction:(double)arg3 ;
-(id)_resizedImageWithFrame:(CGRect)arg1 inSize:(CGSize)arg2 ;
-(id)imageWithMaxSize:(double)arg1 ;
-(id)bitmapImageRepWithPadding:(double)arg1 ;
-(id)messagesTintedImageWithColor:(id)arg1 withSize:(CGSize)arg2 ;
-(id)GIFDataFromRepWithMaxSize:(CGSize)arg1 maxLength:(unsigned long long)arg2 minSize:(CGSize)arg3 ;
-(id)largestRep;
-(id)smallestRep;
-(void)drawNicelyScaledInRect:(CGRect)arg1 inView:(id)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 ;
-(void)drawStretchedInFrame:(CGRect)arg1 inView:(id)arg2 capWidth:(double)arg3 alpha:(double)arg4 ;
-(id)JPEGDataWithMaxSize:(double)arg1 minSize:(double)arg2 compression:(double)arg3 ;
-(void)sizeImageToFitInSize:(CGSize)arg1 ;
-(id)imageByApplyingShadow:(id)arg1 ;
-(id)imageWithSize:(CGSize)arg1 ;
-(id)tintedImageWithColor:(id)arg1 withSize:(CGSize)arg2 ;
-(id)tintedImageWithColor:(id)arg1 ;
-(id)SHKFlippedImageHorizontally:(char)arg1 accountForBackingScale:(char)arg2 ;
-(void)safari_setTransparencyAnalysisResult:(long long)arg1 ;
-(char)safari_isEqualToImage:(id)arg1 ;
-(id)safari_flatImageWithColor:(id)arg1 ;
-(long long)safari_transparencyAnalysisResult;
-(id)safari_imageByScalingToSize:(CGSize)arg1 withImageInterpolation:(unsigned long long)arg2 imageScaling:(unsigned long long)arg3 ;
-(id)_safari_imageWithBackgroundColor:(id)arg1 compositingOperation:(unsigned long long)arg2 ;
-(id)safari_imageByApplyingShadowForDragging;
-(id)safari_imageByScalingToSize:(CGSize)arg1 withImageInterpolation:(unsigned long long)arg2 ;
-(id)safari_iconFilledWithBackgroundColor:(id)arg1 ;
-(void)compositeToRect:(CGRect)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(float)arg4 bounds:(CGRect)arg5 ;
-(void)drawInRect:(CGRect)arg1 blendMode:(int)arg2 alpha:(double)arg3 context:(CGContextRef)arg4 ;
-(id)tintedImageWithColor:(id)arg1 ;
-(double)_mapkit_calculateMeanBrightness;
-(CGImageRef)mapkit_CGImageWithScale:(double)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(id)scaledImageWithSize:(CGSize)arg1 ;
-(CGRect)_centeredRectWithSize:(CGSize)arg1 inRect:(CGRect)arg2 ;
-(id)blurredImageWithRadius:(int)arg1 ;
-(id)tintedImageWithColor:(id)arg1 ;
-(id)tintedImageWithColor:(id)arg1 size:(CGSize)arg2 ;
-(unsigned long long)frameCount;
-(char)isAnimated;
-(id)bitmapImageRep;
-(id)opaqueImage;
-(id)PNGData;
-(void)drawTransformedInRect:(CGRect)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 flip:(char)arg5 ;
-(double)pixelsHigh;
-(double)pixelsWide;
-(id)disabledImage;
-(void)_web_dissolveToFraction:(float)arg1 ;
-(void)_web_scaleToMaxSize:(CGSize)arg1 ;
-(void)_web_saveAndOpen;
-(id)imageWithInsets:(NSEdgeInsets)arg1 ;
-(CGRect)abBounds;
-(id)abCroppedImageWithRect:(CGRect)arg1 ;
-(id)abImageTintedWithColor:(id)arg1 ;
-(id)abReflectionWithInitialAlpha:(double)arg1 height:(double)arg2 ;
-(id)abJPEGImageDataWithCompressionFactor:(id)arg1 ;
-(id)abDetectedFaces;
-(void)abRunWithLockedFocus:(/*^block*/id)arg1 ;
-(id)abReflection;
-(id)abImageByFlippingRTLIfNeeded;
-(id)abImageCroppedToAspectRatio:(double)arg1 centerSquareRect:(CGRect)arg2 translatedCenterRect:(CGRect*)arg3 ;
-(id)abJPEGImageDataWithMaximumLength:(unsigned long long)arg1 minimumQuality:(double)arg2 ;
-(CGRect)abSuggestedCroppingRect;
-(id)abImageTintedWithGradient:(id)arg1 ;
-(id)abImageWithCircleBackground:(id)arg1 ;
-(id)abImageScaledBy:(double)arg1 ;
-(id)resizeTo:(double)arg1 ;
-(id)tintedImageWithColor:(id)arg1 operation:(unsigned long long)arg2 ;
-(NSString *)ikProfilePictureAttributedImageName;
-(void)setIkProfilePictureAttributedImageName:(NSString *)arg1 ;
-(NSURL *)ik_fullResolutionFileURL;
-(void)setIk_fullResolutionFileURL:(NSURL *)arg1 ;
-(CGSize)IKIPLargestRepSize;
-(void)IKIPDrawNicelyScaledInRect:(CGRect)arg1 operation:(unsigned long long)arg2 fraction:(float)arg3 ;
-(id)IKIPImageWithMaxSize:(int)arg1 withLeftPad:(int)arg2 ;
-(id)IKIPDataWithMaxSize:(double)arg1 type:(unsigned long long)arg2 compression:(double)arg3 ;
-(void)IKIPDrawNicelyScaledInRect:(CGRect)arg1 inView:(id)arg2 operation:(unsigned long long)arg3 fraction:(float)arg4 ;
-(id)IKIPImageWithMaxSize:(int)arg1 ;
-(id)IKIPJPEGDataWithMaxSize:(double)arg1 compression:(float)arg2 ;
-(id)IKIPPNGDataWithMaxSize:(double)arg1 compression:(double)arg2 ;
-(char)IKFixDPI;
-(id)ikSquareThumbnailOfSize:(double)arg1 scaleMode:(long long)arg2 makeOpaque:(char)arg3 ignoreBackingScaleFactor:(char)arg4 ;
-(id)ikDetectedFaces;
-(id)IK_JPEGRepresentationWithCompressionFactor:(float)arg1 ;
-(id)IK_PNGRepresentationWithCompressionFactor:(float)arg1 ;
-(id)IK_TIFFRepresentationWithCompressionFactor:(float)arg1 ;
-(id)IK_GIFRepresentation;
-(id)IKAnimatedRepresentation;
-(CGSize)IKSize;
-(id)ikSquareThumbnailOfSize:(double)arg1 scaleMode:(long long)arg2 ;
-(CGRect)ikFaceRect;
-(char)QCSCN_FixDPI;
-(CGSize)QCSCN_Size;
-(id)_ql_tintedImageWithColor:(id)arg1 withSize:(CGSize)arg2 rescale:(char)arg3 ;
-(void*)QTHUD_contentForProposedRect:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 ;
-(CGLayerRef)QTHUD_CGLayerForProposedRect:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 ;
-(CGImageRef)createCGImageForProposedRect_BU:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 ;
-(CGImageRef)createCGImageRef_BU;
-(id)initWithCGImageRef_BU:(CGImageRef)arg1 ;
-(id)initWithvRefNum_BU:(short)arg1 creator:(unsigned)arg2 iconType:(unsigned)arg3 ;
-(id)initFromLegacyResourceFork_BU:(unsigned)arg1 identifier:(long long)arg2 offset:(long long)arg3 ;
-(id)init;
-(void)setDelegate:(id<NSImageDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(char)setName:(id)arg1 ;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)name;
-(void)setFlipped:(char)arg1 ;
-(void)setTemplate:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIconRef:(OpaqueIconRefRef)arg1 ;
-(id)_imageByBadgingWithImage:(id)arg1 rect:(CGRect)arg2 ;
-(NSString *)accessibilityDescription;
-(id<NSImageDelegate>)delegate;
-(CGSize)size;
-(id)initWithSize:(CGSize)arg1 ;
-(void)setCachedSeparately:(char)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)lockFocus;
-(void)drawAtPoint:(CGPoint)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 ;
-(void)unlockFocus;
-(char)isFlipped;
-(char)hasAlpha;
-(NSData *)TIFFRepresentation;
-(CGImageRef)CGImageForProposedRect:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 ;
-(id)TIFFRepresentationUsingCompression:(unsigned long long)arg1 factor:(float)arg2 ;
-(id)initWithData:(id)arg1 ;
-(NSColor *)backgroundColor;
-(void)lockFocusWithRect:(CGRect)arg1 context:(id)arg2 hints:(id)arg3 flipped:(char)arg4 ;
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 ;
-(void)addRepresentation:(id)arg1 ;
-(void)setAlignmentRect:(CGRect)arg1 ;
-(CGRect)alignmentRect;
-(void)_drawMappingAlignmentRectToRect:(CGRect)arg1 withState:(unsigned long long)arg2 backgroundStyle:(int)arg3 operation:(unsigned long long)arg4 fraction:(double)arg5 flip:(char)arg6 hints:(id)arg7 ;
-(char)_hasMultipleStates;
-(char)isTemplate;
-(NSArray *)representations;
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 respectFlipped:(char)arg5 hints:(id)arg6 ;
-(void)_compositeFlipped:(char)arg1 atPoint:(CGPoint)arg2 fromRect:(CGRect)arg3 operation:(unsigned long long)arg4 fraction:(double)arg5 ;
-(void)setCacheMode:(unsigned long long)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 size:(CGSize)arg2 ;
-(void)drawInRect:(CGRect)arg1 ;
-(void)setImageInterpolation:(unsigned long long)arg1 ;
-(unsigned long long)imageInterpolation;
-(void)lockFocusFlipped:(char)arg1 ;
-(void)_failsafeAllocAuxiliaryStorage;
-(char)hitTestRect:(CGRect)arg1 withImageDestinationRect:(CGRect)arg2 context:(id)arg3 hints:(id)arg4 flipped:(char)arg5 ;
-(void)_compositeFlipped:(char)arg1 inRect:(CGRect)arg2 fromRect:(CGRect)arg3 operation:(unsigned long long)arg4 fraction:(double)arg5 ;
-(id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2 ;
-(id)writableTypesForPasteboard:(id)arg1 ;
-(id)pasteboardPropertyListForType:(id)arg1 ;
-(void*)_createPatternForContext:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(char)isValid;
-(void)setDataRetained:(char)arg1 ;
-(id)initByReferencingFile:(id)arg1 ;
-(id)initWithPasteboard:(id)arg1 ;
-(void)setScalesWhenResized:(char)arg1 ;
-(void)setCacheDepthMatchesImageDepth:(char)arg1 ;
-(void)compositeToPoint:(CGPoint)arg1 operation:(unsigned long long)arg2 ;
-(id)_initWithIconRef:(void*)arg1 includeThumbnail:(char)arg2 ;
-(NSEdgeInsets)capInsets;
-(long long)resizingMode;
-(void)_setCacheRep:(id)arg1 ;
-(unsigned long long)cacheMode;
-(char)_isCachedToRep:(id)arg1 ;
-(id)_newSnapshotRepForCGImage:(CGImageRef)arg1 drawingRect:(CGRect)arg2 applicableForRect:(CGRect)arg3 context:(id)arg4 processedHints:(id)arg5 ;
-(id)_newSnapshotRepForRep:(id)arg1 rect:(CGRect)arg2 context:(id)arg3 processedHints:(id)arg4 ;
-(id)_defaultImageHintsAndOnlyIfAvailable:(char)arg1 ;
-(void)_setReps:(id)arg1 ;
-(id)_reps;
-(void)_usingRepProviderPerformBlock:(/*^block*/id)arg1 ;
-(void)_setRepProvider:(id)arg1 ;
-(void)_usingRepresentationsPerformBlock:(/*^block*/id)arg1 ;
-(void)_setRepProviderWithRepresentationsArray:(id)arg1 ;
-(void)_addRepresentations:(id)arg1 ;
-(void)addRepresentations:(id)arg1 ;
-(char)prefersColorMatch;
-(char)_prefersResolutionMatch;
-(id)_processedHintsForHints:(id)arg1 includeOnlyIfAvailable:(char)arg2 ;
-(char)_hasCacheRep;
-(void)_usingCacheRepPerformBlock:(/*^block*/id)arg1 ;
-(id)bestRepresentationAmongRepresentations:(id)arg1 forRect:(CGRect)arg2 context:(id)arg3 hints:(id)arg4 ;
-(id)bestRepresentationForRect:(CGRect)arg1 context:(id)arg2 hints:(id)arg3 ;
-(id)initByReferencingURL:(id)arg1 ;
-(void)_setRepProviderWithReferencingURL:(id)arg1 ;
-(void)_setRepProviderWithReferencingURLs:(id)arg1 ;
-(void)_allocAuxiliaryStorage;
-(id)initWithImageRep:(id)arg1 ;
-(void)_setRepProviderWithIconRef:(OpaqueIconRefRef)arg1 includeThumbnail:(char)arg2 ;
-(void)_setPrefersResolutionMatch:(char)arg1 ;
-(void)_deallocAuxiliaryStorage;
-(char)_legacyAddRepresentationsForIconNamed:(id)arg1 fromIconSectionInAppBinary:(id)arg2 ;
-(void)_imageLevel_setBackgroundColor:(id)arg1 ;
-(void)_setAlignmentRectInNormalizedCoordinates:(CGRect)arg1 ;
-(void)_setAccessibilityDescriptionBacking:(id)arg1 ;
-(id)_imageLevel_backgroundColor;
-(CGRect)_alignmentRectInNormalizedCoordinates;
-(id)_accessibilityDescriptionBackingForArchiving;
-(id)_accessibilityDescriptionBackingForCopying;
-(id)_addRepresentationWithSharedKitWindow:(long long)arg1 rect:(const CGRect*)arg2 ;
-(void)setCapInsets:(NSEdgeInsets)arg1 ;
-(void)setResizingMode:(long long)arg1 ;
-(void)recache;
-(char)scalesWhenResized;
-(unsigned long long)_imageInterpolation;
-(void)_setImageInterpolation:(unsigned long long)arg1 ;
-(id)_accessibilityDescriptionBacking;
-(char)_shouldCacheWhenDrawingRep:(id)arg1 rect:(CGRect)arg2 context:(id)arg3 processedHints:(id)arg4 ;
-(id)_snapshotRepForRep:(id)arg1 rect:(CGRect)arg2 context:(id)arg3 processedHints:(id)arg4 ;
-(void)_cacheSnapshotRep:(id)arg1 ;
-(void)_usingBestRepresentationForRect:(CGRect)arg1 context:(id)arg2 hints:(id)arg3 body:(/*^block*/id)arg4 ;
-(id)_imageDidNotDrawHandlerRep;
-(void)_dispatchImageDidNotDraw:(id)arg1 ;
-(char)isCachedSeparately;
-(char)_whenDrawn:(id)arg1 fills:(const CGRect*)arg2 ;
-(char)_drawRepresentation:(id)arg1 inRect:(CGRect)arg2 withScaling:(char)arg3 ;
-(void)_replaceRepsWithRep:(id)arg1 ;
-(void)_lockFocusOnRepresentation:(id)arg1 rect:(CGRect)arg2 context:(id)arg3 hints:(id)arg4 flipped:(char)arg5 ;
-(void)_usingBestRepresentationAmongRepresentations:(id)arg1 forRect:(CGRect)arg2 context:(id)arg3 hints:(id)arg4 body:(/*^block*/id)arg5 ;
-(void)removeRepresentation:(id)arg1 ;
-(id)bestRepresentationForDevice:(id)arg1 ;
-(id)initByReferencingURLs:(id)arg1 ;
-(id)initWithDataIgnoringOrientation:(id)arg1 ;
-(id)initFromImage:(id)arg1 rect:(CGRect)arg2 ;
-(id)_initWithData:(id)arg1 fileType:(id)arg2 hfsType:(id)arg3 ;
-(void)cancelIncrementalLoad;
-(void)setUsesEPSOnResolutionMismatch:(char)arg1 ;
-(char)usesEPSOnResolutionMismatch;
-(void)setPrefersColorMatch:(char)arg1 ;
-(void)setMatchesOnMultipleResolution:(char)arg1 ;
-(char)matchesOnMultipleResolution;
-(char)matchesOnlyOnBestFittingAxis;
-(void)setMatchesOnlyOnBestFittingAxis:(char)arg1 ;
-(void)_setAntialiased:(char)arg1 ;
-(char)_antialiased;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(void)_dumpFullImageInfo;
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 hints:(id)arg5 ;
-(char)drawRepresentation:(id)arg1 inRect:(CGRect)arg2 ;
-(char)hitTestRect:(CGRect)arg1 withImageDestinationRect:(CGRect)arg2 context:(id)arg3 hints:(id)arg4 ;
-(char)hitTestPoint:(CGPoint)arg1 withImageDestinationRect:(CGRect)arg2 context:(id)arg3 hints:(id)arg4 ;
-(double)recommendedLayerContentsScale:(double)arg1 ;
-(id)layerContentsForContentsScale:(double)arg1 ;
-(void)compositeToPoint:(CGPoint)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 ;
-(void)dissolveToPoint:(CGPoint)arg1 fromRect:(CGRect)arg2 fraction:(double)arg3 ;
-(char)_composite:(long long)arg1 delta:(double)arg2 fromRect:(CGRect)arg3 toPoint:(CGPoint)arg4 ;
-(void)compositeToPoint:(CGPoint)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 ;
-(void)compositeToPoint:(CGPoint)arg1 operation:(unsigned long long)arg2 fraction:(double)arg3 ;
-(char)isDataRetained;
-(char)cacheDepthMatchesImageDepth;
-(void)dissolveToPoint:(CGPoint)arg1 fraction:(double)arg2 ;
-(void)_compositeToPoint:(CGPoint)arg1 operation:(unsigned long long)arg2 fraction:(double)arg3 ;
-(void)_compositeToPoint:(CGPoint)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 ;
-(void)lockFocusOnRepresentation:(id)arg1 ;
-(void*)CA_copyRenderValue;
-(char)NS_needsRecommitOnDefaultContentsScaleChange;
@end

