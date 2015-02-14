/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/SLMicroBlogUserRecord.h>
#import <Social/NSSecureCoding.h>

@class NSString, NSURL;

@interface SLTencentWeiboUserRecord : SLMicroBlogUserRecord <NSSecureCoding> {

	NSString* _openid;
	NSURL* _objectID;

}

@property (nonatomic,copy) NSString * openid;               //@synthesize openid=_openid - In the implementation block
@property (nonatomic,retain) NSURL * objectID;              //@synthesize objectID=_objectID - In the implementation block
+(id)userRecordWithDictionaryRepresentation:(id)arg1 ;
+(char)supportsSecureCoding;
-(void)setValuesWithUserDictionary:(id)arg1 ;
-(void)setOpenid:(NSString *)arg1 ;
-(NSString *)openid;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)objectID;
-(void)setObjectID:(NSURL *)arg1 ;
@end

