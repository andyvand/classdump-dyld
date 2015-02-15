/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/WBSURLCompletionMatchData.h>

@class NSString;

@interface URLCompletionMatchBookmarkData : NSObject <WBSURLCompletionMatchData> {

	RefPtr<Safari::Bookmark>* _bookmark;

}

@property (nonatomic,readonly) Bookmark* bookmark; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * originalURLString; 
@property (nonatomic,readonly) char containsBookmark; 
@property (nonatomic,readonly) double lastVisitedTimeInterval; 
@property (nonatomic,readonly) char lastVisitWasFailure; 
-(double)lastVisitedTimeInterval;
-(id)initWithBookmark:(PassRefPtr<Safari::Bookmark>*)arg1 ;
-(Bookmark*)bookmark;
-(NSString *)originalURLString;
-(char)lastVisitWasFailure;
-(id)matchDataByMergingWithMatchData:(id)arg1 ;
-(void)enumeratePageTitlesUsingBlock:(/*^block*/id)arg1 ;
-(id)pageTitleAtIndex:(unsigned long long)arg1 ;
-(id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1 ;
-(void)enumerateUserVisibleURLsUsingBlock:(/*^block*/id)arg1 ;
-(id)userVisibleURLStringAtIndex:(unsigned long long)arg1 ;
-(id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1 ;
-(char)matchesAutocompleteTrigger:(id)arg1 ;
-(float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2 ;
-(float)topSitesScoreForPageTitleAtIndex:(unsigned long long)arg1 atTime:(double)arg2 ;
-(char)containsBookmark;
@end

