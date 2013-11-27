/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <WebUI/WBSURLCompletionMatch.h>

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch {

	void* _private;

}

@property (nonatomic,readonly) <WBSURLCompletionMatchData> * data; 
-(void)dealloc;
-(id)data;
-(id)title;
-(id)originalURLString;
-(id)userVisibleURLString;
-(id)initWithBookmarkAndHistoryCompletionMatch:(PassRefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>*)arg1 ;
@end
