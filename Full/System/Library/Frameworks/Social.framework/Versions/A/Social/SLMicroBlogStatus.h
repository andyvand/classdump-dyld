/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/NSSecureCoding.h>

@class NSString, NSArray;

@interface SLMicroBlogStatus : NSObject <NSSecureCoding> {

	NSString* _statusText;
	NSArray* _imageData;
	NSArray* _imageAssetURLs;
	NSString* _maskedApplicationID;
	NSString* _inReplyToStatusID;

}

@property (nonatomic,retain) NSString * statusText;                       //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,retain) NSArray * imageData;                         //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSArray * imageAssetURLs;                    //@synthesize imageAssetURLs=_imageAssetURLs - In the implementation block
@property (nonatomic,retain) NSString * maskedApplicationID;              //@synthesize maskedApplicationID=_maskedApplicationID - In the implementation block
@property (nonatomic,retain) NSString * inReplyToStatusID;                //@synthesize inReplyToStatusID=_inReplyToStatusID - In the implementation block
+(char)supportsSecureCoding;
-(void)setImageAssetURLs:(NSArray *)arg1 ;
-(void)setMaskedApplicationID:(NSString *)arg1 ;
-(NSArray *)imageAssetURLs;
-(NSString *)maskedApplicationID;
-(NSString *)inReplyToStatusID;
-(void)setInReplyToStatusID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStatusText:(NSString *)arg1 ;
-(NSString *)statusText;
-(void)setImageData:(NSArray *)arg1 ;
-(NSArray *)imageData;
@end

