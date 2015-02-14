/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <AssistantServices/NSSecureCoding.h>
#import <AssistantServices/NSCopying.h>

@class NSString;

@interface AFVoiceInfo : NSObject <NSSecureCoding, NSCopying> {

	char _isCustom;
	NSString* _languageCode;
	long long _gender;

}

@property (nonatomic,readonly) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) long long gender;                     //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) char isCustom;                        //@synthesize isCustom=_isCustom - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)languageCode;
-(id)initWithLanguageCode:(id)arg1 gender:(long long)arg2 isCustom:(char)arg3 ;
-(char)isCustom;
-(long long)gender;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

