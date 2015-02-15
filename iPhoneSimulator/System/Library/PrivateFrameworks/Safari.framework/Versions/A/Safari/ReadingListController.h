/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/FetcherDelegate.h>

@class NSString;

@interface ReadingListController : NSObject <FetcherDelegate> {

	unique_ptr<Safari::ReadingListFetcher, std::__1::default_delete<Safari::ReadingListFetcher> >* _backgroundFetcher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)readingListIsAvailable;
+(id)sharedController;
-(id)itemForURLString:(id)arg1 ;
-(id)allItems;
-(void)fetcher:(ReadingListFetcher*)arg1 willFetchItem:(id)arg2 ;
-(void)canFetchAnotherItemWithFetcher:(ReadingListFetcher*)arg1 ;
-(void)fetcher:(ReadingListFetcher*)arg1 didSucceedFetchingURL:(id)arg2 title:(id)arg3 previewText:(id)arg4 mainImage:(id)arg5 readerAvailability:(int)arg6 forItem:(id)arg7 ;
-(void)fetcher:(ReadingListFetcher*)arg1 didFailFetchWithResult:(int)arg2 forItem:(id)arg3 ;
-(void)fetcher:(ReadingListFetcher*)arg1 didFindURL:(id)arg2 forPageNumber:(unsigned long long)arg3 ofItem:(id)arg4 ;
-(void)fetcher:(ReadingListFetcher*)arg1 didFetchWebArchive:(id)arg2 forPageNumber:(unsigned long long)arg3 ofItem:(id)arg4 ;
-(void)fetcher:(ReadingListFetcher*)arg1 didFetchReaderWebArchive:(id)arg2 forItem:(id)arg3 ;
-(void)clearAllItems;
-(void)addItemForCurrentPage:(BrowserContentViewController*)arg1 ;
-(char)addURLsFromPasteboard:(id)arg1 ;
-(void)markItem:(id)arg1 asUnread:(char)arg2 ;
-(char)isFetchInProgress;
-(void)fetchInfoForItem:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
-(unsigned long long)itemCount;
@end

