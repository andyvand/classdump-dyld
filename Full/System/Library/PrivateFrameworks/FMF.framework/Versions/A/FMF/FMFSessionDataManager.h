/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/Versions/A/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet;

@interface FMFSessionDataManager : NSObject {

	NSSet* _followers;
	NSSet* _following;
	NSSet* _locations;

}

@property (nonatomic,retain) NSSet * followers;              //@synthesize followers=_followers - In the implementation block
@property (nonatomic,retain) NSSet * following;              //@synthesize following=_following - In the implementation block
@property (nonatomic,retain) NSSet * locations;              //@synthesize locations=_locations - In the implementation block
+(id)sharedInstance;
-(void)abChanged:(id)arg1 ;
-(NSSet *)followers;
-(NSSet *)following;
-(void)setFollowers:(NSSet *)arg1 ;
-(void)setFollowing:(NSSet *)arg1 ;
-(id)followerForHandle:(id)arg1 ;
-(id)followingForHandle:(id)arg1 ;
-(id)offerExpirationForHandle:(id)arg1 groupId:(id)arg2 ;
-(void)setLocations:(NSSet *)arg1 ;
-(id)locationForHandle:(id)arg1 ;
-(NSSet *)locations;
@end

