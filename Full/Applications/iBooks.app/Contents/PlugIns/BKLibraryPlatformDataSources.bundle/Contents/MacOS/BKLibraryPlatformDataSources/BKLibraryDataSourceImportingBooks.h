/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKLibraryPlatformDataSources.bundle/Contents/MacOS/BKLibraryPlatformDataSources
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKLibraryPlatformDataSources/BKLibraryPlatformDataSources-Structs.h>
#import <BKBookshelfCommonCore/BKLibraryDataSource.h>
#import <BKLibraryPlatformDataSources/BKLibraryDataSource.h>

@protocol OS_dispatch_queue;
@class BKAgent, NSObject, NSMutableDictionary, NSString;

@interface BKLibraryDataSourceImportingBooks : BKLibraryDataSource <BKLibraryDataSource> {

	BKAgent* _bookAgent;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _assetsByID;

}

@property (nonatomic,retain) BKAgent * bookAgent;                                     //@synthesize bookAgent=_bookAgent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetsByID;                        //@synthesize assetsByID=_assetsByID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)bookCoverForLibraryAsset:(id)arg1 size:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAssets:(/*^block*/id)arg1 ;
-(char)importURL:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)prioritizeImport:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)updateURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)examineURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)resolveLibraryAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)assetForLibraryAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)canRedownloadAssets;
-(char)canMakeAssetsLocal;
-(char)book:(id)arg1 didChange:(long long)arg2 ;
-(NSMutableDictionary *)assetsByID;
-(void)setAssetsByID:(NSMutableDictionary *)arg1 ;
-(BKAgent *)bookAgent;
-(id)_assetsFromBooks:(id)arg1 ;
-(void)setBookAgent:(BKAgent *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)dealloc;
-(char)isEnabled;
@end

