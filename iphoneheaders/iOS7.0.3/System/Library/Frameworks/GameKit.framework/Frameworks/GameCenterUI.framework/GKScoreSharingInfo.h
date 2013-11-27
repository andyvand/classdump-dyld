/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSSecureCoding.h>

@class GKLeaderboard, GKPlayer, GKGame, UIImage;

@interface GKScoreSharingInfo : NSObject <NSCoding, NSSecureCoding> {

	BOOL _complete;
	GKLeaderboard* _leaderboardCategory;
	GKPlayer* _player;
	GKGame* _game;
	UIImage* _badgeImage;
	UIImage* _iconImage;

}

@property (nonatomic,retain) GKLeaderboard * leaderboardCategory;              //@synthesize leaderboardCategory=_leaderboardCategory - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKGame * game;                                    //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) UIImage * badgeImage;                             //@synthesize badgeImage=_badgeImage - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                              //@synthesize iconImage=_iconImage - In the implementation block
@property (assign,nonatomic) BOOL complete;                                    //@synthesize complete=_complete - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)game;
-(void)setGame:(id)arg1 ;
-(id)leaderboardCategory;
-(void)setLeaderboardCategory:(id)arg1 ;
-(void)setBadgeImage:(id)arg1 ;
-(id)badgeImage;
-(id)initWithCategoryID:(id)arg1 forGame:(id)arg2 playerID:(id)arg3 ;
-(id)operationThatBlocksUntilLoaded;
-(id)thumbnailForActivityType:(id)arg1 ;
-(id)itemsForActivityType:(id)arg1 ;
-(id)subjectForEmailActivity;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)iconImage;
-(void)setComplete:(BOOL)arg1 ;
-(BOOL)complete;
-(void)setIconImage:(id)arg1 ;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end
