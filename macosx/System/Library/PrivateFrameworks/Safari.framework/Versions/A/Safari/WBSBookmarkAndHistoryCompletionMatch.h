/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/WBSURLCompletionMatch.h>

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch {

	RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>* _match;

}

@property (nonatomic,readonly) id<WBSURLCompletionMatchData> data; 
@property (nonatomic,readonly) float weight; 
-(id)userVisibleURLString;
-(id)originalURLString;
-(id)parsecDomainIdentifier;
-(id)initWithBookmarkAndHistoryCompletionMatch:(PassRefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>*)arg1 ;
-(float)weight;
-(id)title;
-(id<WBSURLCompletionMatchData>)data;
@end

