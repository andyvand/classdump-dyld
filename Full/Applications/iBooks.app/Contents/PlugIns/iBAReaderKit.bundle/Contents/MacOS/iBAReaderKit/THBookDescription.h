/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class THAsset, NSDictionary, PFDContext, NSString, NSURL;

@interface THBookDescription : NSObject {

	THAsset* mAsset;
	char mIsChapterProof;
	char mLoadedDrmContext;
	NSDictionary* mBookSummary;
	PFDContext* mDrmContext;
	int mOrientationLock;
	char mCitationsAllowed;

}

@property (nonatomic,readonly) THAsset * asset; 
@property (nonatomic,readonly) NSString * storeID; 
@property (nonatomic,readonly) NSURL * storeURL; 
@property (nonatomic,readonly) NSString * annotationID; 
@property (nonatomic,readonly) NSString * databaseKey; 
@property (nonatomic,readonly) NSString * contextDirectoryPath; 
@property (nonatomic,readonly) NSURL * bookBundleUrl; 
@property (nonatomic,readonly) NSString * bookVersionString; 
@property (assign,nonatomic) char isChapterProof; 
@property (nonatomic,readonly) NSString * bookTitle; 
@property (nonatomic,readonly) NSString * bookSubtitle; 
@property (nonatomic,readonly) NSString * publisherName; 
@property (nonatomic,readonly) NSString * bookAuthor; 
@property (nonatomic,readonly) NSString * genre; 
@property (nonatomic,readonly) NSString * isbn; 
@property (nonatomic,readonly) NSString * uniquifier; 
@property (nonatomic,readonly) NSString * authoredVersion; 
@property (nonatomic,readonly) NSString * requiredVersion; 
@property (nonatomic,readonly) char containsUnknownContentVersions; 
@property (nonatomic,readonly) NSString * timestamp; 
@property (nonatomic,readonly) NSDictionary * bookSummary; 
@property (nonatomic,readonly) NSString * language; 
@property (readonly) char autoHyphenate; 
@property (nonatomic,readonly) PFDContext * drmContext; 
@property (nonatomic,readonly) int orientationLock; 
@property (assign,nonatomic) char citationsAllowed; 
@property (readonly) NSString * tspObjectContextPath; 
+(id)displayNameFromFilePath:(id)arg1 ;
+(id)descriptionWithAsset:(id)arg1 ;
+(id)descriptionWithURL:(id)arg1 assetID:(id)arg2 ;
+(char)isSampleAtURL:(id)arg1 ;
+(id)summaryWithURL:(id)arg1 ;
+(id)descriptionWithURL:(id)arg1 ;
+(id)readBookPropertiesFromURL:(id)arg1 error:(id*)arg2 ;
+(char)containsUnknownContentVersions:(id)arg1 ;
+(char)readOpfMetadataWithArchive:(id)arg1 toProperties:(id)arg2 ;
-(NSString *)bookAuthor;
-(void)setCitationsAllowed:(char)arg1 ;
-(NSString *)publisherName;
-(NSString *)bookVersionString;
-(char)bookIsPaginatedForPortrait;
-(id)userDataPath;
-(NSString *)annotationID;
-(char)autoHyphenate;
-(NSDictionary *)bookSummary;
-(NSString *)contextDirectoryPath;
-(id)dataForDocRelativePath:(id)arg1 context:(id)arg2 ;
-(NSString *)bookSubtitle;
-(char)isChapterProof;
-(void)setIsChapterProof:(char)arg1 ;
-(id)libraryManagerInfo;
-(id)initWithAsset:(id)arg1 summary:(id)arg2 ;
-(NSString *)tspObjectContextPath;
-(id)dataForAbsoluteURL:(id)arg1 context:(id)arg2 ;
-(NSString *)authoredVersion;
-(NSString *)uniquifier;
-(int)orientationLock;
-(NSString *)databaseKey;
-(PFDContext *)drmContext;
-(NSURL *)bookBundleUrl;
-(NSString *)isbn;
-(char)bookIsPaginatedForLandscape;
-(char)containsUnknownContentVersions;
-(char)citationsAllowed;
-(char)allowCopy;
-(NSString *)bookTitle;
-(NSString *)requiredVersion;
-(NSURL *)storeURL;
-(NSString *)genre;
-(NSString *)storeID;
-(THAsset *)asset;
-(void)dealloc;
-(NSString *)timestamp;
-(NSString *)language;
-(char)isSample;
@end

