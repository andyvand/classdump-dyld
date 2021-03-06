/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKBookshelf.bundle/Contents/MacOS/BKBookshelf
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKBookshelfCategoryContentDelegate <NSObject>
@optional
-(void)selectViewController:(id)arg1;

@required
-(void)bookshelfCategoryContentController:(id)arg1 imageForLibraryAsset:(id)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4;
-(id)bookshelfCategoryContentController:(id)arg1 imageForLibraryAsset:(id)arg2 size:(CGSize)arg3;
-(void)bookshelfCategoryContentController:(id)arg1 importURLs:(id)arg2 collection:(id)arg3 completion:(/*^block*/id)arg4;
-(id)collectionForBookshelfCategoryContentController:(id)arg1;
-(id)bookshelfCategoryContentController:(id)arg1 placeholderImageForLibraryAsset:(id)arg2 size:(CGSize)arg3;
-(void)bookshelfCategoryContentController:(id)arg1 openLibraryAssets:(id)arg2;
-(void)bookshelfCategoryContentController:(id)arg1 downloadLibraryAssets:(id)arg2;
-(void)bookshelfCategoryContentController:(id)arg1 libraryAsset:(id)arg2 newUserCoverArt:(id)arg3;
-(char)bookshelfCategoryContentController:(id)arg1 canReplaceCoverOfLibraryAsset:(id)arg2;
-(void)bookshelfCategoryContentController:(id)arg1 setSortAction:(int)arg2;
-(void)toggleLabelsForBookshelfCategoryContentController:(id)arg1;
-(void)bookshelfCategoryContentController:(id)arg1 setFilterAction:(int)arg2;
-(void)firstOpenGoToStore:(id)arg1;
-(void)bookshelfCategoryContentController:(id)arg1 deleteCollection:(id)arg2 deleteBooks:(char)arg3;
-(id)managedObjectContextForBookshelfCategoryContentController:(id)arg1;
-(void)bookshelfCategoryContentController:(id)arg1 openStorePageForSeries:(id)arg2;
-(char)bookshelfCategoryContentController:(id)arg1 canDeleteLibraryAssets:(id)arg2;
-(void)bookshelfCategoryContentController:(id)arg1 deleteLibraryAssets:(id)arg2;
-(void)bookshelfCategoryContentController:(id)arg1 openStorePageForLibraryAsset:(id)arg2;
-(void)bookshelfCategoryContentController:(id)arg1 pauseDownloadForLibraryAssets:(id)arg2;
-(void)bookshelfCategoryContentController:(id)arg1 resumeDownloadForLibraryAssets:(id)arg2;
-(int)filterActionForBookshelfCategoryContentController:(id)arg1;

@end

