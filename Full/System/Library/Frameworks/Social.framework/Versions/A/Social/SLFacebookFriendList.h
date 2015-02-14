/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SLFacebookFriendList : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSString* _type;

}

@property (retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (retain) NSString * type;                    //@synthesize type=_type - In the implementation block
+(id)friendListWithDictionary:(id)arg1 ;
+(id)friendListsWithResponseData:(id)arg1 ;
-(id)initWithFriendListDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
@end

