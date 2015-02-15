/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:11:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKBookshelfCommonCore.framework/Versions/A/BKBookshelfCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <BKBookshelfCommonCore/BKBookshelfCommonCore-Structs.h>
@class IMImageCache, BKLibrary;

@interface BKLibraryImageSource : NSObject {

	IMImageCache* _imageCache;
	BKLibrary* _library;

}

@property (nonatomic,retain) IMImageCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
@property (__weak) BKLibrary * library;                              //@synthesize library=_library - In the implementation block
-(id)resizeImage:(id)arg1 size:(CGSize)arg2 ;
-(id)genericImageForLibraryAsset:(id)arg1 size:(CGSize)arg2 ;
-(void)_dataSourceImageForLibraryAsset:(id)arg1 size:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)imageCacheImageForLibraryAsset:(id)arg1 size:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeImagesForAssetID:(id)arg1 ;
-(id)imageForLibraryAsset:(id)arg1 size:(CGSize)arg2 ;
-(id)placeHolderImageForLibraryAsset:(id)arg1 size:(CGSize)arg2 ;
-(void)imageForLibraryAsset:(id)arg1 size:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)setImageCache:(IMImageCache *)arg1 ;
-(IMImageCache *)imageCache;
-(BKLibrary *)library;
-(void)setLibrary:(BKLibrary *)arg1 ;
@end
