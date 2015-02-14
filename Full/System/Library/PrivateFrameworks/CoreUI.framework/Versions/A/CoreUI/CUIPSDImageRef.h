/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString, _CUIPSDSublayerInfo;

@interface CUIPSDImageRef : NSObject {

	NSString* _path;
	char _parsedForLayers;
	int _file;
	CPSDFile* _psd;
	_CUIPSDSublayerInfo* _rootLayers;

}
+(char)isValidPSDResourceAtPath:(id)arg1 withLayerCount:(unsigned*)arg2 ;
+(char)isValidPSDResourceAtPath:(id)arg1 ;
+(char)isValidPSDResourceAtPath:(id)arg1 withLayerCount:(unsigned*)arg2 validateLayers:(char)arg3 ;
+(char)isValidPSDResourceAtPath:(id)arg1 withImageInfo:(PSDImageInfo*)arg2 ;
-(char)openImageFile;
-(char)loadPSDFileWithLayers:(char)arg1 ;
-(CPSDFile*)_psdFileWithLayers:(char)arg1 ;
-(CGImageRef)_copyCGImageAtAbsoluteIndex:(unsigned)arg1 ;
-(id)_imageAtAbsoluteIndex:(unsigned)arg1 isZeroSizeImage:(char*)arg2 ;
-(id)_imageFromSlice:(unsigned)arg1 atAbsoluteIndex:(unsigned)arg2 isEmptyImage:(char*)arg3 ;
-(id)_patternFromSlice:(unsigned)arg1 atAbsoluteIndex:(unsigned)arg2 isZeroSizeImage:(char*)arg3 ;
-(id)_createMaskFromSlice:(unsigned)arg1 atAbsoluteIndex:(unsigned)arg2 ;
-(CPSDFile*)psdFileForComposite;
-(CGImageRef)createCompositeCGImage;
-(id)imageFromRef:(CGImageRef)arg1 ;
-(CPSDFile*)psdFile;
-(CGRect)_boundsAtAbsoluteIndex:(unsigned)arg1 ;
-(int)_layerIndexFromLayerNames:(id)arg1 indexRangeBegin:(int)arg2 indexRangeEnd:(int)arg3 isTopLevel:(char)arg4 ;
-(id)maskFromCompositeAlphaChannel:(long long)arg1 ;
-(SCD_Struct_CS21)metricsInMask:(id)arg1 forRect:(CGRect)arg2 ;
-(char)_visibilityAtAbsoluteIndex:(unsigned)arg1 ;
-(id)_layerRefAtAbsoluteIndex:(unsigned)arg1 ;
-(id)_layerInfo;
-(id)_namesOfSublayers:(id)arg1 ;
-(PSDImageInfo)imageInfo;
-(id)_fillSampleAtAbsoluteIndex:(unsigned)arg1 ;
-(id)_gradientAtAbsoluteIndex:(unsigned)arg1 ;
-(id)_copySublayerInfoAtAbsoluteIndex:(unsigned)arg1 atRoot:(char)arg2 ;
-(char)_treatDividerAsLayer;
-(int)cgBlendModeForPSDLayerOrLayerEffectBlendMode:(unsigned)arg1 ;
-(CGImageRef)createCGImageAtLayer:(unsigned)arg1 ;
-(CGRect)boundsAtLayer:(unsigned)arg1 ;
-(CGColorSpaceRef)copyColorSpace;
-(id)fillSampleAtLayer:(unsigned)arg1 ;
-(id)colorFromDocumentColor:(double*)arg1 ;
-(id)_colorOverlayFromLayerEffectsInfo:(CPSDObjectEffectsLayerInfo*)arg1 ;
-(id)_gradientOverlayFromLayerEffectsAtAbsoluteIndex:(unsigned)arg1 ;
-(id)_dropShadowFromLayerEffectsInfo:(CPSDObjectEffectsLayerInfo*)arg1 ;
-(id)_innerShadowFromLayerEffectsInfo:(CPSDObjectEffectsLayerInfo*)arg1 ;
-(id)_innerGlowFromLayerEffectsInfo:(CPSDObjectEffectsLayerInfo*)arg1 ;
-(id)_outerGlowFromLayerEffectsInfo:(CPSDObjectEffectsLayerInfo*)arg1 ;
-(id)_bevelEmbossFromLayerEffectsInfo:(CPSDObjectEffectsLayerInfo*)arg1 ;
-(id)imageAtLayer:(unsigned)arg1 ;
-(id)imageAtLayer:(unsigned)arg1 isZeroSizeImage:(char*)arg2 ;
-(id)imageFromSlice:(unsigned)arg1 atLayer:(unsigned)arg2 ;
-(id)imageFromSlice:(unsigned)arg1 atAbsoluteLayer:(unsigned)arg2 ;
-(id)imageFromSlice:(unsigned)arg1 atLayer:(unsigned)arg2 isEmptyImage:(char*)arg3 ;
-(id)patternFromSlice:(unsigned)arg1 atLayer:(unsigned)arg2 ;
-(id)patternFromSlice:(unsigned)arg1 atLayer:(unsigned)arg2 isZeroSizeImage:(char*)arg3 ;
-(id)maskFromSlice:(unsigned)arg1 atLayer:(unsigned)arg2 ;
-(id)compositeImage;
-(CGRect)boundsForSlice:(unsigned)arg1 ;
-(int)absoluteLayerIndexFromLayerNames:(id)arg1 ;
-(SCD_Struct_CS21)metricsInAlphaChannel:(long long)arg1 forRect:(CGRect)arg2 ;
-(char)visibilityAtLayer:(unsigned)arg1 ;
-(id)layerRefAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfLayers;
-(unsigned)numberOfSlices;
-(unsigned)numberOfChannels;
-(id)layerNames;
-(id)metadataString;
-(id)gradientAtLayer:(unsigned)arg1 ;
-(unsigned)_absoluteIndexOfRootLayer:(unsigned)arg1 ;
-(CPSDLayerRecord*)_psdLayerRecordAtAbsoluteIndex:(unsigned)arg1 ;
-(void)_logInvalidAbsoluteIndex:(unsigned)arg1 psd:(CPSDFile*)arg2 ;
-(id)_nameAtAbsoluteIndex:(unsigned)arg1 ;
-(double)_opacityAtAbsoluteIndex:(unsigned)arg1 ;
-(double)_fillOpacityAtAbsoluteIndex:(unsigned)arg1 ;
-(int)_blendModeAtAbsluteIndex:(unsigned)arg1 ;
-(id)_layerEffectsAtAbsoluteIndex:(unsigned)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)path;
-(CGSize)size;
-(id)initWithPath:(id)arg1 ;
@end

