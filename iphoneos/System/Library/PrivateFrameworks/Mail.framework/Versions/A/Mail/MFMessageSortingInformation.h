/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFMessageSortContext;
@class NSDictionary;

@interface MFMessageSortingInformation : NSObject {

	char _isSortedAscending;
	char _skipAutomaticSecondarySort;
	id<MFMessageSortContext> _sortContext;
	NSDictionary* _sortValues;

}

@property (assign,nonatomic) char isSortedAscending;                            //@synthesize isSortedAscending=_isSortedAscending - In the implementation block
@property (assign,nonatomic) char skipAutomaticSecondarySort;                   //@synthesize skipAutomaticSecondarySort=_skipAutomaticSecondarySort - In the implementation block
@property (nonatomic,retain) id<MFMessageSortContext> sortContext;              //@synthesize sortContext=_sortContext - In the implementation block
@property (nonatomic,copy) NSDictionary * sortValues;                           //@synthesize sortValues=_sortValues - In the implementation block
-(char)isSortedAscending;
-(void)setIsSortedAscending:(char)arg1 ;
-(char)skipAutomaticSecondarySort;
-(void)setSkipAutomaticSecondarySort:(char)arg1 ;
-(id<MFMessageSortContext>)sortContext;
-(void)setSortContext:(id<MFMessageSortContext>)arg1 ;
-(NSDictionary *)sortValues;
-(void)setSortValues:(NSDictionary *)arg1 ;
-(void)dealloc;
@end

