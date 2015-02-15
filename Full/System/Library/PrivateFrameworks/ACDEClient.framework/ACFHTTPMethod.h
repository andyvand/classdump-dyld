/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ACDEClient.framework/ACDEClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary, NSData;

@interface ACFHTTPMethod : NSObject {

	NSString* _name;
	NSDictionary* _headerFields;
	NSData* _body;

}

@property (retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (retain) NSDictionary * headerFields;              //@synthesize headerFields=_headerFields - In the implementation block
@property (retain) NSData * body;                            //@synthesize body=_body - In the implementation block
+(id)methodWithName:(id)arg1 headerFields:(id)arg2 body:(id)arg3 ;
+(id)methodWithName:(id)arg1 headerFields:(id)arg2 bodyPropertyList:(id)arg3 error:(id*)arg4 ;
+(id)method;
-(id)initWithName:(id)arg1 headerFields:(id)arg2 body:(id)arg3 ;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(NSDictionary *)headerFields;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end
