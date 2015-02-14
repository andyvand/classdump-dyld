/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/WebBookmark.h>

@interface WebBookmarkList : WebBookmark
+(id)smallImageForBookmarkList;
-(unsigned long long)numberOfChildren;
-(int)bookmarkType;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfChild:(id)arg1 ;
-(id)leafChildren;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(char)isFolderWithRole:(id)arg1 ;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(void)removeChild:(id)arg1 ;
-(void)setAutomaticallyOpensInTabs:(char)arg1 ;
-(id)folderAndLeafChildren;
-(char)hasDefaultSiteOrFolderIcon;
-(void)setHasDefaultSiteOrFolderIcon:(char)arg1 ;
-(id)_childrenIncludingFolders:(char)arg1 ;
-(id)icon;
@end

