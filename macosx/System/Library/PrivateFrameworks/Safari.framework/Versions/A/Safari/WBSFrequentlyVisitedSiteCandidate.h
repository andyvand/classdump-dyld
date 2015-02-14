/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WBSHistoryItem;

@interface WBSFrequentlyVisitedSiteCandidate : NSObject {

	float _score;
	WBSHistoryItem* _historyItem;

}

@property (nonatomic,readonly) WBSHistoryItem * historyItem;              //@synthesize historyItem=_historyItem - In the implementation block
@property (nonatomic,readonly) float score;                               //@synthesize score=_score - In the implementation block
-(WBSHistoryItem *)historyItem;
-(id)initWithHistoryItem:(id)arg1 score:(float)arg2 ;
-(float)score;
@end

