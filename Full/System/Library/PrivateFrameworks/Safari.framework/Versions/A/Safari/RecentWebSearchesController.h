/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/WBSRecentWebSearchesController.h>

@interface RecentWebSearchesController : WBSRecentWebSearchesController
+(char)_shouldTrackSearches;
+(id)sharedController;
-(void)clearRecentSearches;
-(void)clearRecentSearchesAddedAfterDate:(id)arg1 ;
-(void)_removeLegacyRecentSearchesData;
-(void)_migrateLegacyData;
@end

