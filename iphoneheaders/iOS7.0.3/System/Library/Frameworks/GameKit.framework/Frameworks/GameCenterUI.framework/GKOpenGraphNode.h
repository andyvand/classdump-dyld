/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSError;

@interface GKOpenGraphNode : NSObject {

	BOOL _liked;
	NSURL* _url;
	unsigned _numberOfFriendLikes;
	unsigned _numberOfLikes;
	NSError* _error;

}

@property (nonatomic,readonly) NSURL * url;                             //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL liked;                                //@synthesize liked=_liked - In the implementation block
@property (assign,nonatomic) unsigned numberOfFriendLikes;              //@synthesize numberOfFriendLikes=_numberOfFriendLikes - In the implementation block
@property (assign,nonatomic) unsigned numberOfLikes;                    //@synthesize numberOfLikes=_numberOfLikes - In the implementation block
@property (nonatomic,retain) NSError * error;                           //@synthesize error=_error - In the implementation block
+(void)openGraphNodeForURL:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)setError:(id)arg1 ;
-(id)initWithOpenGraphURL:(id)arg1 ;
-(void)fetchLikeStatusWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setLiked:(BOOL)arg1 ;
-(void)setNumberOfFriendLikes:(unsigned)arg1 ;
-(void)setNumberOfLikes:(unsigned)arg1 ;
-(BOOL)liked;
-(unsigned)numberOfLikes;
-(void)sendDislikeEventWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)sendLikeEventWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)clearErrorAndRefetchLikeStatusWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)toggleLikeStatusWithCompletionHandler:(/*^block*/ id)arg1 ;
-(unsigned)numberOfFriendLikes;
-(void)dealloc;
-(id)description;
-(id)url;
-(id)error;
@end
