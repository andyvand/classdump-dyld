/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKAssetEpub.bundle/Contents/MacOS/BKAssetEpub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKAssetEpub/BKAssetEpub-Structs.h>
#import <BKAssetEpub/NSCoding.h>

@protocol BKEpubWebPaginationInfo;
@class BKDocument, NSArray, NSDictionary, NSString, BKViewportAttributes, BKEpubCFILocation;

@interface BKDocumentResult : NSObject <NSCoding> {

	char _errorOccurred;
	unsigned long long _pageCount;
	BKDocument* _document;
	NSArray* _pageLocations;
	id<BKEpubWebPaginationInfo> _paginationInfo;
	NSArray* _anchorCFILocations;
	NSDictionary* _prefetchedCFIs;
	NSString* _effectiveWritingMode;
	NSArray* _audioVideoLocations;
	NSArray* _asideList;
	NSString* _documentHref;
	BKViewportAttributes* _viewportAttributes;
	NSArray* _loaderErrors;
	BKEpubCFILocation* _preBreakCFI;
	BKEpubCFILocation* _appliedBreakCFI;
	unsigned long long _appliedElementLength;
	CGSize _sectionSize;

}

@property (assign,nonatomic) unsigned long long pageCount;                           //@synthesize pageCount=_pageCount - In the implementation block
@property (assign,nonatomic) CGSize sectionSize;                                     //@synthesize sectionSize=_sectionSize - In the implementation block
@property (assign,nonatomic,__weak) BKDocument * document;                           //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) NSArray * pageLocations;                                //@synthesize pageLocations=_pageLocations - In the implementation block
@property (nonatomic,copy) id<BKEpubWebPaginationInfo> paginationInfo;               //@synthesize paginationInfo=_paginationInfo - In the implementation block
@property (nonatomic,retain) NSArray * anchorCFILocations;                           //@synthesize anchorCFILocations=_anchorCFILocations - In the implementation block
@property (nonatomic,retain) NSDictionary * prefetchedCFIs;                          //@synthesize prefetchedCFIs=_prefetchedCFIs - In the implementation block
@property (nonatomic,retain) NSString * effectiveWritingMode;                        //@synthesize effectiveWritingMode=_effectiveWritingMode - In the implementation block
@property (nonatomic,retain) NSArray * audioVideoLocations;                          //@synthesize audioVideoLocations=_audioVideoLocations - In the implementation block
@property (nonatomic,retain) NSArray * asideList;                                    //@synthesize asideList=_asideList - In the implementation block
@property (nonatomic,retain) NSString * documentHref;                                //@synthesize documentHref=_documentHref - In the implementation block
@property (nonatomic,retain) BKViewportAttributes * viewportAttributes;              //@synthesize viewportAttributes=_viewportAttributes - In the implementation block
@property (assign,nonatomic) char errorOccurred;                                     //@synthesize errorOccurred=_errorOccurred - In the implementation block
@property (nonatomic,copy) NSArray * loaderErrors;                                   //@synthesize loaderErrors=_loaderErrors - In the implementation block
@property (nonatomic,retain) BKEpubCFILocation * preBreakCFI;                        //@synthesize preBreakCFI=_preBreakCFI - In the implementation block
@property (nonatomic,retain) BKEpubCFILocation * appliedBreakCFI;                    //@synthesize appliedBreakCFI=_appliedBreakCFI - In the implementation block
@property (assign,nonatomic) unsigned long long appliedElementLength;                //@synthesize appliedElementLength=_appliedElementLength - In the implementation block
+(CGPoint)initialWritingPointForRect:(CGRect)arg1 writingMode:(id)arg2 ;
+(CGPoint)finalWritingPointForRect:(CGRect)arg1 writingMode:(id)arg2 ;
+(CGPoint)initialWritingPointForWritingMode:(id)arg1 ;
+(CGPoint)p_writingPointForRect:(CGRect)arg1 writingPoint:(CGPoint)arg2 ;
+(CGPoint)finalWritingPointForWritingMode:(id)arg1 ;
+(void)paginationResultForDocument:(id)arg1 loader:(id)arg2 paginationInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)fixedResultForDocument:(id)arg1 loader:(id)arg2 paginationInfo:(id)arg3 location:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)getCFIRectsForLocations:(id)arg1 loader:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)getPageLocationsForDocument:(id)arg1 loader:(id)arg2 writingMode:(id)arg3 paginationInfo:(id)arg4 retryCount:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
+(void)p_applyPageBreakForCFILocation:(id)arg1 document:(id)arg2 loader:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)p_generatePageLocationsWithPageCount:(unsigned long long)arg1 loader:(id)arg2 writingMode:(id)arg3 sectionSize:(CGSize)arg4 paginationInfo:(id)arg5 completion:(/*^block*/id)arg6 ;
+(id)splitCFILocation:(id)arg1 withResult:(id)arg2 ;
+(id)unionCFILocation:(id)arg1 withResult:(id)arg2 ;
-(NSString *)documentHref;
-(void)setDocumentHref:(NSString *)arg1 ;
-(void)setPrefetchedCFIs:(NSDictionary *)arg1 ;
-(void)setAsideList:(NSArray *)arg1 ;
-(void)setSectionSize:(CGSize)arg1 ;
-(NSDictionary *)prefetchedCFIs;
-(CGSize)sectionSize;
-(NSArray *)anchorCFILocations;
-(void)setPreBreakCFI:(BKEpubCFILocation *)arg1 ;
-(char)errorOccurred;
-(id<BKEpubWebPaginationInfo>)paginationInfo;
-(NSArray *)loaderErrors;
-(NSArray *)pageLocations;
-(NSString *)effectiveWritingMode;
-(BKViewportAttributes *)viewportAttributes;
-(NSArray *)audioVideoLocations;
-(NSArray *)asideList;
-(void)setViewportAttributes:(BKViewportAttributes *)arg1 ;
-(void)setAppliedElementLength:(unsigned long long)arg1 ;
-(void)setEffectiveWritingMode:(NSString *)arg1 ;
-(void)setAudioVideoLocations:(NSArray *)arg1 ;
-(void)setPageLocations:(NSArray *)arg1 ;
-(void)setAppliedBreakCFI:(BKEpubCFILocation *)arg1 ;
-(void)setAnchorCFILocations:(NSArray *)arg1 ;
-(void)setErrorOccurred:(char)arg1 ;
-(void)setLoaderErrors:(NSArray *)arg1 ;
-(void)setPaginationInfo:(id<BKEpubWebPaginationInfo>)arg1 ;
-(unsigned long long)appliedElementLength;
-(BKEpubCFILocation *)preBreakCFI;
-(BKEpubCFILocation *)appliedBreakCFI;
-(void)setPageCount:(unsigned long long)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BKDocument *)document;
-(unsigned long long)pageCount;
-(void)setDocument:(BKDocument *)arg1 ;
@end

