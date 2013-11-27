/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class MPMediaEntity, NSString;

@interface _MPMediaLibraryEntityChange : NSObject {

	MPMediaEntity* _entity;
	NSString* _anchor;
	int _deletionType;

}

@property (nonatomic,readonly) MPMediaEntity * entity;              //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) NSString * anchor;                   //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) int deletionType;                    //@synthesize deletionType=_deletionType - In the implementation block
-(id)initWithEntity:(id)arg1 anchor:(id)arg2 deletionType:(int)arg3 ;
-(int)deletionType;
-(id)anchor;
-(id)entity;
-(void).cxx_destruct;
@end
