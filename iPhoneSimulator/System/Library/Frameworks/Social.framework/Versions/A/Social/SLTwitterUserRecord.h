/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/SLMicroBlogUserRecord.h>
#import <Social/NSSecureCoding.h>

@class NSString, NSURL;

@interface SLTwitterUserRecord : SLMicroBlogUserRecord <NSSecureCoding> {

	NSString* _id_str;
	NSURL* _objectID;

}

@property (nonatomic,retain) NSString * id_str;              //@synthesize id_str=_id_str - In the implementation block
@property (nonatomic,retain) NSURL * objectID;               //@synthesize objectID=_objectID - In the implementation block
+(id)userRecordWithDictionaryRepresentation:(id)arg1 ;
+(id)userRecordWithScreenName:(id)arg1 ;
+(char)supportsSecureCoding;
-(void)setValuesWithUserDictionary:(id)arg1 ;
-(void)setId_str:(NSString *)arg1 ;
-(NSString *)id_str;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)objectID;
-(void)setObjectID:(NSURL *)arg1 ;
@end

