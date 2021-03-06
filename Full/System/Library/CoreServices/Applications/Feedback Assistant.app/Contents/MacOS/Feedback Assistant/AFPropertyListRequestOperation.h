/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant/AFHTTPRequestOperation.h>

@class NSError;

@interface AFPropertyListRequestOperation : AFHTTPRequestOperation {

	id _responsePropertyList;
	unsigned long long _propertyListReadOptions;
	unsigned long long _propertyListFormat;
	NSError* _propertyListError;

}

@property (nonatomic,retain) id responsePropertyList;                                 //@synthesize responsePropertyList=_responsePropertyList - In the implementation block
@property (assign,nonatomic) unsigned long long propertyListReadOptions;              //@synthesize propertyListReadOptions=_propertyListReadOptions - In the implementation block
@property (assign,nonatomic) unsigned long long propertyListFormat;                   //@synthesize propertyListFormat=_propertyListFormat - In the implementation block
@property (nonatomic,retain) NSError * propertyListError;                             //@synthesize propertyListError=_propertyListError - In the implementation block
+(char)canProcessRequest:(id)arg1 ;
+(id)acceptableContentTypes;
+(id)propertyListRequestOperationWithRequest:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)setCompletionBlockWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(id)responsePropertyList;
-(void)setPropertyListReadOptions:(unsigned long long)arg1 ;
-(unsigned long long)propertyListReadOptions;
-(void)setResponsePropertyList:(id)arg1 ;
-(void)setPropertyListFormat:(unsigned long long)arg1 ;
-(void)setPropertyListError:(NSError *)arg1 ;
-(NSError *)propertyListError;
-(unsigned long long)propertyListFormat;
-(id)initWithRequest:(id)arg1 ;
-(id)error;
@end

