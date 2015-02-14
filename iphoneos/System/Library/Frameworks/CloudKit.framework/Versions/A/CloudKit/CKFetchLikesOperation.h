/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSArray, CKShareID, NSMutableDictionary;

@interface CKFetchLikesOperation : CKOperation {

	NSArray* _itemIDs;
	CKShareID* _shareID;
	unsigned long long _resultsLimit;
	/*^block*/id _fetchLikesCompletionBlock;
	NSMutableDictionary* _userIDsByItemID;
	NSMutableDictionary* _likeCountByItemID;
	NSMutableDictionary* _errorsByItemID;

}

@property (nonatomic,copy) NSArray * itemIDs;                                      //@synthesize itemIDs=_itemIDs - In the implementation block
@property (nonatomic,copy) CKShareID * shareID;                                    //@synthesize shareID=_shareID - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                      //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) id fetchLikesCompletionBlock;                           //@synthesize fetchLikesCompletionBlock=_fetchLikesCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userIDsByItemID;                //@synthesize userIDsByItemID=_userIDsByItemID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * likeCountByItemID;              //@synthesize likeCountByItemID=_likeCountByItemID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByItemID;                 //@synthesize errorsByItemID=_errorsByItemID - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSArray *)itemIDs;
-(void)setItemIDs:(NSArray *)arg1 ;
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
-(unsigned long long)resultsLimit;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(NSMutableDictionary *)errorsByItemID;
-(void)setErrorsByItemID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)userIDsByItemID;
-(void)setUserIDsByItemID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)likeCountByItemID;
-(void)setLikeCountByItemID:(NSMutableDictionary *)arg1 ;
-(id)fetchLikesCompletionBlock;
-(void)setFetchLikesCompletionBlock:(id)arg1 ;
-(id)initWithItems:(id)arg1 inShareWithID:(id)arg2 ;
@end

