/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class IKMipmapItem;

@interface IKMipmapImage : NSObject {

	IKMipmapItem* _mipmaps[4];
	IKMipmapItem* _originalMipmap;
	IKMipmapItem* _varyingMipmap;
	CGSize _originalImageSizeCache;
	unsigned _originalImageIsInvalid : 1;
	unsigned _dirty : 1;
	unsigned _mark : 1;
	unsigned _isReference : 1;

}
-(CGSize)originalImageSize;
-(void)integrateReferenceInstance:(id)arg1 ;
-(id)referenceInstance;
-(void)setIsReference:(char)arg1 ;
-(void)referenceWillDie;
-(void)_mipmapCommonInit;
-(void)setMipmapSizes:(id)arg1 ;
-(void)setMipmapVMUsagePolicy:(id)arg1 ;
-(int)highestMipmapItemIndex;
-(void)setOriginalImageSizeCache:(CGSize)arg1 ;
-(void)invalidateMipMaps;
-(float)originalAspectRatio;
-(char)validateMipmap:(id)arg1 withModel:(id)arg2 withQuality:(int)arg3 ;
-(id)highestMipmapItem;
-(void)checkAndMarkMipmapAsInvalid;
-(char)validateMipmap:(id)arg1 withQuality:(int)arg2 ;
-(id)mipmapWithSize:(int)arg1 ;
-(id)fastMipmapItemForSize:(int)arg1 forOpenGL:(char)arg2 useMinimumQualityThreshold:(char)arg3 ;
-(id)validMipmapItems;
-(id)_fastMipmapItemForSize:(CGSize)arg1 forOpenGL:(char)arg2 useMinimumQualityThreshold:(char)arg3 ;
-(char)varyingMipmapIsValidAndMatchSize:(CGSize)arg1 andQuality:(int)arg2 ;
-(void)_cacheMipmapSize:(CGSize)arg1 fromModel:(id)arg2 ;
-(CGSize)originalImageSizeCache;
-(char)shouldUseOriginalImageToCacheNiceImageWithSize:(CGSize)arg1 ;
-(id)nicestMipmapItemForSize:(CGSize)arg1 forGLRendering:(char)arg2 cacheIt:(char)arg3 ;
-(id)niceMipmapItemForSize:(CGSize)arg1 forGLRendering:(char)arg2 cacheIt:(char)arg3 ;
-(id)fastMipmapItemForSize:(CGSize)arg1 forGLRendering:(char)arg2 ;
-(id)fastestMipmapItemForSize:(CGSize)arg1 forGLRendering:(char)arg2 ;
-(id)lockMipmapAtIndex:(int)arg1 ;
-(void)unlockMipmapItem:(id)arg1 ;
-(id*)mipmapItems;
-(id)originalItem;
-(id)varyingMipmap;
-(void)setOriginalImageIsInvalid:(char)arg1 ;
-(char)originalImageIsInvalid;
-(id)initWithMipmapSizes:(id)arg1 VMUsagePolicy:(id)arg2 ;
-(char)marked;
-(void)mark;
-(void)clearMark;
-(id)mipmapItemAtIndex:(long long)arg1 ;
-(long long)indexOfMipmapItem:(id)arg1 ;
-(void)invalidateOriginalImageSizeCache;
-(void)setImageWithoutInvalidate:(id)arg1 ;
-(char)atLeastOneMipmapItemIsValid;
-(char)allMipmapItemsAreValid;
-(char)validateMipmapAtIndex:(int)arg1 withQuality:(int)arg2 ;
-(int)bestMipmapIndexToValidateForSize:(int)arg1 ;
-(void)setImage:(id)arg1 forMipmapSize:(int)arg2 ;
-(id)fastMipmapItemWithExactSize:(CGSize)arg1 ;
-(id)nicestImageForSize:(CGSize)arg1 forGLRendering:(char)arg2 cacheIt:(char)arg3 ;
-(id)niceImageForSize:(CGSize)arg1 forGLRendering:(char)arg2 cacheIt:(char)arg3 ;
-(id)fastImageForSize:(CGSize)arg1 forGLRendering:(char)arg2 ;
-(id)fastestImageForSize:(CGSize)arg1 forGLRendering:(char)arg2 ;
-(char)preloadMipmapsWithQuality:(int)arg1 ;
-(char)containsMipmapItem:(id)arg1 ;
-(void)freeAllCaches;
-(void)freeTemporaryCache;
-(void)freeOriginalImageCache;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(char)isDirty;
-(id)image;
-(void)setImage:(id)arg1 ;
-(void)_cleanUp;
-(void)setDirty:(char)arg1 ;
@end

