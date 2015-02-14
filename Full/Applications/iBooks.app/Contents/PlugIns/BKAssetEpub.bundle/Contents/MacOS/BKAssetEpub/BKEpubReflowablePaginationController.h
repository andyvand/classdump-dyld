/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKAssetEpub.bundle/Contents/MacOS/BKAssetEpub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKAssetEpub/BKEpubPaginatorPaginationController.h>

@class NSOperationQueue;

@interface BKEpubReflowablePaginationController : BKEpubPaginatorPaginationController {

	char _torndown;
	NSOperationQueue* _paginationQueue;

}

@property (nonatomic,retain) NSOperationQueue * paginationQueue;              //@synthesize paginationQueue=_paginationQueue - In the implementation block
@property (assign,nonatomic) char torndown;                                   //@synthesize torndown=_torndown - In the implementation block
-(void)stopPagination;
-(void)setTorndown:(char)arg1 ;
-(char)torndown;
-(id)initWithBook:(id)arg1 loaderPool:(id)arg2 paginationInfo:(id)arg3 loadCache:(char)arg4 ;
-(NSOperationQueue *)paginationQueue;
-(void)paginateDocument:(id)arg1 ;
-(void)p_paginateDocument:(id)arg1 retryCount:(unsigned long long)arg2 ;
-(void)setPaginationQueue:(NSOperationQueue *)arg1 ;
-(void)teardown;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

