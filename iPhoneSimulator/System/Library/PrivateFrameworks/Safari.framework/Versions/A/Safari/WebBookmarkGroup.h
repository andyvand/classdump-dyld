/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@interface WebBookmarkGroup : NSObject {

	BookmarkGroup* _group;

}
-(BookmarkGroup*)bookmarkGroup;
-(id)topBookmark;
-(id)initWithBookmarkGroup:(BookmarkGroup*)arg1 ;
-(id)bookmarkForUUID:(id)arg1 ;
-(void)setShouldNotifyBookmarksControllerOfReloads:(char)arg1 ;
-(void)removeBookmark:(id)arg1 ;
-(id)insertNewBookmarkListAtIndex:(unsigned)arg1 ofBookmark:(id)arg2 withTitle:(id)arg3 ;
-(id)bookmarksForURLString:(id)arg1 ;
-(id)_insertNewBookmarkAtIndex:(unsigned)arg1 ofBookmark:(id)arg2 withTitle:(id)arg3 type:(int)arg4 ;
-(id)addNewBookmarkListToBookmark:(id)arg1 withTitle:(id)arg2 ;
@end

