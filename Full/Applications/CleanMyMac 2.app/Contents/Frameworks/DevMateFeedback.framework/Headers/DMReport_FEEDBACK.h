/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/Frameworks/DevMateFeedback.framework/DevMateFeedback
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DevMateFeedback/NSCoding.h>

@class NSString, NSArray;

@interface DMReport_FEEDBACK : NSObject <NSCoding> {

	unsigned long long _type;
	NSString* _userEmail;
	NSString* _userName;
	NSString* _userComment;
	NSArray* _commentAttachments;
	unsigned long long _userAppRating;
	NSString* _additionalInfo;

}

@property (assign,nonatomic) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * userEmail;                          //@synthesize userEmail=_userEmail - In the implementation block
@property (nonatomic,retain) NSString * userName;                           //@synthesize userName=_userName - In the implementation block
@property (nonatomic,retain) NSString * userComment;                        //@synthesize userComment=_userComment - In the implementation block
@property (nonatomic,retain) NSArray * commentAttachments;                  //@synthesize commentAttachments=_commentAttachments - In the implementation block
@property (assign,nonatomic) unsigned long long userAppRating;              //@synthesize userAppRating=_userAppRating - In the implementation block
@property (nonatomic,retain) NSString * additionalInfo;                     //@synthesize additionalInfo=_additionalInfo - In the implementation block
+(id)reportWithType:(unsigned long long)arg1 ;
-(NSArray *)commentAttachments;
-(NSString *)userComment;
-(void)setUserComment:(NSString *)arg1 ;
-(void)setCommentAttachments:(NSArray *)arg1 ;
-(void)setUserAppRating:(unsigned long long)arg1 ;
-(unsigned long long)userAppRating;
-(void)setAdditionalInfo:(NSString *)arg1 ;
-(NSString *)additionalInfo;
-(void)setUserEmail:(NSString *)arg1 ;
-(NSString *)userEmail;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)userName;
-(void)setUserName:(NSString *)arg1 ;
@end

