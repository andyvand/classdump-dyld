/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MCDisplayNameInfo : NSObject {

	NSString* _shortName;
	NSString* _fullName;

}

@property (nonatomic,copy,readonly) NSString * shortName;              //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullName;               //@synthesize fullName=_fullName - In the implementation block
-(NSString *)shortName;
-(id)initWithShortName:(id)arg1 fullName:(id)arg2 ;
-(id)init;
-(id)debugDescription;
-(NSString *)fullName;
@end

