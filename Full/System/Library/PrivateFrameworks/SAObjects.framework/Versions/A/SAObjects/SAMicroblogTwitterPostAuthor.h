/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAMicroblogTwitterPostAuthor : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long followersCount; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSString * profileImageUrl; 
@property (nonatomic,copy) NSString * screenName; 
@property (nonatomic,copy) NSNumber * userId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)twitterPostAuthor;
+(id)twitterPostAuthorWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)screenName;
-(void)setScreenName:(NSString *)arg1 ;
-(id)encodedClassName;
-(long long)followersCount;
-(void)setFollowersCount:(long long)arg1 ;
-(NSString *)profileImageUrl;
-(void)setProfileImageUrl:(NSString *)arg1 ;
-(NSNumber *)userId;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setUserId:(NSNumber *)arg1 ;
@end

