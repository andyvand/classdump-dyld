/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebBookmark;

@interface BookmarkRemovalUndoInfo : NSObject {

	WebBookmark* _bookmark;
	WebBookmark* _parent;
	unsigned long long _index;

}

@property (nonatomic,retain,readonly) WebBookmark * bookmark;              //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,retain,readonly) WebBookmark * parent;                //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) unsigned long long index;                   //@synthesize index=_index - In the implementation block
+(id)infoWithBookmark:(id)arg1 ;
-(id)initWithBookmark:(id)arg1 ;
-(WebBookmark *)bookmark;
-(id)init;
-(unsigned long long)index;
-(WebBookmark *)parent;
@end

