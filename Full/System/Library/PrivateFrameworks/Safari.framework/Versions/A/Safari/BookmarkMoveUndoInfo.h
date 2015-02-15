/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface BookmarkMoveUndoInfo : NSObject {

	NSString* _parentUUID;
	unsigned long long _midMoveInitialIndex;
	NSMutableArray* _midMoveSourceBookmarkLocations;

}

@property (readonly) NSString * parentUUID;                               //@synthesize parentUUID=_parentUUID - In the implementation block
@property (readonly) unsigned long long midMoveInitialIndex;              //@synthesize midMoveInitialIndex=_midMoveInitialIndex - In the implementation block
-(NSString *)parentUUID;
-(id)initWithParentUUID:(id)arg1 midMoveInitialIndex:(unsigned long long)arg2 ;
-(void)addMidMoveSourceBookmarkLocation:(id)arg1 ;
-(id)midMoveSourceBookmarkLocations;
-(unsigned long long)midMoveInitialIndex;
-(id)init;
@end

