/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ReadingListTableViewContentProvider;
@interface ContinuousReadingListDataSourceBase : NSObject {

	id<ReadingListTableViewContentProvider> _contentProvider;

}

@property (nonatomic,retain,readonly) id<ReadingListTableViewContentProvider> contentProvider;              //@synthesize contentProvider=_contentProvider - In the implementation block
+(id)continuousReadingListPageItemForReadingListItem:(id)arg1 ;
-(id<ReadingListTableViewContentProvider>)contentProvider;
-(id)initWithReadingListTableViewContentProvider:(id)arg1 ;
-(id)continuousReadingListPageItemPrecedingPageItem:(id)arg1 ;
-(id)continuousReadingListPageItemFollowingPageItem:(id)arg1 ;
@end

