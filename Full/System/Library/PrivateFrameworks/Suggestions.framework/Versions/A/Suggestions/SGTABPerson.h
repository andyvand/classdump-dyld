/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL;

@interface SGTABPerson : NSObject {

	NSString* uniqueId;
	NSURL* url;

}

@property (readonly) NSString * uniqueId; 
@property (readonly) NSURL * URLToPerson; 
+(id)personWithPerson:(id)arg1 ;
-(NSString *)uniqueId;
-(id)initWithUniqueId:(id)arg1 ;
-(id)initWithPerson:(id)arg1 ;
-(void)dealloc;
-(id)personWithAddressBook:(id)arg1 ;
-(NSURL *)URLToPerson;
@end

