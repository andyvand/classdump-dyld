/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailService.framework/Versions/A/MailService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailService/NSSecureCoding.h>

@class NSData, NSString;

@interface MSAttachment : NSObject <NSSecureCoding> {

	char _isReferenced;
	NSData* _data;
	NSString* _filename;
	NSString* _contentIDWithoutScheme;

}

@property (copy) NSData * data;                                                     //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentID; 
@property (copy) NSString * filename;                                               //@synthesize filename=_filename - In the implementation block
@property (assign) char isReferenced;                                               //@synthesize isReferenced=_isReferenced - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentIDWithoutScheme;              //@synthesize contentIDWithoutScheme=_contentIDWithoutScheme - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)contentID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)data;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 filename:(id)arg2 ;
-(NSString *)contentIDWithoutScheme;
-(char)isReferenced;
-(void)setIsReferenced:(char)arg1 ;
@end

